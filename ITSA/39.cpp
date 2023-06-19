#include <iostream>
using namespace std;

int main(){
    int it;
    cin >> it;
    for (int i = 0; i < it; i++){
        int p60 = 0, p80 = 0;
        int sum = 0;
        int sc[3];
        cin >> sc[0] >> sc[1] >> sc[2];
        for (int j = 0; j < 3; j++){
            if(sc[j] >= 60)
                p60++;
            if(sc[j] >= 80)
                p80++;
            sum += sc[j];
        }
        if(p60 == 0){
            cout << "F\n";
        }
        else if(p60 == 1){
            if(p80 > 0)
                cout << "M\n";
            else
                cout << "F\n";
        }
        else if(p60 == 2 && sum < 200){
            cout << "M\n";
        }
        else{
            cout << "P\n";
        }
    }

    return 0;
}
