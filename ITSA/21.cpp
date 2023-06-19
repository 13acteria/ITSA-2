#include <iostream>
using namespace std;

int main(){
    float max, min, temp;
    cin >> temp;
    max= temp, min= temp;
    for(int i=0; i<9; i++){
        cin >> temp;
        if(temp > max)
            max= temp;
        if(temp < min)
            min= temp;
    }

    cout << fixed;
    cout.precision(2);
    cout << "maximum:" << max << endl;
    cout << "minimum:" << min << endl;

    return 0;
}
