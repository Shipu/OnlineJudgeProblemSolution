//#include<stdio.h>
//
//int main()
//{
//    long long t,b,i,p,m,r;
//    while(scanf("%lld %lld %lld",&b,&p,&m)==3)
//    {
//        r=1;
//        while(p)
//        {
//            if(p%2!=0)
//            r=(r*b)%m;
//            b=(b*b)%m;
//            p/=2;
//        }
//        printf("%lld\n",r);
//    }
//    return 0;
//}
/******************************************************************
***   Problem       :                                           ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_Psycho                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define rfor0(i,n) for(int i=n;i>=0;i--)
#define rfor1(i,n) for(int i=n;i>=1;i--)
#define forse(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
#define pi 2*acos(0.0)
#define all(v) v.begin(),v.end()

#define si(t) scanf("%d",&t)
#define sl(t) scanf("%lld",&t)
#define sf(t) scanf("%f",&t)
#define sdb(t) scanf("%lf",&t)
#define schar(c) scanf("%c",&c)
#define sstring(s) scanf("%s",s)
#define ssi(a,b) scanf("%d%d",&a,&b)
#define ssl(a,b) scanf("%lld%lld",&a,&b)

#define P(a) printf("%d\n",a)
#define PL(a) printf("%lld\n",a)
#define PF(a) printf("%f\n",a)
#define PDB(a) printf("%lf\n",a)
#define PN(a) printf("%d ",a)
#define PLN(a) printf("%lld ",a)
#define PFN(a) printf("%f ",a)
#define PDBN(a) printf("%lf ",a)

#define CP(a) cout<<a<<endl
#define CPN(a) cout<<a<<" "
#define Case(no) printf("Case %d: ",++no)
#define nl puts("")

#define db(x) cout << #x << " -> " << (x) << endl;
#define db_sarr(i,a) cout<<#a<<"["<<i<<"] -> "<<a[i]<<" "<<endl;
#define db_arr(a,start,end) for(ll i=start;i<=end;i++) cout<<#a<<"["<<i<<"] -> "<<a[i]<<" "<<endl;
#define db_mat(mat,row,col) for(ll i=0;i<row;i++) {for(ll j=0;j<col;j++) cout<<mat[i][j]<<" ";cerr<<endl;}

#define ff first
#define se second
#define pb push_back
#define ppb pop_back
#define mkp(a,b) make_pair(a,b)
#define ST(v) sort(all(v))
#define sz(x) (int)x.size()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)                         //count one
#define parity(i)   __builtin_parity(i)       //evenparity 0 and odd parity 1
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define un(v) ST(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

typedef  vector<int> vi;
typedef  vector<ll> vl;
typedef  vector<string> vs;
typedef  pair<int,int> pii;
typedef  vector<pii> vpii;
typedef  set<int> si;
typedef  map<int,int> mii;
typedef  map<string,int> msi;

////============ CONSTANT ===============////
#define MAXLL 9223372036854775807
#define MINLL 9223372036854775808
#define MAXL  2147483647
#define MINL  2147483648
#define mx7   10000007
#define mx6   1000006
#define inf   1<<30                                           //infinity value
#define eps   1e-9
#define mx    (100010)
#define mod   1000000007
////=====================================////

template <typename T>string NumberToString( T Number ){stringstream st;st << Number;return st.str();}

int stringconvert(string s){int p; istringstream st(s); st>>p ; return p;}
int SOD(int n){int sum=0;for(int i=1;i*i<=n;i++)sum+=(n%i)?0:((i*i==n)?i:i+n/i);return sum;}
ll pow(ll a, ll b,ll Mod)
{
    if(b==0) return 1;
    if(b==1) return a;
    ll x=pow(a,b/2,Mod);
    x=(x*x)%Mod;
    if(b%2==1) x=(x*a)%Mod;
        return x;
}
int main()
{
    ll b,p,m;
    while(sl(b))
    {
        ssl(p,m);
        PL(pow(b,p,m));
    }
    return 0;
}
