#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cin >> n2 >> n3;
    if(n2 > n3){
        n1= n2;
        n2= n3;
    }else
        n1= n3;
    
    while(n2 != 0){
        n3= n1%n2;
        n1= n2;
        n2= n3;
    }
    cout << n1 << endl;

    return 0;
}
