//Utwórz wektor 100 losowych liczb z przedziału 0 10, następnie:
//a) wypisz ten wektor
//b) zlicz ilość wystąpień liczby 5
//c) Wylicz średnia wartość
//d) Zrób to samo dla innego rozkładu wartości
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <numeric>


int main()
{
    std::vector<int> numbers;
    std::random_device r; 
    std::default_random_engine defEngine(r());
    std::uniform_int_distribution<int> intDistro(0, 10); 
    for (int i = 1; i <= 100; i++)
    {
        numbers.push_back(intDistro(defEngine)); 
    }
    for (const int n : numbers)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Number of times 5 appears : "
        << std::count(numbers.begin(), numbers.end(), 5);

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    float srednia = static_cast<double>(sum / numbers.size());

    std::cout << std::endl;

    std::cout << "Srednia wynosi: " << srednia<< std::endl;

    return 0;
}