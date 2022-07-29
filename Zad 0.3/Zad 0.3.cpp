#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

bool predicate(int liczba)
{
    return (liczba >90 || liczba < -90);
}

//class WiekszeNiz
//{
//public:
//    bool operator()(int liczba)
//    {
//        return liczba > 90;
//    }
//};

int main()
{
    std::vector<int> numbers(201);
    std::iota(numbers.begin(), numbers.end(), -100);

    //std::for_each(numbers.begin(), numbers.end(), [](const int i) {std::cout << i << " "; });
    //std::cout << std::endl;

//a  
    std::cout << "A: sprawdz czy wszystkie liczby sa dodatnie."<< std::endl;

    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
    {
        if (*it < 0)
        {
            std::cout << "Odpowiedz: Nie wszytskie liczby sa dodatnie." << std::endl;
            break;
        }
        else 
        {
            ++it;
        }
    }
    std::cout << std::endl;
//c
    std::cout << "C: Usun z kontenera 0. " << std::endl;
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end();) 
    {
        if (*it == 0)
        {
            it = numbers.erase(it);
        }
        else
        {
            ++it;
        }
    }
    //std::for_each(numbers.begin(), numbers.end(), [](const int i) {std::cout << i << " "; });
    std::cout << std::endl;

//d
    std::cout << "D: sprawdz czy kontener nie zawiera wartosci 0. " << std::endl;

    std::vector<int>::iterator it;
    int x = 0;

    it = std::find(numbers.begin(), numbers.end(), x);
    if (it != numbers.end())
    {
        std::cout << "Odpowiedz: 0 znajduje sie w kontenerze" << std::endl;
    }
    else
    {
        std::cout << "Odpowiedz: Element 0 nie znajduje sie w kontenerze. " << std::endl;
    }
    std::cout << std::endl;

//e
    std::cout << "E: sprawdz czy kontener jest posortowany. " << std::endl;

    bool ascOrder = std::is_sorted(numbers.begin(), numbers.end());

    if (ascOrder == true)
    {
        std::cout << "Odpowiedz:  Elementy wektora sa posortowane." << std::endl;
    }
    else
    {
        std::cout << "Odpowiedz:  Elementy wektora nie sa posortowane." << std::endl;
    }
    std::cout << std::endl;

//f
    std::cout << "F: Skopiuj do drugiego wektora wszystkie liczby wieksze od 90 i mniejsze od - 90 " << std::endl;

    std::vector<int> numbers2(20);
    std::copy_if(numbers.begin(), numbers.end(), numbers2.begin(),[](int liczba){return predicate(liczba);});

    std::for_each(numbers2.begin(), numbers2.end(), [](const int i) {std::cout << i << " "; });
    std::cout << std::endl;
}

