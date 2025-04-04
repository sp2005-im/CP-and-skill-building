// Sri Rama Jayam

#include <bits/stdc++.h>
using namespace std;

int get_max_element(int arr[], int n){
        int max_element = arr[0];
        for (int i = 0; i<n; i++){
                if (arr[i]>max_element){
                        max_element = arr[i];
                }
        }
        return max_element;
}

int make_equal_moves(int arr[], int n){
        int max_element = get_max_element(arr, n);
        vector<int>difference;
        for (int i = 0; i<n; i++){
                int diff = max_element - arr[i];
                difference.push_back(diff);
        }
        int max_moves = *std::max_element(difference.begin(), difference.end());
        return max_moves;
}

int main(){
        int t;
        cin>>t;
        while (t--){
                int n;
                cin>>n;
                int arr[n];
                for (int i = 0; i<n; i++){
                        cin>>arr[i];
                }
                int max_moves = make_equal_moves(arr,n);
                cout<<max_moves<<endl;
        }
        return 0;
}
