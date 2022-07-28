//Zad 0.2
//Stw�rz wektor 100 kolejnych liczb ca�kowitych z zakresu od 1 do 100
//a) Wypisz wszystkie liczby(for_each + unary function)
//b) Wypisz wszystkie liczby mniejsze od 50 (for_each + funktor)
//c) Nast�pnie policz ile jest liczb wi�kszych ni� 4 (count_if + predykat)
//d) Zr�b to samo dla a, b i c, ale wykorzystaj lambd�
//e) W zale�no�ci od zmiennej lokalnej dzielnik wypisz wszystkie liczby podzielne przez
//niego(for_each + lambda
//    f) Zlicz sum� wszystkich liczb parzystych i zapisz j� do zmiennej lokalnej int sum;
//

#include <iostream>
#include <vector>
#include <algorithm>

bool isEven(int i)
{
    if (i % 2 == 0)
        return true;
    else
        return false;
}
struct checkNumbers
{
    void operator() (int a)
    {
        if (a < 50)
        {
            std::cout << a << " ";

        }
    }
};


int main()
{
    std::vector<int> wektor(100);

//a
    for (int i = 0; i < wektor.size(); ++i)
        wektor[i] = i + 1;

    std::for_each(wektor.begin(), wektor.end(),[](int a) { std::cout << a << " " << std::endl; });

    //std::for_each(wektor.begin(), wektor.end(), [](int a) { checkNumbers(); });

    ////std::count_if(wektor.begin(), wektor.end(), UnaryPredicate p);

//f
        int nrEven = std::count_if(wektor.begin(), wektor.end(), isEven);

        std::cout << "Total no of even numbers is: " << nrEven << std::endl;

   
}

