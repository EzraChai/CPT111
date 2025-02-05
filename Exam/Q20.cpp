#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream file;
    file.open("name.txt", ios::app);
    if (file)
    {
        file << "Hello";
    }

    return 0;
}