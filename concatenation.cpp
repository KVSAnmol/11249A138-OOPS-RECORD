#include <iostream>
#include <string>
using namespace std;
class MyString {
private:
    string str;
public:
    MyString(string s = "") {
        str = s;
    } 
    void display() const {
        cout << str << endl;
    }
    MyString operator+(const MyString &obj) {
        MyString temp;
        temp.str = str + obj.str; 
        return temp;
    }
};
int main() {
    MyString s1("Hello ");
    MyString s2("World!");
    cout << "String 1: ";
    s1.display();
    cout << "String 2: ";
    s2.display();
    MyString s3 = s1 + s2;
    cout << "After concatenation: ";
    s3.display();
    return 0;
}