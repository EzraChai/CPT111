#include <iostream>

int main(){

    double rec1Length, rec1Width, rec2Length, rec2Width;
    std::cout << "Width of the 1 rectangle: (m) ";
    std::cin >> rec1Length;
    std::cout << "Height of the 1 rectangle: (m) ";
    std::cin >> rec1Width;
    std::cout << "Width of the 2 rectangle: (m) ";
    std::cin >> rec2Length;
    std::cout << "Height of the 2 rectangle: (m) ";
    std::cin >> rec2Width;

    double areaRec1 = rec1Length * rec1Width;
    double areaRec2 = rec2Length * rec2Width;

    if (areaRec1 > areaRec2){
        std::cout << "The 1 rectangle has a larger area which is " << areaRec1 << "m^2 compare with " << areaRec2 << "m^2.";
    }else if (areaRec2 > areaRec1){
        std::cout << "The 2 rectangle has a larger area which is " << areaRec2 << "m^2 compare with " << areaRec1 << "m^2.";
    }else {
        std::cout << "Both of the rectangle have the same area which is " << areaRec1 << "m^2.";
    }

    return 0;
}