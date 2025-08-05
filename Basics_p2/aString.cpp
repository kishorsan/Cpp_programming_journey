#include <iostream>

int main(){
    std::string name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12){
        std::cout << "Your name can't be more than 12 characters of length" << '\n';
    }else{
        std::cout << "Welcome " << name << '\n';
    }

    if (name.empty()){
        std::cout << "You didn't enter your name" << '\n';
    }else{
        std::cout << "Welcome " << name << '\n';
    }
    std:: string aname = name;

    aname.clear();

    std::cout << "Hello " << aname << '\n';

    name.append("@gmail.com");

    std::cout << "Your user name is now " << name << '\n';

    std::cout << name.at(0) << '\n';

    name.insert(0,"@");

    std::cout << "Hello " << name << '\n';

    std::cout << name.find(' ');

    name.erase(0,2);

    std::cout << "Yoo " << name << '\n';
    return 0;
}