#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"enter the marks of five student :"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
   
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    double avg=sum/5;
     cout<<"sum of the all the student marks :"<<sum<<endl;
      cout<<"avg of the all the student marks :"<<avg<<endl;

}