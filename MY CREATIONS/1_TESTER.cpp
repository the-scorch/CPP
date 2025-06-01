#include <bits/stdc++.h>
using namespace std;

int main() {
   
   int r1, r2;
   cin >> r1 >> r2;
   bool flag = true;

   for(int i = r1; i <= r2; i++)
   {
      if(flag==true){
         if(i==0 || i==1)
   {
      cout << "1 is not a prime number." << endl;
      flag = false;
   }
      }
      int count = 0;
      for(int j = 2; j*j <= i; j++)
      {
         if(i % j == 0)
         {
            count++;
            break;
         }
      }
      if(i > 1)
      {
      if(count == 0)
      {
         cout << i << " ";
      }
   }
   }

return 0;
}