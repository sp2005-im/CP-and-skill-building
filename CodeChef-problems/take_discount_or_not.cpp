// Sri Rama Jayam
#include<bits/stdc++.h>
using namespace std;
int main(){
        int t; // Number of test cases
        cin>>t;
        while (t--){
                int n,x,y;
                cin>>n>>x>>y;
                int arr[n];
                int cost_without_discount = 0;
                int cost_with_discount = 0;
                for (int i = 0; i<n; i++){
                        cin>>arr[i];
                        cost_without_discount+=arr[i];
                        if (arr[i]>y){
                                cost_with_discount+=arr[i]-y;
                        }
                }
                cost_with_discount+=x;
                if (cost_with_discount < cost_without_discount){
                        cout<<"COUPON"<<endl;
                }
                else{
                        cout<<"NO COUPON"<<endl;
                }
        }
        return 0;
}
