#include<iostream>
using namespace std;

// class Student{
//     public:
//     string name;
//     static int count;
//     Student(string n):name(n){
//         count++;
//         cout<<"Student created:"<<count<<endl;

//     }
// };
// int Student::count=0;
// int main(){
//     Student s1("Ajay");
//     Student s2("Ram");
//     Student s3("neeraj");
// }

//inline function
int main(){
int x,y,z;
x=20;
y=30;
z=add(x,y);
cout<<z<<endl;
}
int add(int x,int y){
    return x+y;
}