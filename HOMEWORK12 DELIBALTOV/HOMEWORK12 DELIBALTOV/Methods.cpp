#include "Header.h"

void Student::print()
{
	on_lesson ? std::cout << "The Student on lesson\n" : std::cout << "The Student not on lesson\n";
	std::cout << "The Student name, midname, surname: " << name << " " << midname << " " << surname << "\n";
	std::cout << "The Student age: " << age << "\n\n";
}
void Boss::print()
{
	std::cout << "The number_of_workers is: " << number_of_workers << "\n";
	std::cout << "The Boss name, midname, surname: " << name << " " << midname << " " << surname << "\n";
	std::cout << "The Boss age: " << age << "\n\n";
}
void Human::infoAboutDestructor()
{
	std::cout << "The object " << typeid(*this).name() << " was destroyed.\n";
}