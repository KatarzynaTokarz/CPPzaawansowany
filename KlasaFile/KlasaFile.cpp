//Klasa File
//* RAII
//* c - tor przyjmujacy nazwê pliku, rzuca wyj¹tek gdy nie uda siê otwrzyc pliku
//* d - tor zamyka plik
//* Mile widziane funkjce szablonowe zapisuj¹ce / wczytj¹ce dowonly typ danych(wspieraj¹cy operator << >>)
//* Zak³adamy, ze 1 linia pliku 1 wartoœæ(dane nie mog¹ zwieraæ bia³ych znaków)
//* Zak³adamy, ¿e u¿ytkownik zna format pliku i bêdzie wczytywa³ ró¿ne typy wed³ug znanej sobie kolejnoœci
//np :
//string
//int
//double
//int
//* Dodaj klase Pracownik(imie, nazwisko, losowy numer pracownika, wysokoœæ pensji)
//* Numer pracownika ma siê generowaæ losowo podczas tworznia nowego pracownika, dla u³atwienia mog¹ siê powtarzaæ
//* warto dodaæ operator << i >>
//*U¿yj klasy File do zapisania danych 10 pracowników
//* Wczytaj ze pomoc¹ tej klasy te dane do wektora a nastêpnie wypisz pracowników posortowanych wed³ug wysokoœci pensji

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



