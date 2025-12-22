#include<iostream>

using namespace std;
class BasicCalculator{
    public:
    double add(double a,double b){
        return a+b;

    }
    virtual double sub(double a, double b){
        return a-b;
    }
    virtual double multiply(double a,double b)=0;
     virtual double division(double a,double b)=0;
};
class Calculator:public BasicCalculator{
    public:
    virtual double multiply(double a,double b){
        return a*b;
    }
    virtual double division(double a,double b){
        return a/b;
    }
};
int main(){
BasicCalculator *ptr = new BasicCalculator;
cout<<ptr->add(5,4);
cout<<ptr->divide(6.02,3.14);

}


