#include<iostream>
using namespace std;
float  calculateHRA(int bs)
{
    float HRA=(15.0/100.0)*float(bs);
     return HRA;
}
float  calculateDa(int bs)
{
   return (30.0/100.0)*bs;
}
float  calculatePF(int bs)
{
   return (12.5/100.0)*bs;
}
int main()
{
    int bs;
    cout<<"Enter the Base salary : ";
    cin>>bs;
    float HRA=calculateHRA(bs);
    float DA=calculateDa(bs);
    float PF=calculatePF(bs);
    cout<<"HRA is " <<HRA<<endl;
    cout<<"DA is "<<DA<<endl;
    cout<<"PF is "<<DA<<endl;
    float GS=HRA+DA+PF;
    float NS=GS-PF;
    cout<<"Gross Salary "<<GS<<endl;
    cout<<"Net Salary "<<NS<<endl;

}