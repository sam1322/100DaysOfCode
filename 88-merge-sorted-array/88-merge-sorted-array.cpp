class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0 , j = 0 , k = n , t ;
        while( i < m && j < n){
            if(nums1[i] < nums2[j] && (k==nums2.size() || nums1[i] < nums2[k] )){
                i++;
            }
            else {
                t = nums1[i] ;
                if(k == nums2.size() || nums2[j] < nums2[k]){
                    nums1[i++] = nums2[j++] ;  
                }
                else{
                    nums1[i++] = nums2[k++]  ;
                }
                nums2.push_back(t); 
            }
        }
        
        for(int l = i  ; l < m ;++l)
            nums2.push_back(nums1[l]) ;
        
        while( i < nums1.size() && (k < nums2.size() || j < n )){
            if( k == nums2.size()){
                nums1[i++] = nums2[j++] ;
            }
            else if(j==n && k < nums2.size()){
                nums1[i++] = nums2[k++] ;
                
            }
           else if(nums2[j] < nums2[k]){
                nums1[i++] = nums2[j++] ;
                 
            }
            else {
                nums1[i++] = nums2[k++] ;
                
            }
        }
        
        
    }
};