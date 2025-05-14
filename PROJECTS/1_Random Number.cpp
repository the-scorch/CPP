#include <iostream>
#include <cstdlib> //For rand() and srand()
#include <ctime> //For time()
using namespace std;

int main() {

srand(time(0)); //Different No. each time the program runs

int randomnum = rand() % 11; //between 0 and 10

cout << randomnum;

return 0;
}