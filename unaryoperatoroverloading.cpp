#include <iostream>
using namespace std;
class Number {
    int x, y, z;
public:
    void getdata() {
        cout << "Enter values of x, y, z: ";
        cin >> x >> y >> z;
    }
    void showdata() {
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }
    void operator-() {
        x = -x;
        y = -y;
        z = -z;
    }
};
int main() {
    Number n;
    cout << "Enter the values:\n";
    n.getdata();
    cout << "\nBefore applying unary minus:\n";
    n.showdata();
    -n;   
    cout << "\nAfter applying unary minus:\n";
    n.showdata();
    return 0;
}