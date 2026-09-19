#include <iostream>
#include <string>
using namespace std;

int main() {

    //student information
    std::string name;
    int studentNumber;
    double mark;

    //display tittle 
    cout <<"--------------------" << std::endl;
    cout << "STUDENT MANAGEMENT SYSTEM" << std::endl;
    cout << "-------------------" << std::endl;

    //get student name from user 
    cout << "Enter your name: ";
    getline(cin, name);

    //get student number from user
    cout << "Enter your student number: ";
    cin >> studentNumber;
    
    //get student mark from user
    cout << "Enter your mark: ";
    cin >> mark;
    