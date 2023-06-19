#include <iostream>
using namespace std;

int main(){
    int chars[26] = {0};
    string str;
    int count= 1;
    char c;

    getline(cin, str);
    for (int i = 0; i < str.length(); i++){
        c = str[i];
        if(c == ' ')
            count++;
        else if(c >= 'a')
            chars[c-'a']++;
        else if(c >= 'A')
            chars[c-'A']++;
    }
    cout << count << endl;
    for(int i=0; i<26; i++){
        if(chars[i] > 0)
            cout << char(i+'a') << " : " << chars[i] << endl;
    }
    return 0;
}
