#include <iostream>
using namespace std;

void getCases(int[][14], int[][14], int[][14]);
int calculateTotalConfirmedCases(int[][14]);
int calculateTotalRecoveredCases(int[][14]);
int calculateTotalDeathCases(int[][14]);

int main()
{

    // new confirmed
    // cases, new recovered cases, and new deaths
    int confirmed[7][14] = {0};
    int recovered[7][14] = {0};
    int deaths[7][14] = {0};

    getCases(confirmed, recovered, deaths);

    int totalConfirmedCases = calculateTotalConfirmedCases(confirmed);
    cout << "Total Confirmed Cases: " << totalConfirmedCases << endl;

    int totalRecoveredCases = calculateTotalRecoveredCases(recovered);
    cout << "Total Recovered Cases: " << totalRecoveredCases << endl;

    int totalDeathCases = calculateTotalDeathCases(deaths);
    cout << "Total Death Cases: " << totalDeathCases << endl;

    cout << "Total Active Cases: " << totalConfirmedCases - totalRecoveredCases - totalDeathCases << endl;

    return 0;
}

void getCases(int confirmed[][14], int recovered[][14], int deaths[][14])
{
    for (int i = 0; i < 7; i++)
    {
        cout << "Day " << (i + 1) << ": \n";
        for (int j = 0; j < 14; j++)
        {
            cout << "State " << (j + 1) << ": \n";
            cout << "New confirmed cases: ";
            cin >> confirmed[i][j];
            cout << "New recovered cases: ";
            cin >> recovered[i][j];
            cout << "New death cases: ";
            cin >> deaths[i][j];
        }
    }
}

int calculateTotalConfirmedCases(int confirmed[][14])
{
    int totalCases = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 14; j++)
        {
            totalCases += confirmed[i][j];
        }
    }
    return totalCases;
}
int calculateTotalRecoveredCases(int recovered[][14])
{
    int totalCases = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 14; j++)
        {
            totalCases += recovered[i][j];
        }
    }
    return totalCases;
}
int calculateTotalDeathCases(int deaths[][14])
{
    int totalCases = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 14; j++)
        {
            totalCases += deaths[i][j];
        }
    }
    return totalCases;
}