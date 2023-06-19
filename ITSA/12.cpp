#include <iostream>
using namespace std;

int f(int n){
    if(n <= 1)
        return n+1;
    return f(n-1)+f(n/2);
}

int main(){
    int n;
    cin >> n;
    n= f(n);
    cout << n << endl;

    return 0;
}
