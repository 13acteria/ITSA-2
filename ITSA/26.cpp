#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int num, nums[n], sum[n] = {0}, cmp[n];
    for (int i = 0; i < n; i++){
        cmp[i] = i;
        cin >> num;
        nums[i] = num;
        while(num > 0){
            sum[i] += num % 10;
            num /= 10;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = n - 1; j > i; j--){
            if(sum[cmp[j]] < sum[cmp[j-1]]){
                swap(cmp[j], cmp[j - 1]);
            }
            else if(sum[cmp[j]] == sum[cmp[j-1]] && nums[cmp[j]] < nums[cmp[j-1]]){
                swap(cmp[j], cmp[j - 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(i > 0)
            cout << ' ';
        cout << nums[cmp[i]];
    }
    cout << endl;

    return 0;
}