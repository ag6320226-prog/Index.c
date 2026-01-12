#include<iostream>
#include<thread>

using namespace std;
 void task(int Id){
    for(int i=0;i<16;i++){
        cout<<"work run by thread"<<Id<<endl;
 }
 }
 int main(){
    thread t1(task,1);
thread t2(task,2);

    t1.join();
    t2.join();
    return 0;
 }