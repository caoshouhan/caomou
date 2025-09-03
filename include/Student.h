#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person
{
	private:
		int s_ID;
		double s_GPA;

	public:
		Student(std::string name , int age , int id , double gpa);
		void displaystudent() const;
};

#endif // STUDENT_H
