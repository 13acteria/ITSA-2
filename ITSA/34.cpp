#include <iostream>
using namespace std;

int main(){
    double height, sex;
    cout << fixed;
    cout.precision(1);
    while(cin >> height){
        cin >> sex;
        if(sex == 1){
            cout << (height - 80) * 0.7 << endl;
        }
        else{
            cout << (height - 70) * 0.6 << endl;
        }
    }
    
    return 0;
}
