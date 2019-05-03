//1. 对于下面的声明：
//class Cow {
//	char name[20];
//	char* hobby;
//	double weight;
//public:
//	Cow();
//	Cow(const char* nm, const char* ho, double wt);
//	Cow(const Cow c&);
//	~Cow();
//	Cow& operator=(const Cow& c);
//	void ShowCow() const;             //display all cow data
//};
//给这个类提供实现，并编写一个使用所有函数成员的小程序。

#pragma once
class Cow {
	char name[20];
	char* hobby;
	double weight;
public:
	Cow();
	Cow(const char* nm, const char* ho, double wt);
	Cow(const Cow &c);
	~Cow();
	Cow& operator=(const Cow& c);
	void ShowCow() const;					//display all cow data
};