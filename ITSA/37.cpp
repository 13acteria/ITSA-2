#include <iostream>
using namespace std;

int main(){
    int dice[7] = {0}, n;
    bool win = false, r = true, tie = false;
    for (int i = 0; i < 4; i++){
        cin >> n;
        dice[n]++;
        if(dice[n] == 2 && !r)
            tie = true;
        if(dice[n] == 2)
            r = false;
        if(dice[n] == 3)
            r = true;
        if(dice[n] == 4)
            win = true;
    }

    if(win){
        cout << "WIN" << endl;
        return 0;
    }
    if(r){
        cout << "R" << endl;
        return 0;
    }

    int res = 0;
    for (int i = 1; i < 7; i++)
    {
        if (dice[i] == 1)
            res += i;
        if (tie && dice[i] == 2)
        {
            if (i * 2 > res)
                res = i * 2;
        }
    }
    cout << res << endl;

    return 0;
}
