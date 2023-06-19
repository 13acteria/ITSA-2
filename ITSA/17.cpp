#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char words[1001][1001]= {0};
    string str;
    int wordsNum= 0;
    while(cin >> str){
        int wordLen= str.length();
        for(int i=0; i<wordLen; i++){//to lowercase
            if(str[i] < 'a')
                str[i]= str[i]-'A'+'a';
        }
        bool diff= true;
        for(int i=0; i<wordsNum; i++){
            if(str == words[i]){
                diff= false;
                break;
            }
        }
        if(diff)
            strcpy(words[wordsNum++], str.c_str());
    }

    cout << words[0];
    for(int i=1; i<wordsNum; i++){
        cout << ' ';
        cout << words[i];
    }
    if(wordsNum != 0)
        cout << endl;

    return 0;
}
