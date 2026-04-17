#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void fun(){
    cout << "Executed Main Thread!" << endl;
}

void task1(){
    cout << "1st Thread is running. ID: " << this_thread::get_id() << endl;
}

void task2(){
    cout << "2nd Thread is running. ID: " << this_thread::get_id() << endl;
}

void fun1(int a){
    cout << "Doubled: " << a*2 << "\n\n";
}

int main()
{
    thread t(fun);//initializing thread
    t.join();//join the thread
    cout << "Main Thead Completed!\n\n";

    thread t1(task1);
    if(t1.joinable()){//checks if thread can be joined
        t1.join();
        cout << "1st Thread joined!\n\n";
    }

    thread t2(task2);
    if(t2.joinable()){
        t2.detach();//detach the thread
        cout << "2nd Thread detached!\n\n";
    }

    cout << "Main thread sleeping for 3 second..." << endl;
    this_thread::sleep_for(chrono::seconds(3));//delay the thread to execute
    cout << "Main thread awake.\n\n";

    thread t3(fun1, 21);//call function
    t3.join();

    thread t4([](int b){cout << "Integer: " << b << "\n\n";}, 18);//call lambda expression
    t4.join();

    unsigned int noth = thread::hardware_concurrency();
    cout << "Number of concurrent supported threads in this hardware are: " << noth <<  "\n\n";

    return 0;
}