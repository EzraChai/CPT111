#include <iostream>

/*
Write a program that lets the user input in the following order:
• A character
• An integer ‘n’ for the number of times this character has to be repeated
• Another character
• Another integer ‘m’ for the number of times the second character has to be
repeated
• Two integers for the number of rows and columns
The program should generate a pattern based on the input parameters. The pattern
is composed of the repetition of ‘n’ times the first character and ‘m’ times the
second character up until all rows have been filled with the specified number of
characters.
If, for example, ‘*’ must be repeated three times and ‘+’ twice in 4 rows of 21
column, the pattern looks like this:
***++***++***++***++*
**++***++***++***++**
*++***++***++***++***
++***++***++***++***+
*/

int main(){
    std::cout << "A character\nAn integer ‘n’ for the number of times this character has to be repeated\nAnother character\nAnother integer ‘m’ for the number of times the second character has to be repeated\nTwo integers for the number of rows and columns\n\nAll space in between.\n" ;
    char c, d;
    int n, m, rows, columns;
    std::cin >> c >> n >> d >> m >> rows >> columns;
    // c = '*';
    // d = '+';
    // n = 3;
    // m = 2;
    // rows = 4;
    // columns = 21;
    std::cout << "\n";

    for(int k = 0;;){
        for(int i = 0; i < n; i++){
            if( k >= rows * columns){
                return 0;
            }
            std::cout << c;
            k++;
            if ( k % columns == 0 ){
                std::cout << "\n";
            }
        }
        for(int j = 0; j < m; j++){
            if( k >= rows * columns){
                return 0;
            }
            std::cout << d;
            k++;
            if ( k % columns == 0){
                std::cout << "\n";
            }
        }
    }

    return 0;
}