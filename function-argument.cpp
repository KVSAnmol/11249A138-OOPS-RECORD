#include<iostream>
using namespace std;
class Time{
    private:
        int hrs,min;
    public:
        void input();
        void cal(Time T1,Time T2);
        void display();
};
void Time :: input(){
    cout<<"Enter hours:";
    cin>>hrs;
    cout<<"Enter minutes:";
    cin>>min;
}
void Time :: cal(Time T1,Time T2) {
    int totalmin = T1.min + T2.min;
    hrs = T1.hrs + T2.hrs + (totalmin/60);
    min = totalmin%60;}
void Time :: display()
    { 
    cout<<"Total time:"<<hrs<<"hours"<<min<<"Minutes"<<endl;}
    int main()
        {
         Time T1,T2,T3;
         cout<<"Enter first time:"<<endl;
         T1.input();
         cout<<"Enter second time:"<<endl;
         T2.input();
         T3.cal(T1,T2);
         return 0;
        }
    
