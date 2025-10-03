#include <iostream>
#include <list>
#include <string>
#include <memory>
using namespace std;

struct Node // Singly Linked List
{
     int data;
     unique_ptr<Node> next;

     Node(int val) : data(val), next(nullptr) {}
};

void pList(const Node *node)
{
     cout << "\nSingly Linked List: ";
     while (node)
     {
          cout << node->data << " -> ";
          node = node->next.get();
     }
     cout << "NULL\n\n";
}

struct Node1 // Doubly Linked List
{
     int data;
     unique_ptr<Node1> next;
     Node1 *prev;

     Node1(int val) : data(val), next(nullptr), prev(nullptr) {}
};

void pList1(const Node1 *head)
{
     cout << "Doubly Linked List: " << endl;

     cout << "Forward: ";
     const Node1 *node = head;
     const Node1 *tail = nullptr;
     while (node)
     {
          cout << node->data << " -> ";
          tail = node;
          node = node->next.get();
     }
     cout << "NULL\n";

     cout << "Backward: ";
     node = tail;
     cout << "NULL";
     while (node)
     {
          cout << " -> " << node->data;
          node = node->prev;
     }
     cout << "\n\n";
}

struct Node2 // Circular Linked List
{
     int data;
     unique_ptr<Node2> next;
     Node2 *prev;

     Node2(int val) : data(val), next(nullptr), prev(nullptr) {}
};

void pList2(const Node2 *start)
{
     cout << "Circular Doubly Linked List: " << endl;

     cout << "Forward: ";
     const Node2 *node = start;
     do
     {
          cout << node->data << " -> ";
          node = (node->next ? node->next.get() : start);
     } while (node != start);
     cout << "(back to " << start->data << ")\n";

     cout << "Backward: ";
     const Node2 *tail = start->prev;
     node = tail;
     do
     {
          cout << node->data << " -> ";
          node = node->prev;
     } while (node != tail);
     cout << "(back to " << tail->data << ")\n\n";
}

int main()
{
     auto nodeA = make_unique<Node>(5);
     nodeA->next = make_unique<Node>(10);
     nodeA->next->next = make_unique<Node>(15);
     pList(nodeA.get());

     auto nodeB = make_unique<Node1>(2);
     nodeB->next = make_unique<Node1>(4);
     nodeB->next->prev = nodeB.get();
     nodeB->next->next = make_unique<Node1>(8);
     nodeB->next->next->prev = nodeB->next.get();
     nodeB->next->next->next = make_unique<Node1>(16);
     nodeB->next->next->next->prev = nodeB->next->next.get();
     pList1(nodeB.get());

     auto nodeC = make_unique<Node2>(10);
     nodeC->next = make_unique<Node2>(20);
     nodeC->next->prev = nodeC.get();
     nodeC->next->next = make_unique<Node2>(30);
     nodeC->next->next->prev = nodeC->next.get();
     nodeC->next->next->next = make_unique<Node2>(40);
     nodeC->next->next->next->prev = nodeC->next->next.get();
     Node2 *rawhead = nodeC.get();
     Node2 *tail = nodeC->next->next->next.get();
     rawhead->prev = tail; // make it circular
     pList2(nodeC.get());
     tail->next.release(); // break unique_ptr ownership at tail
     tail->next = nullptr;

     // Direct Implementation - doubly linked list
     list<int> todo = {20, 3, 4, 5, 6, 7, 8, 90};
     for (int i : todo)
     {
          cout << i << "\t";
     }
     cout << "\n\n";

     cout << todo.front() << "\t" << todo.back() << endl; // gives First and Last element

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

     return 0;
}