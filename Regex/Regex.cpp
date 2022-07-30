#include <iostream>
#include <regex>


std::string readEmail()
{
    std::string email("");
    std::cout << "podaj email" << std::endl;
    std::cin >> email;
    return email;
}
bool checkEmail(const std::string& email)
{
    std::regex emailRegex("^[a-z0-9_.]{3,}@[a-z0-9_]+.[a-z]{2,3}$");
    return std::regex_match(email, emailRegex);
}

int main()
{
    std::string mail = readEmail();
    //std::string adresMailowy;
    //std::cout << "podaj email" << std::endl;
    //std::cin >> adresMailowy;
    std::cout << mail << " wynik: " << checkEmail(mail) << std::endl;
}