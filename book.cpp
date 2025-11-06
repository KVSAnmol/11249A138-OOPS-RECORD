#include<iostream>
using namespace std;
class book
{
    private:
    int accno,pages;
    char Bookname[50],isbno[20],Author[50];
    float price;
    public:
      void getdata();
      void display();
};
void book :: getdata()
{
    cout<<"Enter the Book name:";
    cin>>Bookname;
    cout<<"Ether the no.of pages:";
    cin>>pages;
    cout<<"Enter the Account No:";
    cin>>accno;
    cout<<"Enter the ISB No:";
    cin>>isbno;
    cout<<"Enter the Author name:";
    cin>>Author;
    cout<<"Enter the Book price:";
    cin>>price;
}
void book :: display()
{
    cout<<"\nBook Acc No:"<<accno;
    cout<<"\nBook Name:"<<Bookname;
    cout<<"\nISB No:"<<isbno;
    cout<<"\nAuthor Name:"<<Author;
    cout<<"\nNo.of pages:"<<pages;
    cout<<"\nPrice of Book:"<<price;
}
int main()
{
    book b;
    b.getdata();
    b.display();

}