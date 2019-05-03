#include "Cow.h"
#include "string.h"
#include <iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

Cow::Cow()
{
	strcpy(name, "None");
	hobby = new char[20];
	weight = 0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy(name, nm);
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow& c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	*name = NULL;
	delete hobby;
	weight = 0;
}

Cow& Cow::operator=(const Cow& c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;

	return *this;
	// TODO: 在此处插入 return 语句
}

void Cow::ShowCow() const
{
	cout << "Name: " << name << endl;
	cout << "Hobby: " << hobby << endl;
	cout << "Weight: " << weight << endl;
}
