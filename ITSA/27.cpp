#include <iostream>
using namespace std;

int main(){
    string ans;
    cin >> ans;
    int pos[10] = {0};
    for (int i = 0; i < 4; i++){
        pos[ans[i]-'0'] = i + 1;
    }

    string num;
    int a, b, d;
    while(cin >> num){
        if(num[0] == '0')
            break;
        
        a = 0;
        b = 0;
        for (int i = 0; i<4; i++){
            d = num[i] - '0';
            if(pos[d] > 0){
                if(i+1 == pos[d]) a++;
                else b++;
            }
        }

        cout << a << 'A' << b << 'B' << endl;
    }

    return 0;
}