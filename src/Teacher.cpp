#include"Teacher.h"
#include<iostream>

Teacher::Teacher(std::string name, int age , std::string sub , int ID):Person(name,age),subject(sub),t_ID(ID){}
void Teacher::displayteacher() const
{
	std::cout<<"--------------教师信息-------------"<<std::endl;
	std::cout<<"所教科目："<<subject<<"  教师编号："<<t_ID<<std::endl;
}
