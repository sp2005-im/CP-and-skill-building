//Sri Rama Jayam

#include<iostream>
#include<vector>

using namespace std;

long long int get_fibonacci_number(long long int n){
        vector<long long int>fibonacci(n+1);
        fibonacci[0] = 0;
        fibonacci[1] = 1;
        for (long long int i = 2; i <= n; i++){
                fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];
        }
        return fibonacci[n];
}

int main(){
        long long int n;
        cin>>n;
        long long int nth_fibonacci = get_fibonacci_number(n);
        cout<<nth_fibonacci<<endl;
        return 0;
}
