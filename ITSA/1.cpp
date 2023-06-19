#include <iostream>
#include <string>
using namespace std;

void output(int t){
    switch (t)
    {
    case 1:
        cout << "*****";
        break;
    case 2:
        cout << "*   *";
        break;
    case 3:
        cout << "*    ";
        break;
    case 4:
        cout << "    *";
        break;
    }
}

int main(){
    int dict[10][5]= {
        {1,2,2,2,1}, //0
        {4,4,4,4,4},
        {1,4,1,3,1}, 
        {1,4,1,4,1},
        {2,2,1,4,4},
        {1,3,1,4,1}, //5
        {1,3,1,2,1},
        {1,4,4,4,4},
        {1,2,1,2,1},
        {1,2,1,4,1}
    };
    int order[4];
    char temp;
    for(int i=0; i<4; i++){
        cin >> temp;
        order[i] = temp-'0';
    }
    
    for(int r=0; r<5; r++){
        for(int i=0; i<4; i++){
            if(i != 0)
                cout << ' ';
            output(dict[order[i]][r]);
        }
        cout << endl;
    }

    return 0;
}
