#include <iostream>
using namespace std;
#include <sstream>

int main(){
    string str;
    int move;
    getline(cin, str);
    cin >> move;
    char l;
    for (int i = 0; i < str.length(); i++){
        l = str[i];
        if(l >= 'a' && l <= 'z'){
            str[i] = (l - 'a' + move) % 26 + 'a';
        }
        else if(l >= 'A' && l <= 'Z'){
            str[i] = (l - 'A' + move) % 26 + 'A';
        }
        else if(l >= '0' && l <= '9'){
            str[i] = (l - '0' + move) % 10 + '0';
        }
    }
    cout << str << endl;
    
    return 0;
}
