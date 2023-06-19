#include <iostream>
using namespace std;

int main(){
    int m, n;
    while(cin >> m){
        cin >> n;
        int nums[m][n];

        for(int r=0; r<m; r++){
            for(int c=0; c<n; c++){
                cin >> nums[r][c];
            }
        }

        for(int c=0; c<n; c++){
            for(int r=0; r<m; r++){
                if(r != 0)
                    cout << ' ';
                cout << nums[r][c];
            }
            cout << endl;
        }
    }

    return 0;
}
