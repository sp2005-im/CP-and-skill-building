//Sri Rama Jayam

#include<iostream>

using namespace std;

long long int get_nth_fibonacci(long long int n){
        long long int a = 0;
        long long int b = 1;
        long long int res = 0;
        if (n == 0) return 0;
        if (n == 1) return 1;
        for (long long int i = 2; i <= n; i++){
                res = a + b;
                a = b;
                b = res;
        }
        return res;
}

int main(){
        long long int n;
        cin>>n;
        long long int fibonacci = get_nth_fibonacci(n);
        cout<<fibonacci<<endl;
        return 0;
}
