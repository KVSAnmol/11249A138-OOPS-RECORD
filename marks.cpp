#include <iostream>
using namespace std;

class student {
private:
    int rollno, mark1, mark2, mark3, total;
    char name[50];
    float avg;
public:
    void getdata() {
        cout << "Enter Rollno: ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter 3 marks: ";
        cin >> mark1 >> mark2 >> mark3;
    }
    void calculate() {
        total = mark1 + mark2 + mark3;
        avg = total / 3.0; 
    }
    void point() {
        cout << "\nStudent Details:";
        cout << "\nName: " << name;
        cout << "\nRollno: " << rollno;
        cout << "\nMark 1: " << mark1;
        cout << "\nMark 2: " << mark2;
        cout << "\nMark 3: " << mark3;
        cout << "\nTotal: " << total;
        cout << "\nAverage: " << avg << "\n";
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    student s[100]; 
    for (int i = 0; i < n; i++) {
        cout << "\n Enter details for student " << i + 1 << "\n";
        s[i].getdata();
        s[i].calculate();
        s[i].point();
    }
    return 0;
}
