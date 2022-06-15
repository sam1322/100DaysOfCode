class Solution {
public:
    int maxArea(vector<int>& height) {
        int vol = 0 ; 
        int i = 0 , h ,j = height.size() - 1  ;
        while(i<j){
            vol = max(vol,(j-i)*min(height[i],height[j]) ) ;  

            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
            
        }
        return vol ; 
        
    }
};