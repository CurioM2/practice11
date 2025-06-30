#pragma once
class Student {
private:
	char* name;
	int* grades;
	int grades_count;
public:
	Student() : Student(nullptr, nullptr, 0) {}
	Student(const char* value) : Student(value, nullptr, 0) {}
	Student(const char* value, const int* gradearr, int count) : name(nullptr), grades(nullptr), grades_count(count) {
		SetName(value);
	}
	void SetName(const char* value);
	void SetGrades(const int* gradearr, int count);
	double avgGrades(const int* gradearr, int count);
	char* GetName() {
		return name;
	}
	int* GetGrades() {
		return grades;
	}
	int GetGradesCount() {
		return grades_count;
	}
	void PrintStudentInfo();

};


