#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int res = 0;
    if (s1  == "sick" && s2 == "fine"){
        res = 2;
    }
    else if (s2 == "sick" && s1 == "fine"){
        res = 3;
    }
    else if (s1 == "sick" && s2 == "sick"){
        res = 1;
    }
    else{
        res = 4;
    }
    cout<<res<<endl;
    return 0;
}
