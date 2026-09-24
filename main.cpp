#include <iostream>
#include <string>
using namespace std;

// Structure to store student information
struct Student {
    int id;
    string name;
    int age;
    string course;
};

// Maximum number of students
const int MAX_STUDENTS = 100;

Student students[MAX_STUDENTS];
int studentCount = 0;

// Function to add a student
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "\nStudent limit reached!\n";
        return;
    }

    cout << "\n--- Add Student ---\n";

    cout << "Enter Student ID: ";
    cin >> students[studentCount].id;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, students[studentCount].name);

    cout << "Enter Age: ";
    cin >> students[studentCount].age;

    cin.ignore();

    cout << "Enter Course: ";
    getline(cin, students[studentCount].course);

    studentCount++;

    cout << "\nStudent added successfully!\n";
}

// Function to display students
void viewStudents() {
    if (studentCount == 0) {
        cout << "\nNo students found.\n";
        return;
    }

    cout << "\n--- Student List ---\n";

    for (int i = 0; i < studentCount; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Course: " << students[i].course << endl;
    }
}

// Function to search for a student
void searchStudent() {
    int searchID;

    cout << "\nEnter Student ID to search: ";
    cin >> searchID;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == searchID) {
            cout << "\n--- Student Found ---\n";
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Course: " << students[i].course << endl;
            return;
        }
    }

    cout << "\nStudent not found.\n";
}

// Main function
int main() {
    int choice;

    do {
        cout << "\n****************************\n";
        cout << "   STUDENT MANAGEMENT SYSTEM\n";
        cout << "********************************\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "********************************\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                viewStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                cout << "\nThank you for using the system!\n";
                break;

            default:
                cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}