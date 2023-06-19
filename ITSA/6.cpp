#include <iostream>
using namespace std;

int main(){
    int num;
    while((cin >> num)){
        if(num <= 2)
            cout << "Winter\n";
        else if(num <= 5)
            cout << "Spring\n";
        else if(num <= 8)
            cout << "Summer\n";
        else if(num <= 11)
            cout << "Autumn\n";
        else if(num <= 12)
            cout << "Winter\n";
    }
    
    return 0;
}
