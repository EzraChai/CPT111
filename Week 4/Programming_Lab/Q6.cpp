#include <iostream>

int main(){

    std::string primaryColor1,primaryColor2, secondaryColor;

    std::cout << "First primary color (red, blue, yellow): ";
    std::getline(std::cin, primaryColor1);

    std::cout << "Second primary color (red, blue, yellow): ";
    std::getline(std::cin, primaryColor2);

    if(primaryColor1 == "red"){
        if(primaryColor2 == "red"){
            secondaryColor = "red";
        }else if(primaryColor2 == "blue"){
            secondaryColor = "purple";
        }else if(primaryColor2 == "yellow"){
            secondaryColor = "orange";
        }else {
            std::cout << "Not a valid color. Please try again later.";
            return 0;
        }
    }else if(primaryColor1 == "blue"){
        if(primaryColor2 == "red"){
            secondaryColor = "purple";
        }else if(primaryColor2 == "blue"){
            secondaryColor = "blue";
        }else if(primaryColor2 == "yellow"){
            secondaryColor = "green";
        }else {
            std::cout << "Not a valid color. Please try again later.";
            return 0;
        }
    }else if(primaryColor1 == "yellow"){
        if(primaryColor2 == "red"){
            secondaryColor = "orange";
        }else if(primaryColor2 == "blue"){
            secondaryColor = "green";
        }else if(primaryColor2 == "yellow"){
            secondaryColor = "yellow";
        }else {
            std::cout << "Not a valid color. Please try again later.";
            return 0;
        }
    }else {
        std::cout << "Not a valid color. Please try again later.";
    }
    std::cout << "Secondary color: " << secondaryColor;

    return 0; 
}