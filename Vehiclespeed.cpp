#include<iostream>
using namespace std;
// class vehicle{
    
//     float speed;
//     vehicle(float s){
//         speed=s;
//     }
// };
// class Car: public vehicle{
//     public:
//     int seats;
//     Car(float s,int seatcount):
//     vehicle(s)
//     {
//         seats=seatcount;
//     }
// };
// class ElectricCar:
// public Car{
//     public:
//     string battery;
//     ElectricCar(float s,int seatcount,string b):
//     {
//         battery=b;
//     }
// };
// class Airplane{
//     public:
//     float maxspeed;
//     Airplane(float ms){
//         maxspeed=ms;
//     }
// };
// class FlyingCar:public Car,public Airplane{
//     public:
// }
// int main(){
//     FlyingCar 
// }
 
class Bankaccount{
    int accountNumber;
    int balance;
    public:


    Bankaccount(int acc,int bal){
        accountNumber = acc;
        balance = bal;
    }
    Bankaccount(const Bankaccount &obj){
        balance = obj.balance;
        accountNumber = obj.accountNumber;
    }
    void add_balance(int amt){
        balance+=amt;
    }
    void show(){
        cout<<"AccountNumber:"<<accountNumber<<endl;
        cout<<"Balance:"<<balance<<endl;

    }
};
int main(){
    Bankaccount b1(14266,5904);
    b1.show();
    b1.add_balance(5000);
    Bankaccount b2 = b1;
    b2.show();
    return 0;

}



// class two;

//     class one{
//         Friend class two;
//     }
// }
// }
