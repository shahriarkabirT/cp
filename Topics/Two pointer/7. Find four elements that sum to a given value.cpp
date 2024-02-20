#include<bits/stdc++.h>
using namespace std;

typedef bool                      boo;
typedef int                       li;
typedef long long int             ll;
typedef unsigned long long int    lu;
typedef double                    db;


//--------------------------------------------------------------------------//


#define out 			cout<<
#define loop 			for(int i = 0 ; i < n; i++)
#define vecint			vector<int>
#define revloop 		for(int i = n-1; i>=0 ; i--)
#define tc              int t; cin>>t; while(t--)
#define faster          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define nl              <<endl
#define in 				cin>>
#define gcd(a,b)        __gcd(a,b)
#define in_out          freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define spc 			<<" "<<
//--------------------------------------------------------------------------//


void solve(){
	int n , x;
	cin>>n>>x;
	vector<int>a(n);
	for(int i= 0 ; i < n ;i++){
		cin>>a[i];
	}
	sort(a.begin() , a.end());

	for(int i = 0 ; i < n ; i++){
		for(int j = i+1; j < n ; j++){
			int k = j + 1;
			int l = n - 1;
		while(k < l){
			if(a[i]+a[j]+a[k]+a[l]== x){
				cout<<a[i] spc a[j] spc a[k] spc a[l] nl;
				break;
			}
			else if(a[i]+a[j]+a[k]+a[l] > x){
				l--;
			}
			else if(a[i]+a[j]+a[k]+a[l] < x){
				k++;
			}
		}
		}
		
	}
}
int main(){
        //in_out
        faster

		solve();


}
