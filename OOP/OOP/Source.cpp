#include <iostream>
using std::string;
using namespace std;

class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee {
private:
	string Name;
	string Company;
	int Age;
protected:
public:
	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}
	void setAge(int age) {
		if(age>=18)
			Age = age;
	}
	int getAge() {
		return Age;
	}

	void IntroduceYourself() {
		std::cout << "Name    - " << Name << std::endl;
		std::cout << "Company - " << Company << std::endl;
		std::cout << "Age     - " << Age << std::endl;
	}
	Employee() { // constructor has same name as class, public and .
		cout << "Called default constructor!\n\n";
	}
	Employee(string name, string company, int age) { // constructor has same name as class, public and
		cout << "\n\nCalled parameter constructor!\n\n";
		Name = name;
		Company = company;
		Age = age;
	}
	void AskForPromotion() {
		if (Age > 30)
			std::cout << Name << " got promoted!" << std::endl;
		else
			std::cout << Name << " not promoted!" << std::endl;

	}
	virtual void Work() {
		std::cout << Name << " is checking email, task backlog, performing tasks ... " << endl;
	}
};

class Developer : public Employee {
public:
	string FavProgrammingLanguage;
	Developer(string name, string company, int age, string favProgrammingLanguage) 
		: Employee(name, company, age)
	{
		FavProgrammingLanguage = favProgrammingLanguage;
	}
	void FixBug() {
		std::cout << getName() << " fixed bug using " << FavProgrammingLanguage << std::endl;
	}
	void Work() {
		std::cout << getName() << " is writing " << FavProgrammingLanguage << std::endl;
	}
};

class Teacher : public Employee {
public:
	string Subject;
	void PrepareLesson() {
		std::cout << getName() << " is preparing " << Subject << " lesson" << std::endl;
	}
	Teacher(string name, string company, int age, string subject)
		: Employee(name, company, age)
	{
		Subject = subject;
	}
	void Work() {
		std::cout << getName() << " is teaching " << Subject << std::endl;
	}
};

int main()
{
	cout << endl;
	cout << "OOP!" << endl;
	cout << endl;

	//Employee employee1;
	//employee1.Name = "Saldina";
	//employee1.Company = "YT-CodeBeauty";
	//employee1.Age = 25;
	//employee1.IntroduceYourself();
	//cout << endl;
	Employee employee1 = Employee("Saldina", "YT-CodeBeauty", 25);
	employee1.IntroduceYourself();
	employee1.AskForPromotion();

	//Employee employee2;
	//employee2.Name = "John";
	//employee2.Company = "YT-Amazon";
	//employee2.Age = 35;
	//employee2.IntroduceYourself();
	//cout << endl;
	Employee employee2 = Employee("John", "YT-Amazon", 35);
	employee2.IntroduceYourself();
	employee2.AskForPromotion();

	// use constructor

	Employee employee3 = Employee("Adam", "AdamSchranzMusic", 16);
	employee3.IntroduceYourself();
	employee3.AskForPromotion();

	cout << endl;

	employee1.setAge(10);
	employee1.IntroduceYourself();
	cout << endl;
	std::cout << employee1.getName() << " is " << employee1.getAge() << " years old.";

	Developer d = Developer("Sally","YT-Stuff", 45, "C++");
	d.IntroduceYourself();
	d.AskForPromotion();
	d.FixBug();
	d.Work();

	Teacher t = Teacher("Jack", "Cool School", 35, "History");
	t.PrepareLesson();
	t.AskForPromotion();
	t.Work();

	// the most common use of polymorphism is when a parent class reference is used to refer to a child class object

	Employee* e1 = &d;
	Employee* e2 = &t;
	Employee* e3 = &employee1;

	e1->Work();
	e2->Work();
	e3->Work();

	system("pause>0");
	return 0;
}

/*
 C++ Object-Oriented Programming
CodeBeauty
10 videos 272,817 views Last updated on 24 Aug 2022  (Consider reviewing 6-9,10 - 1 year old)
Course Contents
(0:00 : 00) Introduction
(0:00 : 54) Introduction to OOP
(0:03 : 17) Classesand objects
(0:10 : 40) Access modifiers
(0:17 : 26) Constructors
(0:29 : 39) Encapsulation
(0:39 : 50) Abstraction
(0:52 : 23) Inheritance
(1:15 : 43) Polymorphism
(1:28 : 26) Outro
(1:29 : 01) Bloopers

*/

/*
#include <iostream>

using namespace std;

int main()
{
	cout << endl;
	cout << "CppArrayPointers!" << endl;
	cout << endl;

	system("pause>0");
	return 0;
}
*/
