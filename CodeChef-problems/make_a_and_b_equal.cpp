#include <bits/stdc++.h>
using namespace std;

bool is_power_of_two(int n){
    // returns if an integer n is a power of 2
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin>>a>>b;
        if (a%b!=0 && b%a!=0){
            cout<<"NO"<<endl;
        }
        else{
            if (a>b){
                int n = (a/b);
                if (is_power_of_two(n)){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else if (a<b){
                int n = (b/a);
                if (is_power_of_two(n)){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
