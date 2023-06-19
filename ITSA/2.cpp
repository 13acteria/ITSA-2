#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    double num;
    double base = 1.6;
    cout << fixed;
    cout.precision(1);
    while((cin >> num)){
        num *= base;
        cout << num << endl;
    }

    return 0;
}
