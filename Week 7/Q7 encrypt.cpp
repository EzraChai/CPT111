#include <iostream>
#include <fstream>

int main(){

    std::ifstream ifile;
    std::ofstream ofile;

    ifile.open("raw.txt");
    ofile.open("encrypt.txt");

    if(ifile.fail()){
        std::cout << "File not exists.";
        return 0;
    }

    char ch;
    while(!ifile.eof()){
        ifile.get(ch);
        ofile.put(ch + 12);
    }

    ifile.close();
    ofile.close();
    


    return 0;
}