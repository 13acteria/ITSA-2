#include <iostream>
using namespace std;

int main(){
    int num;
    while((cin >> num)){
        if(num < 0){
            num-= -128;
            cout << "1";
        }else
            cout << "0";

        int base= 64;
        for(int i=0; i<7; i++){
            if(num & base)
                cout << "1";
            else
                cout << "0";
            base/= 2;
        }
        cout << endl;
    }

    return 0;
}
