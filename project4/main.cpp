#include<iostream>
using namespace std;
int main()
{
    char *arr;
    int size;
    cout<<"enter the size "<<endl;
    cin>>size;
    arr=new char[size];
    cout<<"Enter the string "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"char arr in reverse order :";
    int left=0,right=size-1;
    while(left<right)
    {
        char temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
    delete []arr;
}