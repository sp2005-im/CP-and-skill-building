#include<bits/stdc++.h>
using namespace std;

string direction_rules(string s){
    string res;
    if (s == "N"){
        res = "S";
    }
    else if (s == "S"){
        res = "N";
    }
    else if (s == "W"){
        res  = "E";
    }
    else if (s == "E"){
        res = "W";
    }
    return res;
}


string opposite_direction(string s){
    string res = "";
    for (int i = 0; i<s.length(); i++){
        res+=direction_rules(string(1,s[i])); 
        /* Turning a character into a string using string(1,char).
        The first argument indicates the number of times a character is to be repeated.
        */
    }
    return res;
}

int main(){
    string s;
    cin>>s;
    string res = opposite_direction(s);
    cout<<res<<endl;
    return 0;
}
