#include <iostream>
#include <string>

class Animal
{
protected:

	std::string n;

public:
	Animal() {}
	Animal(std::string _n) : n(_n)
	{}
	

	 virtual void Voice()
	{
		std::cout << "What animals do you like?" << "\n";
	}
	 virtual void Voice()
	 {
		 std::cout << "Animal makes sounds." << "\n";
	 }

};

class Dog : public Animal
{
public:
	Dog() {}
	Dog( std::string _n) :  Animal(_n)
	{}
	
	void Voice() override
	{
		std::cout << "Woof!" << "\n";
	}
};

class Cat : public Animal
{
public:
	Cat() {}
	Cat(std::string _n) : Animal(_n)
	{}

	void Voice() override
	{
		std::cout << "Meow!" << " \n";
	}
};

class Owl : public Animal
{
public:
	Owl() {}
	Owl(std::string _n) : Animal(_n)
	{}
	
	void Voice() override
	{
		std::cout << "Hoot!" << " \n";
	}
};


int main()
{
	int x = 0; 
	std::cout <<"Animals voice" << std::endl;
	std::cin >> x;
	Animal* Animals = new Animal[x];

	for (int i = 0; i < x; ++i) //заполняем массив
	{
		std::string LocalAnimals;

		std::cout << "Enter animals: " << std::endl;
		std::cin >> LocalAnimals;

		Animals[i] = *new  Animal(LocalAnimals);
	}

	for (int i = 0; i < x; ++i) // Вывод массива 
	{
		Animals[i].Voice();
	}

	delete[]  Animals;

	return 0;

}
