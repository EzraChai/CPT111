#include <iostream>
#include <iomanip>

/*
    Last month Joe purchased some stock in Acme Software, Inc. Here are the details of the
    purchase:
    • The number of shares that Joe purchased was 1,000.
    • When Joe purchased the stock, he paid $45.50 per share.
    • Joe paid his stockbroker a commission that amounted to 2% of the amount he paid for the
    stock.

    Two weeks later Joe sold the stock. Here are the details of the sale:
    • The number of shares that Joe sold was 1,000.
    • He sold the stock for $56.90 per share.
    • He paid his stockbroker another commission that amounted to 2% of the amount he
    received for the stock.

    Write a program that displays the following information:
    • The amount of money Joe paid for the stock.
    • The amount of commission Joe paid his broker when he bought the stock.
    • The amount that Joe sold the stock for.
    • The amount of commission Joe paid his broker when he sold the stock.
    • Display the amount of profit that Joe made after selling his stock and paying the
    two commissions to his broker. (If the amount of profit that your program displays is
    a negative number, then Joe lost money on the transaction.)
*/

int main(){

    int numShares = 1000;
    double pricePurchased  = 45.50;
    double priceSold = 56.90;
    double commissionPercentage = 0.02;

    double moneyPaidForStocks = numShares * pricePurchased;
    double moneyEarnForStocks = numShares * priceSold;

    double commisionPurchased = moneyPaidForStocks * commissionPercentage;
    double commisionSold = moneyEarnForStocks * commissionPercentage;

    double profit = moneyEarnForStocks - commisionSold - moneyPaidForStocks - commisionPurchased;

    std::cout << "The amount of money Joe paid for the stock.\n";
    std::cout <<"$" << std::fixed << std::setprecision(2) << moneyPaidForStocks << "\n\n";

    std::cout << "The amount of commission Joe paid his broker when he bought the stock.\n";
    std::cout <<"$" << std::fixed << std::setprecision(2) << commisionPurchased << "\n\n";
    
    std::cout << "The amount that Joe sold the stock for.\n";
    std::cout <<"$" << std::fixed << std::setprecision(2) << moneyEarnForStocks << "\n\n";

    std::cout << "The amount of commission Joe paid his broker when he sold the stock.\n";
    std::cout <<"$" << std::fixed << std::setprecision(2) << commisionSold << "\n\n";

    std::cout << "Amount of Profit: $" << profit << "\n";

    return 0;
}