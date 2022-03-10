// struct compare{
//   public:
//   bool operator()(vector<long long > &a,vector<long long> & b) // overloading both operators 
//   {
//       // return a.w < b.w: // if you want increasing order;(i.e increasing for maxPQ)
//       // return a.w > b.w // if you want reverse of default order;(i.e decreasing for minPQ)

//     return a[0] > b[0] ; 

//    }
// };

class Solution {
public:
// TOO SLOW THIS ATTEMPT BUT IT TOOK ME AGES TO CODE THIS
// int nthSuperUglyNumber(int n, vector<int>& primes) {
//     priority_queue<vector<long long> ,vector<vector<long long>>, compare > q ;
//     vector<long long> nums(n) ;
//     nums[0] = 1 ;
//     for(int i : primes){
//         q.push({i,i,0} );
//     }          
//     int j = 0  ; 
//     for(int i = 1 ;  i < n ;){
//         // long long [num,prime,index] = q.top() ;
//         // if(j >10) break ; j++;cout<<j <<" ";
//         vector<long long> v = q.top() ;
//         q.pop();
//         long long num = v[0] , prime = v[1] , index = v[2] ; 
//         // cout<<i<<" "<<num<<" " <<prime<<" "<<index <<endl;
//         if(num!=nums[i-1]){
//             nums[i] = num ; 
//             i++; 
//         }
//         q.push( { prime*nums[index+1] , prime , index + 1} );
//     }
//     return nums[n-1];

// }

//     int nthSuperUglyNumber(int n, vector<int>& primes) {
//         priority_queue<vector<long long> ,vector<vector<long long>>, > q ;
          
//     }
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        if (n == 1) return 1;
        vector<long> numbers(n, 0);
        numbers[0] = 1;
        map<long, int> heap;
        int k = primes.size();
        vector<int> indices(k, 0);
        for (int i = 0; i < primes.size(); i++) {
            heap[primes[i]] = i;
        }
        int i = 1;
        while (i < n) {
            auto cur = *(heap.begin());
            heap.erase(heap.begin());
            if (cur.first != numbers[i-1])
                numbers[i++] = cur.first;
            indices[cur.second]++;
            while(heap.count(primes[cur.second] * numbers[indices[cur.second]])){
                // making sure we are not overlapping with existing keys
                indices[cur.second]++;
            }
            heap[primes[cur.second] * numbers[indices[cur.second]]] = cur.second;
        }
        return numbers[n-1];
    }

    
};