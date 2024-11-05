#include <iostream>

int main(){

    std::string primaryColor1,primaryColor2;

    std::cout << "First primary color (red, blue, yellow): ";
    std::getline(std::cin, primaryColor1);

    std::cout << "Second primary color (red, blue, yellow): ";
    std::getline(std::cin, primaryColor2);

    if(primaryColor1 == "red"){
        if(primaryColor2 == "red"){
            std::cout << "Secondary color: " << "red";
        }else if(primaryColor2 == "blue"){
            std::cout << "Secondary color: " << "purple";
        }else if(primaryColor2 == "yellow"){
            std::cout << "Secondary color: " << "orange";
        }else {
            std::cout << "Not a valid color. Please try again later.";
        }
    }else if(primaryColor1 == "blue"){
        if(primaryColor2 == "red"){
            std::cout << "Secondary color: " << "purple";
        }else if(primaryColor2 == "blue"){
            std::cout << "Secondary color: " << "blue";
        }else if(primaryColor2 == "yellow"){
            std::cout << "Secondary color: " << "green";
        }else {
            std::cout << "Not a valid color. Please try again later.";
        }
    }else if(primaryColor1 == "yellow"){
        if(primaryColor2 == "red"){
            std::cout << "Secondary color: " << "orange";
        }else if(primaryColor2 == "blue"){
            std::cout << "Secondary color: " << "green";
        }else if(primaryColor2 == "yellow"){
            std::cout << "Secondary color: " << "yellow";
        }else {
            std::cout << "Not a valid color. Please try again later.";
        }
    }else {
        std::cout << "Not a valid color. Please try again later.";
    }

    return 0; 
}