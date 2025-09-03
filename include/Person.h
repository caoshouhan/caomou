#ifndef PERSON_H
#define PERSON_H
#include<string>
class Person
{
	private:
		std::string m_name;
		int m_age;

	public:
		Person(std::string name,int age);
		void display() const;
};
#endif // PERSON_H















