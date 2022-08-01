//a) Wygeneruj 100000 losowych liczb z przdzia³u - 100000 100000
//b) zapisz je do pliku
//c) nastepnie wczytaj je z tego pliku do vectora
//d) wypiszcie 100 pierwszych wczytanych liczb(uzycjie std::advance)
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <string>

std::vector<long> numbers;
std::random_device r;
std::default_random_engine defEngine(r());
std::uniform_int_distribution<long> intDistro(-100000, 100000);


int main()
{   
        for (long i = 1; i <= 100000; i++)
        {
            numbers.push_back(intDistro(defEngine));
        }
        std::string fileNameToWrite("C:\\Users\\kasia\\source\\CPPzaawansowaneZadania\\FileZad\\PlikNowy.cpp");
        std::ofstream fileToWrite(fileNameToWrite, std::ios::out | std::ios::trunc);

        if (fileToWrite.is_open()) 
        {
            for (int i = 0; i <= 10; ++i)
            {
                if (fileToWrite.good())
                {
                    fileToWrite << i << "\n"; 
                }
            }
            fileToWrite.close();
        }
        else
        {
            std::cout << "Nie mogê otworzyæ pliku do zapisu";
            return -1;
        }
    
        std::ifstream fileToWrite(fileNameToWrite);
        if (fileToWrite.is_open())
        {
            std::cout << "Hurra wczyta³em plik " << fileNameToWrite << std::endl << std::endl;
        }
        else
        {
            std::cout << "Nie mogê otworzyæ pliku :(";
            return -1;
        }
        while (fileToWrite.good() && !fileToWrite.eof())
        {
            std::string str;
            std::getline(fileToWrite, str);
            std::cout << str << std::endl;
        }
        fileToWrite.close();
}