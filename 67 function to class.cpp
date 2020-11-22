#include <iostream>
using namespace std;
class Student
{
  public:
	int id;
	double gpa;
	void display()
	{
		cout
			<< "id " << id << endl
			<< "gpa " << gpa << endl
			<< endl;
	};
};

int main()
{
	Student Sisir,
		Hridoy,
		Joy;

	Sisir.id = 02;
	Sisir.gpa = 5;

	Hridoy.id = 23;
	Hridoy.gpa = 4.8;

	Joy.id = 25;
	Joy.gpa = 4.5;

	Sisir.display();
	Hridoy.display();
	Joy.display();
}