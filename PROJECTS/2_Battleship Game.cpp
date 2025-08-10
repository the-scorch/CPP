#include <iostream>
using namespace std;

int main()
{
  // 1 indicates there is a ship
  bool ships[4][4] = {
      {0, 1, 1, 0},
      {0, 0, 0, 0},
      {1, 0, 1, 0},
      {0, 0, 1, 0}};

  // Tracking total hits the player has and how many turns they played
  int hits = 0;
  int numberOfTurns = 0;

  // Allows player to play until they hit all ships
  while (hits < 4)
  {
    int row, column;
    cout << "Selecting coordinates\n";

    cout << "Choose a row number between 0 and 3: ";
    cin >> row;
    cout << "Choose a column number between 0 and 3: ";
    cin >> column;

    // Tell the player that they hit a ship
    if (ships[row][column])
    {
      ships[row][column] = 0;
      hits++;                                        // Increase the hit counter
      cout << "Hit! " << (5 - hits) << " left.\n\n"; // how many ships are left
    }

    // Tell the player that they missed
    else
    {
      cout << "Miss\n\n";
    }

    numberOfTurns++; // Count how many turns the player has taken
  }

  cout << "Victory!\n";
  cout << "You won in " << numberOfTurns << " turns";

  return 0;
}
