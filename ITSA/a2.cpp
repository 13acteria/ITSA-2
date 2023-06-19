#include <iostream>
using namespace std;
#include <sstream>

int main(){
    string str;
    int arr[100], cnt;
    while(getline(cin, str)){
        stringstream strstream;
        strstream << str;
        cnt = 0;
        while(strstream >> arr[cnt++]){}
        --cnt;
        cout << arr[--cnt];
        while(--cnt >= 0){
            cout << " " << arr[cnt];
        }
        cout << endl;
    }

    return 0;
}
