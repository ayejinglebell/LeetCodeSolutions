class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l=0, r= height.size()-1;
        int max_area = 0;
        
        while(l<r){
            
            max_area = std::max(max_area,(std::min(height[l],height[r]))*(r-l)); 
            
            if(height[l]<height[r])
                l++;
            else
                r--;
            
        }
        return max_area;
        
    }
};
