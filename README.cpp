/*Abdul Basit(18) BsCS 1(D)*/
#include<iostream>
#include<cmath>
using namespace std;
int sum(int a, int b) {
    return a+b;
}
int sub(int a, int b) {
    return a-b;
}
int mul(int a, int b) {
    return a*b;
}
float qnt(float a, float b) {
    return a/b;
}
int rmndr(int a, int b) {
    return a%b;
}
int main()
{
    float a, b, add,diff, prod, divide, mod;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"max value is :"<<max(a,b)<<endl;
    cout<<"min value is :"<<min(a,b)<<endl;
    add=sum(a,b);
    cout<<"result of addition     :"<<add<<endl;
    diff=sub(a, b);
    cout<<"result of subtraction :"<<diff<<endl;
    prod=mul(a, b);
    cout<<"result of multiplication :"<<prod<<endl;
    divide=qnt(a, b);
    cout<<"result of division :"<<divide<<endl;
    mod=rmndr(a, b);
    cout<<"remainder is :"<<mod<<endl;
    cout<<"log of both values respectively :"<<log(a)<<" , "<<log(b)<<endl;
    cout<<"square root of both values respectively :"<<sqrt(a)<<" , "<<sqrt(b)<<endl;
}
