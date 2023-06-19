#include <iostream>
using namespace std;
#include<string>

int main(){
    string s;
    int len, same;
    while(cin >> s){
        same= 1;
        len= s.length();
        for(int i=0; i<len/2; i++){
            if(s[i] != s[len-1-i]){
                same= 0;
                break;
            }
        }
        if(same)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
