#include <iostream>
using namespace std;

/*
Overloaded Hospital - Write a program that computes and displays the charges for a patient’s hospital
stay. First, the program should ask if the patient was admitted as an in-patient or an out-patient. If the
patient was an in-patient, the following data should be entered:
• The number of days spent in the hospital
• The daily rate
• Hospital medication charges
• Charges for hospital services (lab tests, etc.)
The program should ask for the following data if the patient was an out-patient:
• Charges for hospital services (lab tests, etc.)
• Hospital medication charges
The program should use two overloaded functions to calculate the total charges. One of the functions
should accept arguments for the in-patient data, while the other function accepts arguments for out-
patient information. Both functions should return the total charges.
Input Validation: Do not accept negative numbers for any data.
*/

int patientType();
double calculateTotalCharges(double, double, int, double);
double calculateTotalCharges(double, double);

int main()
{

    int patientTypeNum = patientType();

    double totalCharges = 0.0;
    switch (patientTypeNum)
    {
    case 1:
        int numDaysSpent;
        cout << "The number of days spent in the hospital: ";
        cin >> numDaysSpent;

        while (numDaysSpent < 0)
        {
            cout << "Please try again.";
            cout << "The number of days spent in the hospital: ";
            cin >> numDaysSpent;
        }

        double dailyRate;
        cout << "The daily rate: RM";
        cin >> dailyRate;

        while (dailyRate < 0)
        {
            cout << "Please try again.";
            cout << "The daily rate: RM";
            cin >> dailyRate;
        }

        double charges;
        cout << "Hospital medication charges: RM";
        cin >> charges;

        while (charges < 0)
        {
            cout << "Please try again.";
            cout << "Hospital medication charges: RM";
            cin >> charges;
        }

        double medicationCharges;
        cout << "Charges for hospital services (lab tests, etc.): RM";
        cin >> medicationCharges;

        while (medicationCharges < 0)
        {
            cout << "Please try again.";
            cout << "Charges for hospital services (lab tests, etc.): RM";
            cin >> medicationCharges;
        }

        totalCharges = calculateTotalCharges(charges, medicationCharges, numDaysSpent, dailyRate);
        break;
    case 2:

        double charges2;
        cout << "Hospital medication charges: RM";
        cin >> charges2;

        while (charges2 < 0)
        {
            cout << "Please try again.";
            cout << "Hospital medication charges: RM";
            cin >> charges2;
        }

        double medicationCharges2;
        cout << "Charges for hospital services (lab tests, etc.): RM";
        cin >> medicationCharges;

        while (medicationCharges2 < 0)
        {
            cout << "Please try again.";
            cout << "Charges for hospital services (lab tests, etc.): RM";
            cin >> medicationCharges2;
        }
        totalCharges = calculateTotalCharges(charges2, medicationCharges2);
        break;
    }

    cout << "Total Charges: RM" << totalCharges << endl;

    return 0;
}

int patientType()
{
    int choise;
    cout << "What type of patient you are? \n1 - In-patient\n2 - Out-patient\n";
    cout << "Please enter either [1 or 2]: ";
    cin >> choise;

    while (choise != 1 && choise != 2)
    {
        cout << "Please enter only 1 or 2.\n";
        cout << "What type of patient you are? \n1 - In-patient\n2 - Out-patient\n";
        cout << "Please enter either [1 or 2]: ";
        cin >> choise;
    }
    return choise;
}

double calculateTotalCharges(double charges, double medicationCharges)
{
    return charges + medicationCharges;
}

double calculateTotalCharges(double charges, double medicationCharges, int numDaysSpent, double dailyRate)
{
    return charges + medicationCharges + numDaysSpent * dailyRate;
}