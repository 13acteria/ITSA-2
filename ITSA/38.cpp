#include <iostream>
using namespace std;

int main(){
    double n;
    cin >> n;
    double s = n * 2.1, ns = s;
    if(n > 120){
        s += (n - 120) * (3.02 - 2.1);
        ns += (n - 120) * (2.68 - 2.1);
    }
    if(n > 330){
        s += (n - 330) * (4.39 - 3.02);
        ns += (n - 330) * (3.61 - 2.68);
    }
    if(n > 500){
        s += (n - 500) * (4.97 - 4.39);
        ns += (n - 500) * (4.01 - 3.61);
    }
    if(n > 700){
        s += (n - 700) * (5.63 - 4.97);
        ns += (n - 700) * (4.50 - 4.01);
    }
    cout << fixed;
    cout.precision(2);
    cout << "Summer months:" << s << "\nNon-Summer months:" << ns << endl;

    return 0;
}
