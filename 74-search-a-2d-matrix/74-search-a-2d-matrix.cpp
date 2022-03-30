class Solution {
public:
    int searchrow(vector<vector<int>> &a, int n , int target){
        int mid , i = 0 , j = n , l = 0 ; 
        while(i < j){
            mid = i + (j - i)/2 ; 
            if(a[mid][0] <= target) { l = mid ;i = mid + 1 ;}
            if(a[mid][0] >target ) j = mid ;
        }
        return l;
    }
    int searchcol(vector<vector<int>> &a, int I , int target){
        int mid , i = 0 , j = a[I].size()  ; 
        while(i < j){
            mid = i + (j - i)/2 ; 
            if(a[I][mid]==target)return mid ; 
            if(a[I][mid] < target) i = mid + 1;
            if(a[I][mid] >target ) j = mid ;
        }
        return i;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int p = searchrow(matrix, matrix.size() , target); 
        if(p>=matrix.size())return false;
        int P = searchcol(matrix, p , target); 
        cout<<p<< " "<<P<<endl;
        if(P>=matrix[0].size())return false;
        return matrix[p][P] == target ;
    }
};