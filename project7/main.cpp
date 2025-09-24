#include<iostream>
using namespace std;
class Book{
   public:
   int bookid;
   string title;
   double price;
   void accept()
    {
        cout<<"enter the book id :"<<endl;
        cin>>bookid;

        cout<<"enter the book title:"<<endl;
        cin>>title;

        cout<<"enter the book price :"<<endl;
        cin>>price;
    }

    void print()
    {
        cout<<bookid <<" "<<title<<" "<<price<<endl;
    }
};

int main()
{
   Book b;
   b.accept();
   b.print();
}