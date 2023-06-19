#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(!(n%400))
            cout << "Bissextile Year" << endl;
        else if(!(n%100))
            cout << "Common Year" << endl;
        else if(!(n%4))
            cout << "Bissextile Year" << endl;
        else
            cout << "Common Year" << endl;
    }
    
    return 0;
}
