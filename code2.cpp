#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pll         pair<long long,long long>
#define vll          vector<long long>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (long long)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define rep(i,a,b)	for(ll i=a;i<b;i++)
#define ubnd        upper_bound
#define bs          binary_search
#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
	int n,m;cin>>n>>m;
	vector<int> a(n),b(n);
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i];
	int ans=0;
	sort(b.begin(),b.end());
	vector<int> v;
	for(int i=0;i<n;i++){
		int x=upper_bound(b.begin(),b.end(),a[i])-b.begin();
		int res=INT_MAX;
		if(x<m) {
			res=min(res,abs(a[i]-b[x]));
		}
		int y=lower_bound(b.begin(),b.end(),a[i])-b.begin();
		if(y!=0){
			y--;
			res=min(res,abs(a[i]-b[y]));
		}
		if(a[i]==b[i])res=0;
	
		//cout<<res<<endl;
		ans=max(res,ans);;
	}
    cout<<ans;
}