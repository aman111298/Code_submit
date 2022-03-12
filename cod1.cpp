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
	string s1,s2;
	cin>>s1>>s2;
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	string s3="";
	int n=s1.size();
	int m=s2.size();
	int sum=0,r=0,d=0;
	int i=0;
	for(i=0;i<min(n,m);i++) {
		int x=s1[i]-'0';
		int y=s2[i]-'0';
		sum=x+y+d;
		r=sum%10;
		d=sum/10;
		s3=s3+(char)(r+'0');
	}
	while(i<n) {
		int x=s1[i]-'0';
		sum=x+d;
		r=sum%10;
		d=sum/10;
		s3=s3+(char)(r+'0');
		i++;
	}
	while(i<m) {
		int x=s2[i]-'0';
		sum=x+d;
		r=sum%10;
		d=sum/10;
		s3=s3+(char)(r+'0');
		i++;
	}	
	reverse(s3.begin(),s3.end());
	cout<<s3<<endl;
}