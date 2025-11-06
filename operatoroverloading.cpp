#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}
    int getHours() const { return hours; }
    int getMinutes() const { return minutes; }
    int getSeconds() const { return seconds; }
    bool operator==(const Time& other) {
        return (hours == other.hours && minutes == other.minutes && seconds == other.seconds);
    }
    bool operator!=(const Time& other) {
        return !(*this == other);
    }
    bool operator<(const Time& other) {
        if (hours < other.hours) return true;
        if (hours == other.hours && minutes < other.minutes) return true;
        if (hours == other.hours && minutes == other.minutes && seconds < other.seconds) return true;
        return false;
    } 
    bool operator>(const Time& other) {
        return !(*this < other) && *this != other;
    } 
    bool operator<=(const Time& other) {
        return (*this < other || *this == other);
    }
    bool operator>=(const Time& other) {
        return (*this > other || *this == other);
    }
    void display() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};
int main() {
    Time time1(10, 30, 45);
    Time time2(12, 15, 30);
    cout << "Time 1: ";
    time1.display();
    cout << "Time 2: ";
    time2.display();
    if (time1 == time2) {
        cout << "Time 1 is equal to Time 2." << endl;
    } else {
        cout << "Time 1 is not equal to Time 2." << endl;
    }
    if (time1 != time2) {
        cout << "Time 1 is not equal to Time 2." << endl;
    }
    if (time1 < time2) {
        cout << "Time 1 is less than Time 2." << endl;
    }
    if (time1 > time2) {
        cout << "Time 1 is greater than Time 2." << endl;
    }
    if (time1 <= time2) {
        cout << "Time 1 is less than or equal to Time 2." << endl;
    }
    if (time1 >= time2) {
        cout << "Time 1 is greater than or equal to Time 2." << endl;
    }
    return 0;
}
