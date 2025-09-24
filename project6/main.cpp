#include<iostream>
using namespace std;
void Swap(int &num1,int &num2)
{
    int temp1;
    temp1=num1;
    num1=num2;
    num2=temp1;
}
void swap2(int num1,int num2)
{
    int temp1;
    temp1=num1;
    num1=num2;
    num2=temp1;
    cout<<num1<<num2;
}
int main()
{
    int num1,num2;
    cout<<"enter the two number :";
    cin>>num1>>num2;
    cout<<"Before swapping by reference "<<num1<<" "<<num2<<endl;
    Swap(num1,num2);
    cout<<"after swapping by reference "<<num1<<" "<<num2<<endl;
    swap2(num1,num2);
    cout<<"after swapping by reference "<<num1<<" "<<num2<<endl;
}