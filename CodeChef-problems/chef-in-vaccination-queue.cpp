// Sri Rama Jayam
#include<bits/stdc++.h>
using namespace std;

int time_to_vaccinate(int arr[],int n, int p, int x, int y){
        int time_taken = 0;
        for (int i = 0; i<p; i++){
                if (arr[i]==0){
                        time_taken+=x;
                }
                else if (arr[i]==1){
                        time_taken+=y;
                }
        }
        return time_taken;
}

int main(){
        int t;
        cin>>t;
        while (t--){
                int n, x, p, y;
                cin>>n>>p>>x>>y;
                int arr[n];
                for (int i = 0; i<n; i++){
                        cin>>arr[i];
                }
                int time_taken = time_to_vaccinate(arr,n,p,x,y);
                cout<<time_taken<<endl;
        }
        return 0;
}
