#include <iostream>
using namespace std;

int main(){
    double r;
    long long n, p;
    cin >> r >> n >> p;

    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += p;
        sum += sum * r;
    }
    cout << (long long)(sum) << endl;

    return 0;
}