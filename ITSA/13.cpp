#include <iostream>
using namespace std;
#include <sstream>

int main(){
    int repeat;
    char temp, c;
    string str;
    int pokerHere[52], suit, num;

    cin >> repeat;
    getline(cin, str);

    for(int i=0; i<repeat; i++){
        for (int j = 0; j < 52; j++){
            pokerHere[j] = 0;
        }
        getline(cin, str);
        stringstream strstream;
        strstream << str;
        while(strstream >> c){
            switch(c){
            case 'C':
                suit= 0;
                break;
            case 'D':
                suit= 1;
                break;
            case 'H':
                suit= 2;
                break;
            case 'S':
                suit= 3;
            }
            strstream >> num;
            pokerHere[suit*13+num-1]= 1;
        }

        int needSpace= 0;
        for(int j=51; j>=0; j--){
            if(pokerHere[j]){
                if(needSpace)
                    cout << ' ';
                switch (j/13){
                case 0:
                    cout << 'C';
                    break;
                case 1:
                    cout << 'D';
                    break;
                case 2:
                    cout << 'H';
                    break;
                case 3:
                    cout << 'S';
                }
                cout << j%13+1;
                needSpace= 1;
            }
        }
        cout << endl;
    }

    return 0;
}
