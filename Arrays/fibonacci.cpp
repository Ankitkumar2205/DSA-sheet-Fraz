#include<iostream>
#include<vector>
using namespace std;
// fibonacci series
/* 1 1 2 3 5 8 13 21*/
int fibonacci(int n){
    if(n==1 || n==0){
        return n;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n=2;
    cout<<fibonacci(n)<<endl;
    return 0;
}