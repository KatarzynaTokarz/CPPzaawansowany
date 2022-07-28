//Zad 0.1 Lambda
//Napisz zwyk�� funkcj� oraz lambd�(przypisz j� do zmiennej) Nast�pnie je wywo�aj :
//a) funkcj� wypisuj�ca �Hello World�
//b) Funkcja dodaj�ca dwie liczby do siebie(i zwracaj�ca j�)

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
	std::cout << std::endl;
	std::cout << "suma: " << add(2, 3) << std::endl;
	std::cout << "suma: "<< lambdaAdd(1, 2) << std::endl;
}

