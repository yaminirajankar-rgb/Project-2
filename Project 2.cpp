 content here” me paste karo:
#include <iostream>
using namespace std;

int calculateTotal(int marks[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}

float calculateAverage(int total, int n) {
    return (float)total / n;
}

int findHighest(int marks[], int n) {
    int highest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest)
            highest = marks[i];
    }
    return highest;
}

int findLowest(int marks[], int n) {
    int lowest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] < lowest)
            lowest = marks[i];
    }
    return lowest;
}

char calculateGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int main() {
    const int n = 5;
    int marks[n];

    cout << "Enter marks for 5 subjects (0-100):" << endl;

    for (int i = 0; i < n; i++) {
        do {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];

            if (marks[i] < 0 || marks[i] > 100)
                cout << "Invalid marks! Enter between 0 and 100." << endl;

        } while (marks[i] < 0 || marks[i] > 100);
    }

    int total = calculateTotal(marks, n);
    float average = calculateAverage(total, n);

    cout << "\nTotal Marks: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Highest Marks: " << findHighest(marks, n) << endl;
    cout << "Lowest Marks: " << findLowest(marks, n) << endl;
    cout << "Letter Grade: " << calculateGrade(average) << endl;

    return 0;
}
