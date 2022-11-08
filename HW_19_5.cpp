#include <iostream>
#include <string>

class Animal
{
public:
	Animal()
	{
		std::cout << "Animal create" << "\n";
	}
	
	 virtual void Voice()
	{
		std::cout << "Animal makes sounds." << "\n";
	}
	 virtual ~Animal()
	 {
		 std::cout << "Animal destroy" << "\n";
	 }

};

class Dog : public Animal
{
public:
	Dog()
	{
		std::cout << "Dog create" << "\n";
	}
	
	void Voice() override
	{
		std::cout << "Woof!" << "\n";
	}
	virtual ~Dog()
	{
		std::cout << "Dog destroy" << "\n";
	}

};

class Cat : public Animal
{
public:
	Cat()
	{
		std::cout << "Cat create" << "\n";
	}
	
	void Voice() override
	{
		std::cout << "Meow!" << " \n";
	}

	virtual ~Cat()
	{
		std::cout << "Cat destroy" << "\n";
	}

};

class Owl : public Animal
{
public:
	Owl()
	{
		std::cout << "Owl create" << "\n";
	}
	
	void Voice() override
	{
		std::cout << "Hoot!" << " \n";
	}

	virtual ~Owl()
	{
		std::cout << "Owl destroy" << "\n";
	}

};

int main()
{
	const int x = 3; 
	Animal* Animals[x]{ new Dog, new Cat, new Owl };

	

	for (int i = 0; i < x; ++i) // Вывод массива 
	{
		Animals[i]->Voice();
		delete Animals[i];
	}

	return 0;

}
