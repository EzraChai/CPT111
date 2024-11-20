#include <iostream>
#include <fstream>
#include <iomanip>

/*
Three employees in a company are up for a special pay increase. You are given a file,
say Ch3_Ex6Data.txt, with the following data:
Miller Andrew 65789.87 5
Green Sheila 75892.56 6
Sethi Amit 74900.50 6.1
Each input line consists of an employee’s last name, first name, current salary, and
percent pay increase. For example, in the first input line, the last name of the
employee is Miller, the firstname is Andrew, the current salary is 65789.87,
and the pay increase is 5%. Write a program that reads data from the specified file
and stores the output in the file Ch3_Ex6Output.dat. For each employee, the
data must be output in the following form: firstName lastName
updatedSalary. Format the output of decimal numbers to two decimal places.
*/

int main(){
    
    std::ifstream ifile;
    std::ofstream ofile;



    ifile.open("Ch3_Ex6Data.txt");

    ofile.open("Ch3_Ex6Output.dat");

    if(ifile.fail()){
        std::cout << "File not existed." << std::endl;
        return 0;
    }

    std::string lastName, firstName;
    double currentSalary, percentPayIncrease;
    for(int i = 0; i < 3; i++){
        ifile >> lastName >> firstName >> currentSalary >> percentPayIncrease;
        ofile << firstName << " " << lastName << " " << std::fixed << std::setprecision(2) << currentSalary * (1+(percentPayIncrease / 100)) << "\n";
    }

    ifile.close();
    ofile.close();

    return 0;
}