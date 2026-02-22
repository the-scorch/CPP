#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int dig=0;
    if(n == 0) dig = 1;
    while(n){
        dig++;
        n /= 10;
    }

    cout << "Total Digits = " << dig;
}