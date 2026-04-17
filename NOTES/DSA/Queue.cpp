#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Queue : First In First Out
    queue<char> line;
    line.push('Z'); // add element at front
    line.push('A');
    line.push('B');
    line.push('C');
    line.push('W');

    // Same functions as previous DS
    cout << line.size() << "\t" << line.empty() << "\n";
    cout << line.front() << "\t" << line.back() << "\n";
    line.front() = 'Y';
    line.back() = 'D';
    cout << line.front() << "\t" << line.back() << "\n\n";

    line.pop(); // remove element at front
    cout << line.front() << "\n\n";

    // Priority Queue : Orders in certain way
    priority_queue<int> maxh;
    maxh.push(1);
    maxh.push(2);
    maxh.push(5);
    maxh.push(4);
    int n = maxh.size();
    for(int i=0; i < n; i++){
        cout << maxh.top() << "\t";
        maxh.pop();
    }
    cout << "\n\n";

    priority_queue<int, vector<int>, greater<int>> minh;
    minh.push(1);
    minh.push(2);
    minh.push(5);
    minh.push(4);
    int n1 = minh.size();
    for(int i=0; i < n1; i++){
        cout << minh.top() << "\t";
        minh.pop();
    }
    cout << "\n\n";

    cout << minh.empty();

    return 0;
}