#include "Student.h"
#include <iostream>
using namespace std;

void Student::SetName(const char* value) {
    if (name != nullptr) {
        delete[] name;
    }
    if (value == nullptr) name = nullptr;
    else {
        name = new char[strlen(value) + 1];
        strcpy_s(name, strlen(value) + 1, value);
    }
}
void Student::SetGrades(const int* gradearr, int count) {
    if (grades != nullptr) {
        delete[] grades;
    }
    grades = new int[count];
    grades_count = count;
    for (int i = 0; i < count; i++) {
        grades[i] = gradearr[i];
    }
}
double Student::avgGrades(const int* gradearr, int count) {
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += gradearr[i];
    }
    return sum / count;
}

void Student::PrintStudentInfo() {
    cout << "Ім'я: " << name << '\n';
    cout << "Оцінки: ";
    for (int i = 0; i < grades_count; i++) {
        cout << grades[i] << ' ';
    }
    cout << '\n';
    cout << "Кількість оцінок: " << grades_count << '\n';
    cout << "Середня оцінка студента: " << (double)avgGrades(grades, grades_count);
}