/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
// ASCII VALUE SMALL LETTER a-z (97-122)
//transform(su.begin(), su.end(), su.begin(), ::toupper);
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ull;
typedef pair<int, int> PII;

#define sc scanf
#define lf(i, a, b) for(ll i=a;i<b;i++)
#define fast  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pf printf
#define nl pf("\n")
#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define INF_LL 9223372036854775807
#define INF 2000000000
#define PI acos(-1.0)
#define EPS 1e-9
#define LL long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define setzero(a) memset(a,0,sizeof(a))
#define setdp(a) memset(a,-1,sizeof(a))
#define fr(i,n)      for (ll i=0;i<n;i++)
#define fr1(i,n)     for(ll i=1;i<=n;i++)
#define pfl(x)       printf("%lld\n",x)
#define endl        "\n"
#define pb         push_back
#define asort(a)   sort(a,a+n)
#define dsort(a)   sort(a,a+n,greater<int>())
#define vasort(v)  sort(v.begin(), v.end());
#define vdsort(v)  sort(v.begin(), v.end(),greater<int>());

#define MAX_SIZE 100


void rotate(int arr[], int len)
{
    int x=arr[len-1],i;
    for(i=len-1; i>0; i--)
        arr[i]=arr[i-1];
    arr[0]=x;
}

int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
    }
    int len=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,len);
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<<" ";
    }
}
