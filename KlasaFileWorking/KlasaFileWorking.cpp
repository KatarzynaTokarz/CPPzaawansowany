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