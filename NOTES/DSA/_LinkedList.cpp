#include <iostream>
#include <list>
#include <string>
#include <memory>
using namespace std;

struct Node
{
     int data;
     unique_ptr<Node> next;

     Node(int val) : data(val), next(nullptr) {}
};

void printList(const Node* node){
     while(node){
          cout << node->data << " -> ";
          node->next.get();
     }
     cout << "NULL\n\n";
}

int main()
{

     list<int> todo = {20, 3, 4, 5, 6, 7, 8, 90};
     for (int i : todo)
     {
          cout << i << "\t";
     }
     cout << "\n\n";

     // list Functions
     cout << todo.front() << "\t" << todo.back() endl; // gives First and Last element

     todo.front() = 2; // overwriting values
     todo.back() = 9;
     cout << todo.front() << "\t" << todo.back() << "\n\n";

     todo.push_front(1); // add element at front
     todo.push_front(0);

     todo.push_back(10); // add element at end
     todo.push_back(11);

     todo.pop_front(); // removes element from front : 0
     todo.pop_back();  // removes element from end : 11

     for (int i : todo)
     {
          cout << i << "\t";
     }
     cout << "\n\n";

     list<string> texts;
     cout << texts.size()                   // gives the list Size
          << "\t" << texts.empty() << endl; // if No elements = 1, Else = 0
     cout << todo.size() << "\t" << todo.empty() << "\n\n";

     // Iterator
     // vector<string>::iterator it;
     auto it = todo.begin(); // Declare to first element
     cout << *it << "\t";

     advance(it, 1); // pointing to second element
     cout << *it << "\t";

     it = todo.end();
     --it; // pointing to last element
     cout << *it << "\n\n";

     for (it = todo.begin(); it != todo.end(); it++)
     {
          if (*it == 5) // finds &
          {
               it = todo.erase(it); // remove the element
          }
     }

     for (it = todo.begin(); it != todo.end(); it++) // for-loop using iterator
     {
          cout << *it << "\t";
     }
     cout << "\n\n";

     list<int> count = {1, 2, 3, 4, 5};
     for (auto it1 = count.rbegin(); it1 != count.rend(); it1++) // reverse iterator for-loop
     {
          cout << *it1 << "\t";
     }

     return 0;
}