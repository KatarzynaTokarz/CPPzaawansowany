//Zad 1.
//Program lista zakup�w
//Stw�rz program, kt�ry b�dzie od u�ytkownika wczytywa� nazwy produkt�w spo�ywczych oraz ilo�� do kupienia(dla uproszczenia bez jednostki miary).
//- dla pewno�ci zamie� du�e litery na ma�e
//- gdy uzytkownik poraz drugi wprowadzi ten sam produkt, zapytaj si� go co chce zrobi� :
//a) nadpisac(zamieniamy star� warto�� na now�)
//b) zsumowac(sumujemy obie warto�ci)
//c) pominac(zostawiamy pierwsz� warto��)
//Nast�pnie zapisz dane do pliku lista_zakupow.txt
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
                    std::cin >> ilosc;
                    std::cout << std::endl;
                    listaZakupow[nazwaProduktu] = ilosc;
                }
                if (wybor == 2)
                {
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
