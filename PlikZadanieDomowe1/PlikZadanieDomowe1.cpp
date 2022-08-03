//Zad 1.
//Program lista zakupów
//Stwórz program, który bêdzie od u¿ytkownika wczytywa³ nazwy produktów spo¿ywczych oraz iloœæ do kupienia(dla uproszczenia bez jednostki miary).
//- dla pewnoœci zamieñ du¿e litery na ma³e
//- gdy uzytkownik poraz drugi wprowadzi ten sam produkt, zapytaj siê go co chce zrobiæ :
//a) nadpisac(zamieniamy star¹ wartoœæ na now¹)
//b) zsumowac(sumujemy obie wartoœci)
//c) pominac(zostawiamy pierwsz¹ wartoœæ)
//Nastêpnie zapisz dane do pliku lista_zakupow.txt
//np :
//jablko 4
//ziemniaki 3
//kiszony ogorek 1
//smietana 1

#include <iostream>
#include <string>
#include <fstream>
#include <map>

std::map<std::string, int> listaZakupow;

void saveMapToFile(const std::string& fileName, const std::map<std::string, int>& listaZakupow)
{
    std::ofstream file(fileName);
    if (file.is_open()) 
    {
        std::cout << "Plik zostal otwarty: " << fileName << std::endl << std::endl;

        for (auto& kv : listaZakupow)
        {
            file << kv.first << " : " << kv.second << std::endl;
        }
        file.close();
    }
}
int main()
{ 
    std::cout << "Podaj nazwe produktu oraz ilosc, gdy chcesz zakonczyc tworzenie listy napisz: koniec" << std::endl << std::endl;
    std::map<std::string, int> listaZakupow;
    std::string nazwaProduktu;
    int ilosc;

    while (true)
    {
        std::cout << "Nazwa produktu" << std::endl;
        std::cin >> nazwaProduktu;

        if (nazwaProduktu != "koniec")
        {
            std::map<std::string, int>::iterator it = listaZakupow.find(nazwaProduktu);

            if (it != listaZakupow.end())
            {
                int wybor;

                std::cout << "Ten produkt juz wpisales." << std::endl;
                std::cout << "Jesli chcesz wybrac nowa ilosc wcisnij 1 a jesli chcesz dodac ilosc do poprzedniej wcisnij 2" << std::endl;
                std::cin >> wybor;

                if (wybor == 1)
                {
                    std::cout << std::endl; 
                    std::cout << "podaj nowa ilosc tego produktu"<<std::endl;
                    std::cin >> ilosc;
                    std::cout << std::endl;
                    listaZakupow[nazwaProduktu] = ilosc;
                }
                if (wybor == 2)
                {
                    std::cout << std::endl;
                    std::cout << "Podaj ile chcesz dodac do poprzedniej ilosci." << std::endl;
                    std::cin >> ilosc;
                    std::cout << std::endl;
                    listaZakupow[nazwaProduktu] = ilosc + it->second;
                }
            }
            else {
                std::cout << "Ilosc" << std::endl;
                std::cin >> ilosc;
                std::cout << std::endl;
                listaZakupow[nazwaProduktu] = ilosc;
            }
        }
        else
            break;

    }
    saveMapToFile("C:\\Users\\kasia\\source\\CPPzaawansowaneZadania\\lista.txt", listaZakupow);
}
