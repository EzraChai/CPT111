#include <iostream>

/*
Pattern
Draw a pattern to look something like this:
Enter number of rows: 7
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
*/

int main(){

    int rows = 0;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "\n";

    for(int i = 0; i < rows; i++){
        for(int j = rows - i - 1; j > 0; j--){
            std::cout << " ";
        }
        for (int j = 0; j <= i; j++){
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    for(int i = 1; i < rows; i++){
        for(int j = 0; j <= i - 1; j++){
            std::cout << " ";
        }
        for(int j = rows - i; j > 0; j--){
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    return 0;
}