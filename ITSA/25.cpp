#include <iostream>
using namespace std;

int main(){
    int repeat;
    cin >> repeat;
    cin.ignore(1);

    string str;
    for(int i=0; i<repeat; i++){
        long long sum = 0;
        getline(cin, str);
        for (int j = 0; j<str.length(); j++){
            sum += str[j];
        }
        cout << sum << endl;
    }

    return 0;
}