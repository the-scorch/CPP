#include <iostream>
#include <memory>
using namespace std;

// Singly Linked List - one way of connected nodes
struct Node
{
     int data;   // Data
     Node *next; // pointer to Next node

     Node(int val) : data(val), next(nullptr) {} // Constructor

     ~Node() // Destructor - works when use delete
     {
          int val = this->data;

          if (this->next != NULL)
          {
               delete next;
               this->next = NULL;
          }
          cout << "memory freed of data : " << val << "\n\n";
     }
};
void InsHead(Node *&head, int d)
{
     Node *tem = new Node(d);
     tem->next = head;
     head = tem;
}
void InsTail(Node *&tail, int d)
{
     Node *tem = new Node(d);
     tail->next = tem;
     tail = tem;
}
void InsPos(Node *&head, int pos, int d)
{
     if (pos == 1)
     {
          InsHead(head, d);
          return;
     }

     Node *tem = head;
     int cnt = 1;
     while (cnt < pos - 1)
     {
          tem = tem->next;
          cnt++;
     }
     Node *tem1 = new Node(d);
     tem1->next = tem->next;
     tem->next = tem1;
}
void DelNode(Node *&head, int pos)
{
     if (pos == 1)
     {
          Node *tem = head;
          head = head -> next;
          tem -> next = NULL;
          delete tem;
          return;
     }

     Node* cur = head;
     Node* prv = NULL;
     int cnt = 1;
     while(cnt < pos){
          prv = cur;
          cur = cur -> next;
          cnt++;
     }
     prv -> next = cur -> next;
     cur -> next = NULL;
     delete cur;
}
void pList(const Node *node)
{
     cout << "\nSingly Linked List: ";
     while (node) // iterating the list
     {
          cout << node->data << " -> ";
          node = node->next;
     }
     cout << "NULL\n\n";
}

// Doubly Linked List - two way of connected nodes
// struct Node1
// {
//      int data;
//      unique_ptr<Node1> next; // unique pointer to next node - manages memory automatically
//      Node1 *prev; // pointer to previous node

//      Node1(int val) : data(val), next(nullptr), prev(nullptr) {}
// };
// void pList1(const Node1 *head)
// {
//      cout << "Doubly Linked List: " << endl;

//      cout << "Forward: "; // iterating head -> tail
//      const Node1 *node = head;
//      const Node1 *tail = nullptr;
//      while (node)
//      {
//           cout << node->data << " -> ";
//           tail = node;
//           node = node->next.get();
//      }
//      cout << "NULL\n";

//      cout << "Backward: "; // iterating tail -> head
//      node = tail;
//      cout << "NULL";
//      while (node)
//      {
//           cout << " -> " << node->data;
//           node = node->prev;
//      }
//      cout << "\n\n";
// }

// Circular Linked List - tail connects to head making a circle of connected nodes
// struct Node2
// {
//      int data;
//      unique_ptr<Node2> next;
//      Node2 *prev;

//      Node2(int val) : data(val), next(nullptr), prev(nullptr) {}
// };
// void pList2(const Node2 *start)
// {
//      cout << "Circular Doubly Linked List: " << endl;

//      cout << "Forward: "; // iterating until found head again
//      const Node2 *node = start;
//      do
//      {
//           cout << node->data << " -> ";
//           node = (node->next ? node->next.get() : start);
//      } while (node != start);
//      cout << "(back to " << start->data << ")\n";

//      cout << "Backward: "; // iterating until found tail again
//      const Node2 *tail = start->prev;
//      node = tail;
//      do
//      {
//           cout << node->data << " -> ";
//           node = node->prev;
//      } while (node != tail);
//      cout << "(back to " << tail->data << ")\n\n";
// }

int main()
{
     Node *nodeA = new Node(5);
     Node *head = nodeA;
     Node *tail = nodeA;
     InsHead(head, 15);
     InsHead(head, 20);
     InsTail(tail, 25);
     InsTail(tail, 30);
     InsPos(head, 2, 10);
     cout << "Head = " << head->data << "\nTail = " << tail->data << "\n\n";
     pList(head);
     pList(tail);
     DelNode(head, 1);
     DelNode(head, 3);
     pList(head);

     // auto nodeB = make_unique<Node1>(2);
     // nodeB->next = make_unique<Node1>(4);
     // nodeB->next->prev = nodeB.get();
     // nodeB->next->next = make_unique<Node1>(8);
     // nodeB->next->next->prev = nodeB->next.get();
     // nodeB->next->next->next = make_unique<Node1>(16);
     // nodeB->next->next->next->prev = nodeB->next->next.get();
     // pList1(nodeB.get());

     // auto nodeC = make_unique<Node2>(10);
     // nodeC->next = make_unique<Node2>(20);
     // nodeC->next->prev = nodeC.get();
     // nodeC->next->next = make_unique<Node2>(30);
     // nodeC->next->next->prev = nodeC->next.get();
     // nodeC->next->next->next = make_unique<Node2>(40);
     // nodeC->next->next->next->prev = nodeC->next->next.get();
     // Node2 *rawhead = nodeC.get();
     // Node2 *tail = nodeC->next->next->next.get();
     // rawhead->prev = tail; // make it circular
     // pList2(nodeC.get());
     // tail->next.release(); // break unique_ptr ownership at tail
     // tail->next = nullptr;

     return 0;
}