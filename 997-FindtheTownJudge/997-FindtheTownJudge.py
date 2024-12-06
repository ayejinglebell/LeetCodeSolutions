class Solution(object):
    def findJudge(self, n, trust):
        """
        :type n: int
        :type trust: List[List[int]]
        :rtype: int
        """
        #the trust array length should not be less than the
        #number of persons because all the persons have to be considered
        if len(trust) < n - 1:
            return -1

        #creating two arrays to see the trust parameter
        trustsOther = [0]*(n+1)
        everyoneTrusts = [0]*(n+1)

        for a,b in trust:
            trustsOther[a] +=1
            everyoneTrusts[b] +=1

        #the first element should be trusting the second element
        #the second should not trust any to have a town judge
        for p in range(1, n+1):
            if everyoneTrusts[p] == n-1 and trustsOther[p] == 0:
                return p
        return -1
