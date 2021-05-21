#include<iostream>
using namespace std;
int c = 45;
int main(){

    // **********************Build in datatypes**************
    // int a , b , c;
    // cout<<"Enter The Value Of a"<<endl;
    // cin>>a;
    // cout<<"Enter The Value of b"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The Sum is " << c <<endl;
    // cout<<"The Global c is "<<::c;

    // **********************float, Double and long double Literals**************
    // float d=34.4f;
    // long double e =34.4l;
    // cout<<"The Value of d"<<d<<endl;
    // cout<<"The Value of e"<<e<<endl;
    // cout<<"The Size of 34.4 "<<sizeof(34.4)<<endl;
    // cout<<"The Size of 34.4f "<<sizeof(34.4f)<<endl;
    // cout<<"The Size of 34.4F "<<sizeof(34.4F)<<endl;
    // cout<<"The Size of 34.4l "<<sizeof(34.4l)<<endl;
    // cout<<"The Size of 34.4L "<<sizeof(34.4L)<<endl;

    // **********************Reference Variables**************
    // Aditya Singh ---> Healer ---> SSSALTY ----> EddieXO
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // **********************Typecasting**************
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;

    int c = int(b);

    cout<<"The Value of C "<<c<<endl;

    cout<<"The exp is "<<a + b<<endl;
    cout<<"The exp is "<<a + int(b)<<endl;
    cout<<"The exp is "<<a + (int)b<<endl;


    return 0;
}