#include <iostream>
#include <string>

class Animal
{
protected:
{
	std::string n;
}
public:
	Animal() {}
	Animal(std::string _n) : n(_n)
	{}
	int GetN()
	{
		return n;
	}
	 virtual void Show()
	{
		std::cout << "What animals do you like?" << "\n";
	}

};

class Dog : public Animal
{
private:
	std::string x;
public:
	Dog() {}
	Dog(std::string _x, std::string _n) : x(_x), Animal(_n)
	{}
	std::string GetNX()
	{
		return n + x;
	}
	void Show() override
	{
		std::cout << "Dogs is good" << "\n";
	}
};

class Cat : public Animal
{
private:
	std::string y;
public:
	Cat() {}
	Cat(std::string _y, std::string _n) : y(_y), Animal(_n)
	{}
	std::string GetNY()
	{
		return n + y;
	}

	void Show() override
	{
		std::cout << "Cats is cunning" << " \n";
	}
};

class Rat : public Animal
{
private:
	std::string i;
public:
	Rat() {}
	Rat(std::string _i, std::string _n) : i(_i), Animal(_n)
	{}
	std::string GetNI()
	{
		return n + i;
	}
	void Show() override
	{
		std::cout << "Rats is not scary" << " \n";
	}
};


int main()
{
	Animal* r = new Rat();
	r->Show();

}
