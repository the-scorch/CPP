#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cout << "Enter Two numbers: ";
    cin >> n1 >> n2;

    int ans = min(n1, n2);
    while(ans > 1){
        if(n1%ans == 0 && n2%ans == 0) break;
        ans--;
    }

    cout << "GCD = " << ans;

    return 0;
}