//Sri Rama Jayam

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

vector<int> get_max_fun(vector<vector<int>>activity, int n){
        vector<vector<int>>dp(n, vector<int>(3,0));
        dp[0] = activity[0];
        for (int i = 1; i < n; ++i){
                dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + activity[i][0];
                dp[i][1] = max(dp[i-1][2], dp[i-1][0]) + activity[i][1];
                dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + activity[i][2];
        }
        return dp[n-1];
}

int main(){
        int n;
        cin>>n;
        vector<vector<int>>activity;
        for (int i = 0; i < n; ++i){
                int a,b,c;
                cin>>a>>b>>c;
                activity.push_back({a,b,c});
        }
        vector<int> fun = get_max_fun(activity, n);
        int mx_fun = *max_element(fun.begin(), fun.end());
        cout<<mx_fun<<endl;
        return 0;
}
