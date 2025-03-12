#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;


double calculateAverage(int scores[], int numScores) {
    int total = 0;
    for (int i = 0; i < numScores; ++i) {
        total += scores[i];
    }
    return static_cast<double>(total) / numScores;
}


char determineGrade(double avgScore) {
    if (avgScore >= 90) {
        return 'A';
    } else if (avgScore >= 80) {
        return 'B';
    } else if (avgScore >= 70) {
        return 'C';
    } else if (avgScore >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}


void displayResults(const vector<string>& names, const vector<double>& averages, const vector<char>& grades, int numStudents) {
    cout << "\nStudent Results:\n";
    cout << "Name\t\tAverage\tGrade\n";
    cout << "------------------------------------\n";
    
    for (int i = 0; i < numStudents; ++i) {
        cout << names[i] << "\t\t" << fixed << setprecision(2) << averages[i] << "\t" << grades[i] << endl;
    }
}

int main() {
    int numStudents;

   
    cout << "Enter the number of students: ";
    cin >> numStudents;

    
    vector<string> names(numStudents);
    vector<double> averages(numStudents);
    vector<char> grades(numStudents);

    
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nEnter name for student " << i + 1 << ": ";
        cin >> names[i];

        int numScores;
        cout << "Enter the number of test scores for " << names[i] << ": ";
        cin >> numScores;

       
        int scores[numScores];

        
        for (int j = 0; j < numScores; ++j) {
            while (true) {
                cout << "Enter score " << j + 1 << " (0-100): ";
                cin >> scores[j];
                if (scores[j] >= 0 && scores[j] <= 100) {
                    break; // Valid score
                } else {
                    cout << "Invalid score! Please enter a score between 0 and 100." << endl;
                }
            }
        }

        
        averages[i] = calculateAverage(scores, numScores);
        grades[i] = determineGrade(averages[i]);
    }

    
    displayResults(names, averages, grades, numStudents);

    return 0;
}