#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream file;
    // file.open("name.txt", ios::app);
    file.open("name.txt", ios::in);
    if (file)
    {
        // file << "Hello";
        file.seekg(0L, ios::end);
        int num = file.tellg();
        cout << num << endl;
    }

    return 0;
}