class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        /*
        1. we have an array of piles of bananas koko can eat
        2. now she needs to have a minimum speed i.e k per hour so that she can eat all the piles
        the minimum
        3. the maximum speed at which she can eat the bananas is the maximum element of the array
        4. so we keep iterating the array from 1 to max to find the k <= h
        5. so essentially we are searching, so this can be done with binary search because at 
        the pivot, either it will be k or the window left to it or right to it will have the k
        */
        int l = 1; // the left most element to do binary search
        int r = *max_element(piles.begin(), piles.end()); // the right most element to do the 
        // binary serach

        while(l < r){ //iterate over the speeds
            int m = (l + r) / 2;// find the middle element for binary search
            int hour = 0;//element to calculate the total hours taken to compare with given h
            for (int i : piles){// iterate over the piles
                hour += i/m + (i%m != 0);
            }
            if (hour <= h){
                r = m;
            }else{
                l = m+1;
            }
        }

    return r;
    }
};