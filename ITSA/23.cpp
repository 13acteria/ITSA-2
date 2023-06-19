#include <iostream>
using namespace std;

int main(){
    int coin;
    int a, b, c;
    char temp;
    cin >> coin >> temp >> a >> temp >> b >> temp >> c;

    coin-= a*15+b*20+c*30;
    if(coin < 0){
        cout << "0" << endl;
        return 0;
    }
    c= coin/50;
    coin%= 50;
    b= coin/5;
    a= coin%5;

    cout << a << ',' << b << ',' << c << endl;

    return 0;
}
