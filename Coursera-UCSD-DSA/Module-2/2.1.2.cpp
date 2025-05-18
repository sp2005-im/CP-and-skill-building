//Sri Rama Jayam

#include<iostream>
#include<vector>

using namespace std;

long long int get_last_digit_fibonacci(long long int n){
        vector<long long int>fibonacci(n+1);
        fibonacci[0] = 0;
        fibonacci[1] = 1;
        for (long long int i = 2; i <= n; i++){
                fibonacci[i] = fibonacci[i-1]%10+fibonacci[i-2]%10;
        }
        return fibonacci[n]%10;
}

int main(){
        long long int n;
        cin>>n;
        long long int last_digit = get_last_digit_fibonacci(n);
        cout<<last_digit<<endl;
        return 0;
}
