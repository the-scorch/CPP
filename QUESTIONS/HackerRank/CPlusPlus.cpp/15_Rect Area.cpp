#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    public:
  int width;
  int height;
  
  void read_input(){
    cin >> width >> height;
  }
  
  void display(){
    cout << width << " " << height << endl;
  }
};

class RectangleArea : public Rectangle
{
    public:
    void display(){
        cout << width * height;
    }
};

int main() {
    RectangleArea rect;
    rect.read_input();
    rect.Rectangle::display();
    rect.display();
    return 0;
}
