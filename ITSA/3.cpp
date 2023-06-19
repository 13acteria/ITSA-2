#include <iostream>
using namespace std;

int main(){
    int a, b;
    while((cin >> a) && !cin.eof()){
        cin >> b;
        if(a*a+b*b > 40000)
            cout << "outside" << endl;
        else
            cout << "inside" << endl;
    }

    return 0;
}
