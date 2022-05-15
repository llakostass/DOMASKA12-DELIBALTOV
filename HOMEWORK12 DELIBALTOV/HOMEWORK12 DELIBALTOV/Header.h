#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <typeinfo>

class Human
{
protected:
	std::string surname, name, midname;
	int age;
public:
	Human(std::string baseSurname = "", std::string baseName = "", std::string baseMidname = "", int baseAge = 0) :
		surname(baseSurname), name(baseName), midname(baseMidname), age(baseAge) {};
	~Human() { infoAboutDestructor(); };
	void infoAboutDestructor();
	virtual void print() = 0;
};
class Student : public Human
{
protected:
	bool on_lesson;
public:
	Student(std::string baseSurname = "", std::string baseName = "", std::string baseMidname = "", int baseAge = 0, bool baseOn_lesson = 0) :
		Human(baseSurname, baseName, baseMidname, baseAge), on_lesson(baseOn_lesson)
	{
		std::cout << "The constructor of " << typeid(*this).name() << " was created.\n\n";
	};
	void print() override;
	~Student() {};
};
class Boss : public Human
{
protected:
	int number_of_workers;
public:
	Boss(std::string baseSurname = "", std::string baseName = "", std::string baseMidname = "", int baseAge = 0, int baseNumber_of_workers = 0) :
		Human(baseSurname, baseName, baseMidname, baseAge), number_of_workers(baseNumber_of_workers)
	{
		std::cout << "The constructor of " << typeid(*this).name() << " was created.\n\n";
	};
	void print() override;
	~Boss() {};
};
#endif
#pragma once
