#include <iostream>
using namespace std;

int main(){
    int num;
    double pivot;
    while((cin >> num)){
        pivot= num/2;
        int isPrime= 1;
        if(num == 1){
            isPrime= 0;
        }else if(num == 2){
            
        }else if(num%2 == 0){
            isPrime= 0;
        }else{
            for(int i=3; i<=pivot; i+=2){
                if(num%i == 0){
                    isPrime= 0;
                    break;
                }
            }
        }
        if(isPrime)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
