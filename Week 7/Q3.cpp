#include <iostream>

/*
Pattern
Draw a pattern to look something like this:
Please enter a number: 7
---------------------------------------------------
Pattern A                               Pattern B
---------------------------------------------------
+                                       *******
++                                       ******
+++                                       *****
++++                                       ****
+++++                                       ***
++++++                                       **
+++++++                                       *
*/

int main(){
    int line = 0;
    std::cout << "Please enter a number: ";
    std::cin >> line;
    std::cout << "---------------------------------------------------\n";
    std::cout << "Pattern A" << "                               " << "Pattern B\n";
    std::cout << "---------------------------------------------------\n";

    for(int i = 0; i < line; i++){
        for(int j = 0; j <= i; j++){
            std::cout << "+";
        }
        for (int k = 39 - i; k > 0; k--){
            std::cout << " ";
        }
        std::cout << "";
        for(int j = line - i; j > 0; j--){
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}