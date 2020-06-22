#include "Class Student.h"

Student::Student()
{
	this->name = "No name";
	this->favoriteLesson = "absent";
	this->age = 0;
	this->grade = 0;
}

Student::Student(int age, int grade, string name, string favoriteLesson, int id)
{
	this->age = age;
	this->grade = grade;
	this->name = name;
	this->favoriteLesson = favoriteLesson;
	this->id = id;
}

void Student::setAge(int age)
{
	this->age = age;
}

int Student::getAge()
{
	return age;
}

void Student::setName(string name)
{
	this->name = name;
}

string Student::getName()
{
	return name;
}

void Student::setGrade(int grade)
{
	this->grade = grade;
}

int Student::getGrade()
{
	return grade;
}

void Student::setFavoriteLesson(string favoriteLesson)
{
	this->favoriteLesson = favoriteLesson;
}

string Student::getFavoriteLesson()
{
	return favoriteLesson;
}

void Student::setId(int id)
{
	this->id = id;
}

int Student::getId()
{
	return this->id;
}

void Student::print()
{
	cout << endl << endl;
	cout << "\t" << "���������� �� �������" << endl << endl;
	cout << "������� = " << age << "\t" << "����� = " << grade << endl;
	cout << "��� = " << name << "\t" << "������� ���� = " << favoriteLesson << endl;
	cout << endl << endl;
}

string Student::getInfo()
{
	return "\t����� �������: " + std::to_string(id) + "\n" +
		   "������� �������: " + std::to_string(age) + "\n" +
		   "����� �������: " + std::to_string(grade) + "\n" +
		   "��� �������: " + name + "\n" +
		   "������� ������� �������: " + favoriteLesson + "\n";
}