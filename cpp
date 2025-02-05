#include <iostream>
using namespace std;

int main() {
    const int numStudents = 5;  // Number of students is set to 5
    int scores[numStudents];    // Array to store scores entered
    int sum = 0;                // Sum of all scores
    int highest, lowest;        // Variables for highest and lowest scores

    // Input scores and calculate sum
    cout << "Please enter the scores of 5 students:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the score for student " << (i + 1) << ": ";
        cin >> scores[i];

        // Add score to sum
        sum += scores[i];

        // Initialize highest and lowest with the first score
        if (i == 0) {
            highest = scores[i];
            lowest = scores[i];
        }
        else {
            // Update highest and lowest scores
            if (scores[i] > highest) {
                highest = scores[i];
            }
            if (scores[i] < lowest) {
                lowest = scores[i];
            }
        }
    }

    // Calculate the average
    double average = static_cast<double>(sum) / numStudents;

    // Display the results
    cout << "\nScores in the order entered:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << ": " << scores[i] << endl;
    }

    cout << "\nAverage score: " << average << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;

    return 0;
}

