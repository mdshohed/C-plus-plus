#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

template<typename T>
vector<T> readv(int n){vector<T> v(n);for(auto &i:v)cin>>i;return v;}
#ifdef auto v = readv<int>(n);
#endif
#define filein(x)  freopen("in.txt","r",stdin)
#define debug(x) cerr << #x << " --> " << x << endl
#define make(x,y) make_pair(x,y)
typedef long long ll;
typedef pair<int,int> pii;

int dx[] = { 1, 0, 0, -1, 1, 1, -1, 1};
int dy[] = { 0, -1, 1, 0, 1, -1, -1, -1};
string ds = "DLRU";

#define xx first
#define yy second
#define pb push_back
#define sci(x) scanf( "%d",&x);
#define scii(x,y) scanf("%d%d",&x,&y)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define clr(x,y) memset(x,y,sizeof(x))
#define LSB(i) ((i) & -(i))
#define rs(x) random_shuffle(x.begin(),x.end())
#define unq(x) x.resize(unique(x.begin(),x.end()) - x.begin())

void debug_out(){ cerr<< endl;}
template < typename Head, typename... Tail>
void debug_out(Head H, Tail... T){
    cerr << " " << to_string(H) ;
    debug_out(T...);
}
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__);
clock_t timeStart  = clock(); 
#define timeStamp cout<<fixed<<setprecition(2)<<"Execution Time:"<< (double)(clock()-t)/CLOCKS_PER_SEC << endl;

int main() {
    //freopen("in.txt", "r", stdin );
    
    return 0;  
}
