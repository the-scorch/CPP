#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x = 10;
   {
      int x = 20;
      cout << "Inner x : " << x << endl;
   }
   cout << "Outer x : " << x;
return 0;
}