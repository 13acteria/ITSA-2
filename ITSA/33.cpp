#include <iostream>
using namespace std;
#include <sstream>

int main(){
    string str;
    int cnt;
    double num, sum;
    cout << fixed;
    cout.precision(3);
    while(getline(cin, str)){
        stringstream strstream;
        strstream << str;
        sum = 0;
        cnt = 0;
        while(strstream >> num){
            sum += num;
            cnt++;
        }
        cout<<"Size: "<<cnt<<"\nAverage: " << sum / cnt << endl;
    }
    
    return 0;
}
