#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"

class Teacher : public Person
{
	private:
		std::string subject;
		int t_ID;

	public:
		Teacher(std::string name , int age , std::string sub , int ID);
		void displayteacher() const;
};

#endif // TEACHER_H
