#include <iostream>
using namespace std;

int main(){
    char l;
    int num[10];
    int sum[10] = {0};
    for (int i = 0; i < 10; i++){
        cin >> l;
        if(l == 'X')
            num[i] = 10;
        else
            num[i] = l - '0';
    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j <= i; j++){
            sum[i] += num[j];
        }
    }
    int res = 0;
    for(int i = 0; i < 10; i++){
        res += sum[i];
    }
    if(res%11)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}
