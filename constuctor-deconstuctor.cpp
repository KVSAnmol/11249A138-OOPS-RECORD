#include<iostream>
using namespace std;
class student {
    public:
      student(){
        cout<<"Constuctor called"<<endl;
    }
        ~student(){
            cout<<"Deconstructor called"<<endl;
        }
        void display(){
            cout<<"Inside display function"<<endl;
        }
};
int main(){
    cout<<"Creating object S1"<<endl;
    student s1;
    s1.display();
    cout<<"Exiting Main"<<endl;
    return 0;
}  
