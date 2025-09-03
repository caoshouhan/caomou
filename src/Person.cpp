#include"Person.h"
#include<iostream>
Person:: Person(std::string name , int age):m_name(name),m_age(age){}

void Person::display() const
{
	std::cout<<"姓名："<<m_name<<"  年龄："<<m_age<<std::endl;
}

