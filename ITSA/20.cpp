#include <iostream>
using namespace std;

int main(){
    int repeat;
    cin >> repeat;

    string str1, str2;
    char res[32];
    int len1, len2, len;
    for(int i=0; i<repeat; i++){
        cin >> str1 >> str2;
        len1= str1.length();
        len2= str2.length();
        if(len1 > len2)
            len= len1+1;
        else
            len= len2+1;

        for (int i = 0; i < 32; i++){
            res[i] = '0';
        }
        res[len]= '\0';
        int inc;
        for(int d=1; d<=len; d++){
            inc= res[len-d]-'0';
            if(d <= len1)
                inc+= str1[len1-d]-'0';
            if(d <= len2)
                inc+= str2[len2-d]-'0';
            if(inc > 9){
                inc-= 10;
                res[len-d-1]++;
            }
            res[len-d]= inc+'0';
        }
        if(res[0] == '0')
            cout << res+1 << endl;
        else
            cout << res << endl;
    }

    return 0;
}
