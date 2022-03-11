class Solution {
public:
    // long long minimumDifference(vector<int>& nums) {
//         priority_queue<long long ,vector<long long > , greater<long long >> q ; 
//         priority_queue<long long ,vector<long long >> p ; 
//         int n = nums.size() / 3  ; 
//         vector<long long> a(n+1),b(n+1); 
//         long long sum = 0 , Mn = INT_MAX;
//         for(int i = 0 ; i < n ;++i){
//             sum+=nums[i] ;
//             p.push(nums[i] ) ; 
//         }
//         a[0] = sum ; 
//         for(int i = n ; i < 2*n ; ++i ){
//             if(p.top() > nums[i]){
//                 sum-=p.top();
//                 sum+=nums[i] ; 
//                 p.pop() ;
//                 p.push(nums[i]);
//             }
//             a[i - n +1] = sum ;
//         }
        
//         sum = 0 ; 
//         for(int i = 3*n-1 ; i>=2*n ; --i){
//             sum+=nums[i]; 
//             q.push(nums[i]) ;
//          }
//         b[n] = sum ;
//         for(int i = 2*n-1 ; i>=n;--i){
//             if(q.top() < nums[i]){
//                 sum-=q.top();
//                 sum+=nums[i] ; 
//                 q.pop() ;
//                 q.push(nums[i]);
//             }
//             b[i - n] = sum ;
//         }
//         for(int i = 0 ; i <= n ;++i ){
//             cout<<a[i]<<" "<<b[i]<<endl;
//             Mn  =min(Mn,a[i] - b[i] ) ; 
//         }
//         return Mn;
        
//     }
        long long minimumDifference(vector<int>& nums) {
        long long ans = 100000000000000;
        priority_queue<int>map;
        priority_queue<int , vector<int> , greater<int> > mip;
        int n = nums.size()/3;
        
        vector<long long >ma(3*n, 0);
        long long s = 0;
        for(int i = 0;i<3*n;i++){
            map.push(nums[i]);
            s = s + nums[i];
            if (map.size()>n){
                int topa = map.top();
                s = s- topa;
                map.pop();
            }
            ma[i] = s;
        }
        
        vector<long long>mi(3*n, 0);
        s = 0;
        for(int i = 3*n-1;i>=0;i--){
            mip.push(nums[i]);
            s = s + nums[i];
            if (mip.size()>n){
                int topa = mip.top();
                s = s- topa;
                mip.pop();
            }    
            mi[i] = s;
       }

        for(int i = n-1;i<2*n;i++){
            long long  res = ma[i] - mi[i+1];
            // cout<<res<<endl;
            ans = min(ans , (ma[i] - mi[i+1]));
        }
        return ans;  
    }
    
    long long min(long long a, long long b){
        return (a<b)?a:b;
    }
};