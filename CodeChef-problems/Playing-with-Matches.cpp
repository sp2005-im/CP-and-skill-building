#include <bits/stdc++.h>
using namespace std;

int matches_per_digit(int n){
    if (n==0){
        return 6;
    }
    else if (n==1){
        return 2;
    }
    else if (n==2){
        return 5;
    }
    else if (n==3){
        return 5;
    }
    else if (n==4){
        return 4;
    }
    else if (n==5){
        return 5;
    }
    else if (n==6){
        return 6;
    }
    else if (n==7){
        return 3;
    }
    else if (n==8){
        return 7;
    }
    else if (n==9){
        return 6;
    }
}

int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin>>a>>b;
        int sum = a+b;
        int number_of_matches = 0;
        while (sum>0){
            int i = sum%10;
            number_of_matches+=matches_per_digit(i);
            sum = sum/10;
        }
        cout<<number_of_matches<<endl;
    }
    return 0;
}
