#include <iostream>
using namespace std;

int main() {
    int semesterStartMonth = 3; // March
    int semesterDuration = 4; // 4 months
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // array of days in each month
    int currentMonth, currentDay, totalDays = 0;
    
    // Get input from user
    cout << "Enter current month (1-12): ";
    cin >> currentMonth;
    cout << "Enter current day: ";
    cin >> currentDay;
    
    // Calculate total days in current semester
    for (int i = semesterStartMonth - 1; i < semesterStartMonth + semesterDuration - 1; i++) {
        int daysInCurrentMonth = daysInMonth[i % 12];
        if (i == semesterStartMonth - 1) { // first month
            totalDays += daysInCurrentMonth - (currentDay - 1); // subtract days already passed in first month
        } else if (i == semesterStartMonth + semesterDuration - 2) { // last month
            totalDays += currentDay; // add days passed in last month
        } else {
            totalDays += daysInCurrentMonth; // add all days in other months
        }
    }
    
    // Display result
    cout << "Total days in current semester: " << totalDays << endl;
    
    return 0;
}
