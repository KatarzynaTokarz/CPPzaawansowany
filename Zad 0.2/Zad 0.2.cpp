//Zad 0.2
//Stw�rz wektor 100 kolejnych liczb ca�kowitych z zakresu od 1 do 100
//a) Wypisz wszystkie liczby(for_each + unary function)
//b) Wypisz wszystkie liczby mniejsze od 0 (for_each + funktor)
//c) Nast�pnie policz ile jest liczb wi�kszych ni� 4 (count_if + predykat)
//d) Zr�b to samo dla a, b i c, ale wykorzystaj lambd�
//e) W zale�no�ci od zmiennej lokalnej dzielnik wypisz wszystkie liczby podzielne przez
//niego(for_each + lambda
//    f) Zlicz sum� wszystkich liczb parzystych i zapisz j� do zmiennej lokalnej int sum;
//

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> wektor(100);
    for (int i = 0; i < wektor.size(); ++i)
        std::cout << wektor[i] = i + 1;
}

