#include"Teacher.h"
#include"Student.h"

int main()
{
	Teacher t("张三",42,"数学",123456);
	t.displayteacher();
	t.display();

	Student s("小明",20,98765,3.8);
	s.displaystudent();
	s.display();

	return 0;
}














