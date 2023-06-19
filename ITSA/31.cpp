#include <iostream>
using namespace std;
#include <map>
#include <sstream>

int main(){
    string str;
    while(getline(cin, str)){
        if(str.length() == 0) break;
        stringstream strstream;
        strstream << str;

        int cnt = 0, num;
        map<int, int> nums;
        while(strstream >> num){
            cnt++;
            nums[num]++;
        }

        bool exist = false;
        for(auto item: nums){
            if(item.second > cnt/2){
                cout << item.first << endl;
                exist = true;
            }
        }
        if(!exist)
            cout << "NO" << endl;
    }

    return 0;
}