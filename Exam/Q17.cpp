#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream myFile;
    string fileName = "text.txt";

    myFile.open(fileName, ios::in);
    string name;
    int T1, T2, PA1, PA2, total;

    if (myFile)
    {
        while (!myFile.eof())
        {
            getline(myFile, name, ' ');
            myFile >> T1;
            myFile >> T2;
            myFile >> PA1;
            myFile >> PA2;

            total = T1 + T2 + PA1 + PA2;
            cout << name << " " << total << endl;
        }
    }

    return 0;
}