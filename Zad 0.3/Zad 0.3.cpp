//Utwórz wektor liczb ca³kowitych od - 100 do 100.
//a) Nastêpnie sprawdŸ czy wszystkie liczby s¹ dodatnie.
//b) Czy istnieje jakakolwiek liczba podzielna przez 3, 5 i 30.
//c) Usuñ z kontenera 0.
//d) Nastêpnie sprawdŸ czy kontener nie zawiera wartoœci 0.
//e) SprawdŸ czy kontener jest posortowany
//f) Skopiuj do drugiego wektora wszystkie liczby wiêksze od 90 i mniejsze od - 90
//g) Skopiuj do innego wektora 10 kolejnych liczb zaczynaj¹c od 78

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

//bool zakres(int a)
//{
//    return (a > 90);
//}

int main()
{
	std::vector<int> numbers(201); //c-tor 4 z std::vector //towrzy 100 elementowy wektor samych 0 
	std::iota(numbers.begin(), numbers.end(), -100);

	//std::for_each(numbers.begin(), numbers.end(), [](const int i) {std::cout << i << std::endl; });
	//std::cout << std::endl;

////a  
//    std::cout << "A: sprawdz czy wszystkie liczby sa dodatnie. " << std::endl;
//
//    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ) {
//        if (*it < 0) {
//            std::cout << "Nie wszytskie liczby sa dodatnie";
//            break;
//        }
//        else {
//            ++it;
//        }
//    }
//
//    //std::cout << std::endl;
//
//    std::cout << "C: Usun z kontenera 0. " << std::endl;
//
////c
//    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ) {
//        if (*it == 0) {
//            it = numbers.erase(it);
//        }
//        else {
//            ++it;
//        }
//    }
//    //std::for_each(numbers.begin(), numbers.end(), [](const int i) {std::cout << i << std::endl; });
//    std::cout << std::endl;
//
////d
//    std::cout << "D: sprawdz czy kontener nie zawiera wartosci 0. " << std::endl;
//
//    std::vector<int>::iterator it;
//    int x = 0;
//
//    it = std::find(numbers.begin(), numbers.end(), x);
//    if (it != numbers.end())
//    {
//        std::cout << "Odpowiedz: 0 znajduje sie w kontenerze" << std::endl;
//    }
//    else
//        std::cout << "Odpowiedz: Element 0 nie znajduje siê w kontenerze. " << std::endl;
//
//    std::cout << std::endl;
//
////e
//
//    std::cout << "E: sprawdz czy kontener jest posortowany. " << std::endl;
//
//    bool ascOrder = std::is_sorted(numbers.begin(), numbers.end());
//
//    if (ascOrder == true)
//    {
//        std::cout << "Odpowiedz:  Elementy wektora sa posortowane." << std::endl;
//    }
//    else
//    {
//        std::cout << "Odpowiedz:  Elementy wektora nie sa posortowane." << std::endl;
//    }
//
//f

    std::vector<int> numbers2;
    std::copy(numbers2.begin(), numbers2.end(),std::back_inserter(numbers2));

    std::cout << "numbers2: ";

    std::copy(numbers2.begin(), numbers2.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;



}

