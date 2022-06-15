#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define fr(i,a) for(int  i=0;i<a;i++)
#define forn(i,a,n) for(int i = a; i < n ;i++)
#define Sort(a) sort(a.begin(),a.end())
#define Rev(k)  reverse(k.begin(),k.end())
#define Sz(x) x.size()
#define Show(v) for(int i =0 ; i < v.size();i++) cout<<v[i]<<" "; //only for strings and vector
#define Mod 1000000007
#define Fi first
#define Sc second
#define pb push_back
#define Ios ios::sync_with_stdio(false);cin.tie(0);cout.setf(ios::fixed); cout.precision(0);
#define inf 0x3f3f3f3f
#define mk make_pair
template<typename T, typename V> inline void mn(T &x, V y) { if(y < x) x = y; }
template<typename T, typename V> inline void mx(T &x, V y) { if(x < y) x = y; }
//const int MAXN = 200100;
typedef long long  ll;
#define vi vector<int>
#define vl vector<ll>
#define vp vector<pair<int,int>> 
#define nl cout<<endl;
typedef pair<int,int> pii; 
// sieve , binomial coeff , pascal 

//int solve(){
bool check(string  &a,string &b){
        int i = 0 ,f= 0 , j = 0 , n =a.size() ;
        while(i < n){
            if(a[i] == b[j]){
                i++;j++;
                
            }
            else if(f)return false; 
            else {f++;j++;}
        }
        return true ;
    }
    int longestStrChain(vector<string>& words) {
        map<int,vector<string>> mp;
        map<string,int>m ;
        int ans= words.empty() ? 0 :1  ; 
        for(string w:words){
            int n = w.size() ; 
            mp[n].push_back(w);
            m[w] = 1 ;
        }
        for(int i = 1; i <16;++i){
            string s = "";
            for(string x:mp[i]){
                for(string y:mp[i+1]){
                    if(check(x,y)){
                    	if(m[y] <  m[x] +  1)s = y ;
                        m[y]=max(m[y], m[x] + 1);
                        ans = max(ans,m[y]) ; 
                    }

                }
            }
            // cout<<s<< " "<<m[s]<<endl;

        }

        // for(auto s:m){
        // 	cout<<s.first<<" "<<s.second<<endl;
        // }
        return ans ;
    }

void solve(){
	vector<string> v = {"wnyxmflkf","xefx","usqhb","ttmdvv","hagmmn","tmvv","pttmdvv","nmzlhlpr","ymfk","uhpaglmmnn","zckgh","hgmmn","isqxrk","isqrk","nmzlhpr","uysyqhxb","haglmmn","xfx","mm","wymfkf","tmdvv","uhaglmmn","mf","uhaglmmnn","mfk","wnymfkf","powttkmdvv","kwnyxmflkf","xx","rnqbhxsj","uysqhb","pttkmdvv","hmmn","iq","m","ymfkf","zckgdh","zckh","hmm","xuefx","mv","iqrk","tmv","iqk","wnyxmfkf","uysyqhb","v","m","pwttkmdvv","rnqbhsj"};
	cout<<longestStrChain(v)<<endl;
}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
 
    solve();
}