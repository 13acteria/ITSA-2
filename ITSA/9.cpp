#include <iostream>
using namespace std;

int main(){
    int num, n3;
    while((cin >> num)){
        n3= num/3;
        cout << (n3+1)*n3/2*3 << endl;
    }

    return 0;
}
