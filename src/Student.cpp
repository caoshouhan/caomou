#include<iostream>
#include"Student.h"

Student::Student(std::string name , int age , int id , double gpa):Person(name,age),s_ID(id),s_GPA(gpa){}
void Student::displaystudent() const
{
	std::cout<<"--------------学生信息-------------"<<std::endl;
	std::cout<<"学生号："<<s_ID<<"  学生绩点："<<s_GPA<<std::endl;
}
