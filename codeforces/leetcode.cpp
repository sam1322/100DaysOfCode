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
// // sieve , binomial coeff , pascal 

class base{
protected:
    int x = 5;
    int y = 10 ;
public:
    base(){cout<<"creating value";nl;}
    base(int x){this->x=x; }
    base(const base &b){
        x = b.x;
        cout<<"copy ninja ,kakashi hatake";nl;
    }
    virtual void get(){cout<<"x = "<<x<<" y = "<<y<<endl;}
    virtual ~base(){
        cout<<"deleting the balue";nl;
    }
};

class derived:public base{
  public:
    derived(){;}
    derived(int x ,int y ){
        this->x = x; 
        this->y =y ;
        cout<<"derived constructor"<<endl;
    }
    void get(){cout<<"Derived x "<<x<<" and y "<<y<<endl;}
    ~derived(){
        cout<<"deleting the value";nl;
    }
};

void solve(){
    base *b = new derived(6,7) ;
    b->get();
    delete b ;
    cout<<"b deleted"<<endl;
    // base b1 = *b ;
    // b1.get();
}

int main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout << fixed << setprecision(4);
    # ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    // freopen("out", "w", stdout);
    # endif
    solve();
}