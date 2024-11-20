#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

/*
9. Consider the following incomplete C++ program:
#include <iostream>
int main()
{
...
}
a. Write a statement that includes the header files fstream, string, and iomanip in this
program. - done

b. Write statements that declare inFile to be an ifstream variable and outFile to be an
ofstream variable. - done

c. The program will read data from the file inData.txt and write output to the file
outData.txt.Write statements to open both of these files, associate inFile with
inData.txt, and associate outFile with outData.txt. - done

d. Suppose that the file inData.txt contains the following data:
Giselle Robinson Accounting
5600 5 30
450 9
75 1.5
The first line contains a person’s first name, last name, and the department the
person works in. In the second line, the first number represents the monthly gross
salary, the bonus (as a percent), and the taxes (as a percent). The third line contains
the distance traveled and the traveling time. The fourth line contains the number of
coffee cups sold and the cost of each coffee cup. Write statements so that after the
program executes, the contents of the file outData.txt are as shown below. If
necessary, declare additional variables. Your statements should be general enough
so that if the content of the input file changes and the program is run again (without
editing and recompiling), it outputs the appropriate results.
Name: Giselle Robinson, Department: Accounting
Monthly Gross Salary: $5600.00, Monthly Bonus: 5.00%,
Taxes: 30.00%
Paycheck: $4116.00
Distance Traveled: 450.00 miles, Traveling Time: 9.00
hours
Average Speed: 50.00 miles per hour
Number of Coffee Cups Sold: 75, Cost: $1.50 per cup
Sales Amount = $112.50

e. Write statements that close the input and output files.

f. Write a C++ program that tests the statements in parts a through e.
*/

int main(){

    std::ifstream inFile;
    std::ofstream outFile;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    std::string firstName, lastName, department;
    double monthlyGrossSalary, bonus, taxes;
    double distanceTraveled, travelingTime;
    int numberOfCoffeeCupsSold;
    double costOfEachCoffeeCup;

    inFile >> firstName >> lastName >> department;
    inFile >> monthlyGrossSalary >> bonus >> taxes;
    inFile >> distanceTraveled >> travelingTime;
    inFile >> numberOfCoffeeCupsSold >> costOfEachCoffeeCup;

    outFile << std::fixed << std::setprecision(2);
    outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << "\n";
    outFile << "Monthly Gross Salary: $" << monthlyGrossSalary << ", Monthly Bonus: " << bonus << "%,\n";
    outFile << "Taxes: " << taxes << "%\n";
    outFile << "Paycheck: $" << monthlyGrossSalary * (1 + (bonus / 100.0)) * ((100 - taxes) / 100.0) << "\n";
    outFile << "Distance Traveled: " << distanceTraveled << " miles, Traveling Time: " << travelingTime << "\n";
    outFile << "Average Speed: " << distanceTraveled / static_cast<double>(travelingTime) << " miles per hour\n";
    outFile << "Number of Coffee Cups Sold: " << numberOfCoffeeCupsSold << ", Cost: $" << costOfEachCoffeeCup<< " per cup\n";
    outFile << "Sales Amount = $" << numberOfCoffeeCupsSold * costOfEachCoffeeCup << "\n";

    outFile.close();
    inFile.close();

    return 0;
}