#include <iostream>
using namespace std;
class student
{
    private:
int rollno,mark1,mark2,mark3,total;
char name[50];
float avg;
    public:
    void getdata()
{
cout <<"Enter the roll no:";
  cin >> rollno;
cout << "Enter the name of the student:";
  cin >> name;
cout <<"Enter the marks:";
  cin >>mark1>>mark2>>mark3;
}
void calculate()
{ 
    total = mark1 + mark2 + mark3;
    avg = total/3;
}
void display()
{
cout<<"\n rollno :"<< rollno;
cout<<"\n name :"<< name;
cout<<"\n mark1 :"<< mark1;
cout<<"\n mark2 :"<< mark2;
cout<<"\n mark3 :"<< mark3;
cout<<"\n total :"<< total;
cout<<"\n average :"<< avg;
}
};
int main()
{
    student s;
    s.getdata();
    s.calculate();
    s.display();
}
