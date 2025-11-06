#include <iostream>
using namespace std;
class Number {
    int x;
public:
    void getdata() {
        cout << "Enter a number: ";
        cin >> x;
    }
    void showdata() {
        cout << "Number = " << x << endl;
    }
    void operator++() {
        ++x;
    }
    void operator--() {
        --x;
    }
    void operator++(int) {
        x++;
    }
    void operator--(int) {
        x--;
    }
};
int main() {
    Number n;
    n.getdata();
    cout << "\nOriginal value:\n";
    n.showdata();
    ++n;
    cout << "\nAfter prefix increment (++n):\n";
    n.showdata();
    n++; 
    cout << "\nAfter postfix increment (n++):\n";
    n.showdata();
    --n; 
    cout << "\nAfter prefix decrement (--n):\n";
    n.showdata();
    n--; 
    cout << "\nAfter postfix decrement (n--):\n";
    n.showdata();
    return 0;
}