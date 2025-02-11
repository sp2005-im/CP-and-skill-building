#include <bits/stdc++.h>
using namespace std;

int main() {
	// Sri Rama Jayam
	int t;
	cin>>t;
	while (t--){
	    int n,x;
	    cin>>n>>x;
	    if (n%2==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        if (x%2==1){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
