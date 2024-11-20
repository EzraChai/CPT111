#include <iostream>
#include <fstream>
#include <iomanip>

/*
The manager of a football stadium wants you to write a program that calculates the
total ticket sales after each game. There are four types of tickets—box, sideline,
premium, and general admission. After each game, data is stored in a file in the
following form:
ticketPrice numberOfTicketsSold
...
Sample data are shown below:
250 5750
100 28000
50 35750
25 18750
The first line indicates that the ticket price is $250 and that 5750 tickets were sold
at that price. Output the number of tickets sold and the total sale amount. Format
your output with two decimal places.
*/

int main(){

    std::ifstream file;

    file.open("ticket.txt");

    if(file.fail()){
        std::cout << "File not exists.";
        return 0;
    }

    int ticketPrice, numberOfTicketsSold;
    double totalTicketSold = 0, totalSaleAmount = 0;
    while(!file.eof()){
        file >> ticketPrice >> numberOfTicketsSold;
        totalTicketSold += numberOfTicketsSold;
        totalSaleAmount += ticketPrice * numberOfTicketsSold;
    }

    std::cout << "Total Ticket Sold: " << std::fixed << std::setprecision(2) << totalTicketSold << "\nTotal Sale Amount: " << std::fixed << std::setprecision(2) << totalSaleAmount;

    return 0;
}