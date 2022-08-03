//Klasa File
//* RAII
//* c - tor przyjmujacy nazw� pliku, rzuca wyj�tek gdy nie uda si� otwrzyc pliku
//* d - tor zamyka plik
//* Mile widziane funkjce szablonowe zapisuj�ce / wczytj�ce dowonly typ danych(wspieraj�cy operator << >>)
//* Zak�adamy, ze 1 linia pliku 1 warto��(dane nie mog� zwiera� bia�ych znak�w)
//* Zak�adamy, �e u�ytkownik zna format pliku i b�dzie wczytywa� r�ne typy wed�ug znanej sobie kolejno�ci
//np :
//string
//int
//double
//int
//* Dodaj klase Pracownik(imie, nazwisko, losowy numer pracownika, wysoko�� pensji)
//* Numer pracownika ma si� generowa� losowo podczas tworznia nowego pracownika, dla u�atwienia mog� si� powtarza�
//* warto doda� operator << i >>
//*U�yj klasy File do zapisania danych 10 pracownik�w
//* Wczytaj ze pomoc� tej klasy te dane do wektora a nast�pnie wypisz pracownik�w posortowanych wed�ug wysoko�ci pensji

#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <algorithm>
#include <numeric>

class MyFile
{
private:

    std::fstream file;

public:
    MyFile(std::string filePath)
    {
        //std::fstream file(filePath, std::ios::out | std::ios::trunc);
        //file.open(filePath, std::ios::in | std::ios::out);
        //if (file.good() == true)
        //{
        //    std::cout << "Plik jest otwarty" << std::endl;
        //}
        //else std::cout << "Dostep do pliku zabroniony!" << std::endl;
        std::string fileNameWithPath("C:\\Users\\kasia\\source\\CPPzaawansowaneZadania\\PracaDomowaPlik1");
        std::string fileName("Pliki.cpp");
        std::ifstream file(fileNameWithPath);

        if (file.is_open())
        {
            std::cout << "plik open " << std::endl;
        }
        else
        {
            std::cout << "problem";
        }

    }
    ~MyFile()
    {
        file.close();
    }
    //void save(Pracownik pracownik);
    std::string read();
};

class Pracownik
{
private:
    std::string _imie;
    std::string _nazwisko;
    int _numerPracownika;
    float _pensja;
    int generateNr();

public:
    Pracownik(std::string imie, std::string nazwisko, float pensja)
    {
        _imie = imie;
        _nazwisko = nazwisko;
        _pensja = pensja;
        _numerPracownika = generateNr();
    }
};

int Pracownik::generateNr()
{
    std::random_device nr;
    std::mt19937 gen(nr());
    std::uniform_int_distribution<int>dist(1, 100);

    return dist(gen);
}


int main()
{
    MyFile plik1("C:\\Users\\kasia\\source\\CPPzaawansowaneZadania\\PracaDomowaPlik1");
    Pracownik pracownik1("Kasia", "Stoklosa", 1000);
    //plik1.save(pracownik1);
}



