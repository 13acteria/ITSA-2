#include <iostream>
using namespace std;

int main(){
    string str, sub;
    cin >> sub >> str;
    
    int strLen= str.length(), subLen= sub.length();
    int cnt= strLen-subLen+1;
    int res= 0;
    int same;
    for(int i=0; i<cnt; i++){
        same= 1;
        for(int j=0; j<subLen; j++){
            if(sub[j] != str[i+j]){
                same= 0;
                break;
            }
        }
        if(same)
            res++;
    }

    cout << res << endl;

    return 0;
}