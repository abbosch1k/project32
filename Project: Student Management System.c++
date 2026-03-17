#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    string name;
    double grade;
};

int main() {
    vector<Student> students;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        Student s;
        cout << "ID: ";
        cin >> s.id;
        cout << "Name: ";
        cin >> s.name;
        cout << "Grade: ";
        cin >> s.grade;
        students.push_back(s);
    }

    int searchId;
    cout << "\nEnter ID to search: ";
    cin >> searchId;

    for(auto s : students) {
        if(s.id == searchId) {
            cout << "Found: " << s.name << " Grade: " << s.grade << endl;
        }
    }
}
