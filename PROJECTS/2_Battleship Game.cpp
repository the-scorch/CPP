#include <iostream>
using namespace std;

int main()
{
  bool ships[5][5] = {
      {1, 0, 0, 0, 1}, // 1 = Ship
      {0, 1, 0, 1, 0}, // 0 = Empty
      {0, 0, 1, 0, 0},
      {0, 1, 0, 1, 0},
      {1, 0, 0, 0, 1}};

  int hits = 0;  // tracking hits &
  int shots = 0; // shots took to finish

  cout << "\nTUTORIAL: \n"
       << "=> You are a Pirate Captain! And there are 25 blocks in Sea.\nOnly 9 of them have the SHIP, and rest are EMPTY.\nGuess the block & FIRE cannons to destroy all ships to WIN the game.\n\n";

  cout << "\t  1  2  3  4  5" << "\n\t  __ __ __ __ __";
  for(int i=0; i<5; i++){
    cout << "\n\t" << i+1;
    for(int j=0; j<5; j++){
      cout << "|__";
    }
    cout << "|";
  }

  char ask;
  cout << "\n\nType 'Y' to Start the Game: ";
  cin >> ask;

  if (ask == 'y' || ask == 'Y')
  {
    while (hits < 9) // max hits
    {
      int row, column;
      cout << "\nChoose the Row (1-5): ";
      cin >> row;
      cout << "Choose the Column (1-5): ";
      cin >> column;

      if (ships[row-1][column-1]) // if hits the ship
      {
        ships[row-1][column-1] = 0;
        hits++;
        cout << "\nBull's Eye! " << (9 - hits) << " ships left.\n";
      }

      else if(!(ships[row-1][column-1])) // if missed
      {
        cout << "\nEmpty! Try Again..\n";
      }

      shots++;
    }

    cout << "\n\tYay, WON in " << shots << " shots. ";
    switch (shots)
    {
    case 9:
    cout << "You are a Legend!";  
      break;
    
    case 10:
    cout << "You are an Expert!";  
      break;

    case 11:
    cout << "You are a Pro!";  
      break;
    
    default:
    cout << "You are a Rookie!";
      break;
    }
  }

  else
  {
    cout << "\nTHE END";
  }

  return 0;
}