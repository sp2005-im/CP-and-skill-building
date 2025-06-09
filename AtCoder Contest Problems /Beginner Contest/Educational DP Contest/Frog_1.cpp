//Sri Rama Jayam

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int get_min_cost(vector<int>steps, int n){
        int k = 2;
        vector<int>dp(n,INT_MAX);
        dp[0] = 0;
        for (int i = 1; i < n; ++i){
                for (int j = 1; j <= k; ++j){
                        if (i-j >= 0){
                                int cost = abs(steps[i]-steps[i-j]);
                                dp[i] = min(dp[i], dp[i-j]+cost);
                        }
                }
        }
        return dp[n-1];
}

int main(){
        int n;
        cin>>n;
        vector<int>steps(n);
        for (int i = 0; i < n; ++i){
                cin>>steps[i];
        }
        int cost = get_min_cost(steps,n);
        cout<<cost<<endl;
        return 0;
}
