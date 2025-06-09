//Sri Rama Jayam

#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

struct Item{
        int weight;
        long long int value;
};

long long int get_max_sum(vector<Item>items, int n, int w){
        vector<vector<long long int>> dp(n+1, vector<long long int>(w+1, 0));
        for (int i = 1; i <= n; ++i){
                for (int j = 1; j<=w; ++j){
                        if (j-items[i-1].weight >= 0){
                                dp[i][j] = max(dp[i-1][j], items[i-1].value + dp[i-1][j-items[i-1].weight]);
                        }
                        else{
                                dp[i][j] = dp[i-1][j];
                        }
                }
        }
        return dp[n][w];
}

int main(){
        int n,w;
        cin>>n>>w;
        vector<Item>items;
        for (int i = 0; i < n; ++i){
                int weight;
                long long int value;
                cin>>weight>>value;
                items.push_back({weight, value});
        }
        long long int mx_sum = get_max_sum(items,n,w);
        cout<<mx_sum<<endl;
        return 0;
}
