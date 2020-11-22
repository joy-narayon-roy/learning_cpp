#include <iostream>
using namespace std;

class Student
{
  public:
	int id;
	double gpa;
};
int main()
{
	Student Sisir, Hridoy, Joy;

	Sisir.id = 001;
	Sisir.gpa = 5.00;
	Hridoy.id = 042;
	Hridoy.gpa = 4.8;
	Joy.id = 043;
	Joy.gpa = 4.5;
	cout << Sisir.gpa;
}