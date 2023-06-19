#include <iostream>
using namespace std;

int main(){
    int repeat;
    cin >> repeat;

    int n1, n2, i1, i2;
    char sign;
    for(int i=0; i<repeat; i++){
        cin >> sign;
        cin >> n1 >> i1 >> n2 >> i2;
        if(sign == '*'){
            cout << n1*n2-i1*i2 << " " << n1*i2+n2*i1 << endl;
        }else if(sign == '+'){
            cout << n1+n2 << " " << i1+i2 << endl;
        }else{
            cout << n1-n2 << " " << i1-i2 << endl;
        }
    }

    return 0;
}
