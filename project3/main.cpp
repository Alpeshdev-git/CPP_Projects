#include<iostream>
using namespace std;
bool check(int num)
{
    if(num<2)
    {
        return false;
    }
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cout<<"enter the number whether to check "<<endl;
    cin>>num;
    if(check(num))
    {
        cout<<"it is prime number";
    }
    else
    {
        cout<<"it is not the prime number";
    }
}