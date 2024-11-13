#include <iostream>

/*
Write a program that uses a loop to display the characters for the ASCII codes 0
through 127. Display 16 characters on each line.
*/

// int main(){
//     char c = 0;
//     for(int i = c; i < 128; i++){
//         std::cout << c << " ";
//         if(i % 16 == 0 && i != 0){
//             std::cout << "\n";
//         }
//         ++c;
//     }
// }
int main(){
    for(int i = 0; i < 128; i++){
        std::cout << char(i) << " ";
        if(i % 16 == 0 && i != 0){
            std::cout << "\n";
        }
    }
}