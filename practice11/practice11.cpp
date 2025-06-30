#include <iostream>
#include <Windows.h>
#include "Student.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    {
        int size, grades_count;

        cout << "Введіть довжину імені студента (ураховуючи нуль-термінатор): ";
        cin >> size;
        char* name = new char[size];
        for (int i = 0; i < size; i++) {
            if (i == (size - 1)) name[i] = '\0';
            else {
                cout << "Введіть літеру імені студента (ураховуючи нуль-термінатор): ";
                cin >> name[i];
            }
        }
        cout << '\n';
        cout << "Введіть довжину списка оцінок: ";
        cin >> grades_count;
        int* grades = new int[grades_count];
        for (int i = 0; i < size; i++) {
            cout << "Введіть оцінку: ";
            cin >> grades[i];
        }
        
        //Student student;
        //student.SetName(name);
        //student.SetGrades(grades, grades_count);
        //student.PrintStudentInfo();

        

    }
}

