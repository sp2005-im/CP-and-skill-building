//Sri Rama Jayam

#include<bits/stdc++.h>
using namespace std;

int compute_cost(int n, int x, int arr_A[], int arr_B[]){
        int total_cost = 0;
        for (int i = 0; i<n; i++){
                if (arr_A[i]>=x){
                        total_cost+=arr_B[i];
                }
        }
        return total_cost;
}

int main(){
        int t;
        cin>>t;
        while (t--){
                int n,x;
                cin>>n>>x;
                int arr_A[n], arr_B[n];
                for (int i = 0; i<n; i++){
                        cin>>arr_A[i];
                }
                for (int j = 0; j<n; j++){
                        cin>>arr_B[j];
                }
                int total_cost = compute_cost(n,x,arr_A,arr_B);
                cout<<total_cost<<endl;
        }
        return 0;
}
