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
        std::string fileNameWithPath("C:\\Users\\kasia\\source\\CPPzaawansowaneZadania\\PracaDomowaPlik1");
        std::string fileName("Pliki.cpp");
        std::ifstream file(fileNameWithPath);

        if (file.is_open())
        {
            std::cout << "plik open " << fileName << std::endl << std::endl;
        }
        else
        {
            std::cout << "problem";
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

};
