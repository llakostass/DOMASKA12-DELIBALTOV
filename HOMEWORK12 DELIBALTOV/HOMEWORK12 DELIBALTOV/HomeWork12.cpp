#include "Header.h"

int main()
{
	const int randomSize = 2;
	Human* people[randomSize];
	people[0] = new Boss("Holyakov", "Maxim", "Valeryevich", 41, 13);
	people[1] = new Student("Poroshenko", "Vitaly", "Tatarovich", 19, 1);
	for (auto ind : people)
		ind->print();
	for (auto ind : people)
		delete ind;
	return 0;
}