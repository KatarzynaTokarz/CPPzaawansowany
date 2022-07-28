//Zad 0.1 Lambda
//Napisz zwyk³¹ funkcj¹ oraz lambdê(przypisz j¹ do zmiennej) Nastêpnie je wywo³aj :
//a) funkcj¹ wypisuj¹ca “Hello World”
//b) Funkcja dodaj¹ca dwie liczby do siebie(i zwracaj¹ca j¹)

#include <iostream>

void greet()
{
	std::cout << "Hello World" << std::endl;
}
int add(int x, int y)
{
	return x + y;
}

int main()
{
	greet();
	auto lambdaGreet = []() { std::cout << "Hello world"; };
	auto lambdaAdd = [](int x, int y) { return x + y; };
	lambdaGreet();
	lambdaAdd(1,2);
}

