#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

  // Array

  string cars[4] = {"Tata", "BMW", "GTR"}; // Declaring Array
  cars[2] = "GT-R";                        // Assigning or overwriting value to Array

  int nums[3] = {1945, 1916, 1970};
  nums[2] = 1969;

  cout << cars[2] << "\t" << nums[2] << "\n\n"; // Array Index starts from 0

  for (int a = 0; a < 3; a++)
  {
    cout << a << ") " << cars[a] << " - " << nums[a] << "\n";
  }

  cout << "\n";

  string flavs[3];
  flavs[0] = "Butterscotch";
  flavs[1] = "Chocolate";
  flavs[2] = "Vanila";

  // For-each Loop

  for (string b : flavs)
  {
    cout << b << "\t";
  }

  cout << "\n\n";

  int nums1[4] = {2, 5, 7, 3};
  cout << sizeof(nums1) << "\t" << sizeof(nums1) / sizeof(int);

  cout << "\n";

  int z = sizeof(nums1) / sizeof(int); // Size of array or No. of array's elements

  for (int c = 0; c < z; c++)
  {
    cout << nums1[c] << "\t";
  }

  cout << "\n\n";

  // 2D Array

  string letter[3][2] = {
      {"A", "B"},
      {"C", "D"},
      {"O", "F"},
  };
  letter[2][0] = "E";

  cout << letter[1][1] << "\t" << letter[2][0] << "\t" << letter[2][0] << "\t" << letter[1][1] << "\n";

  for (int e = 0; e < 3; e++)
  {
    for (int f = 0; f < 2; f++)
    {
      cout << letter[e][f] << "\t";
    }
  }

  cout << "\n\n";

  // 3D Array

  string letters[2][3][2] = {
      {{"A", "B"},
       {"C", "D"},
       {"O", "F"}},
      {{"G", "H"},
       {"I", "V"},
       {"K", "L"}}};
  letters[0][2][0] = "E";

  cout << letters[0][1][1] << "\t" << letters[1][2][0] << "\t" << letters[0][2][0] << "\t" << letters[1][1][1] << "\n";

  for (int d = 0; d < 2; d++)
  {
    for (int e = 0; e < 3; e++)
    {
      for (int f = 0; f < 2; f++)
      {
        cout << letters[d][e][f] << "\t";
      }
    }
  }

  cout << "\n\n";

  return 0;
}