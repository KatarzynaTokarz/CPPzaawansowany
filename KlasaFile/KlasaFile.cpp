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

class MyFile
{
private:

    std::fstream file;

public:
    MyFile(std::string fileName)
    {
        file.open("C:\\Users\\kasia\\source\\CPPzaawansowaneZadania\\PracaDomowaPlik", std::ios::in | std::ios::out);
        if (file.good() == true)
        {
            std::cout << "Plik jest otwarty" << std::endl;
        }
        else std::cout << "Dostep do pliku zabroniony!" << std::endl;
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


int main()
{
    MyFile plik1("C:\\Users\\kasia\\source\\CPPzaawansowaneZadania\\PracaDomowaPlik");
    Pracownik pracownik1("Kasia", "Stoklosa", 1000);
    //plik1.save(pracownik1);
}

int Pracownik::generateNr()
{
    return 0;
}

//void MyFile::save(std::string line)
//{
//}

std::string MyFile::read()
{
    return std::string();
}
