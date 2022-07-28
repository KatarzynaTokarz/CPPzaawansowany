//Zad 0.2
//Stwórz wektor 100 kolejnych liczb ca³kowitych z zakresu od 1 do 100
//a) Wypisz wszystkie liczby(for_each + unary function)
//b) Wypisz wszystkie liczby mniejsze od 0 (for_each + funktor)
//c) Nastêpnie policz ile jest liczb wiêkszych ni¿ 4 (count_if + predykat)
//d) Zrób to samo dla a, b i c, ale wykorzystaj lambdê
//e) W zale¿noœci od zmiennej lokalnej dzielnik wypisz wszystkie liczby podzielne przez
//niego(for_each + lambda
//    f) Zlicz sumê wszystkich liczb parzystych i zapisz j¹ do zmiennej lokalnej int sum;
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> wektor(100);
    for (int i = 0; i < wektor.size(); ++i)
        wektor[i] = i + 1;

    std::for_each(wektor.begin(), wektor.end(),[](int a) { std::cout << a << " " << std::endl; });

}

