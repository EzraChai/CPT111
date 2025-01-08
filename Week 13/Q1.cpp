#include <iostream>

using namespace std;

int main()
{
    const int NUM_COUNTRIES = 12;
    string countries[NUM_COUNTRIES];
    int M40[NUM_COUNTRIES];
    int B40[NUM_COUNTRIES];
    int T20[NUM_COUNTRIES];

    for (int i = 0; i < NUM_COUNTRIES; i++)
    {
        cout << "Country: ";
        cin >> countries[i];
        cout << "B40: ";
        cin >> B40[i];
        cout << "M40: ";
        cin >> M40[i];
        cout << "T20: ";
        cin >> T20[i];
    }
    for (int i = 0; i < NUM_COUNTRIES; i++)
    {
        cout << "Country: " << countries[i] << endl;
        cout << "M40: " << M40[i] << endl;
        cout << "B40: " << B40[i] << endl;
        cout << "T20: " << T20[i] << endl;
    }

    // const int NUM_OF_CATEGORIES = 4;
    // const int NUM_OF_COUNTRIES = 2;
    // int categories[NUM_OF_CATEGORIES * NUM_OF_COUNTRIES];
    // string countries[NUM_OF_COUNTRIES];

    // int j = 0;
    // for (int i = 0; i < NUM_OF_COUNTRIES; i++)
    // {
    //     j = NUM_OF_CATEGORIES * i;
    //     string country;
    //     cout << "Country: ";
    //     cin >> countries[i];
    //     cout << "B40: ";
    //     cin >> categories[j];
    //     cout << "M40: ";
    //     cin >> categories[j + 1];
    //     cout << "T20: ";
    //     cin >> categories[j + 2];
    //     cout << endl;
    // }

    // j = 0;
    // for (int i = 0; i < NUM_OF_COUNTRIES; i++)
    // {
    //     j = NUM_OF_CATEGORIES * i;
    //     cout << "Country: " << countries[i] << endl;
    //     cout << "B40: " << categories[j] << endl;
    //     cout << "M40: " << categories[j + 1] << endl;
    //     cout << "T20: " << categories[j + 2] << endl;
    // }

    const int NUM_OF_CATEGORIES = 4;
    const int NUM_OF_COUNTRIES = 2;
    string populations[NUM_OF_COUNTRIES][NUM_OF_CATEGORIES];
    for (int i = 0; i < NUM_OF_COUNTRIES; i++)
    {
        cout << "Country: ";
        cin >> populations[i][0];
        cout << "B40: ";
        cin >> populations[i][1];
        cout << "M40: ";
        cin >> populations[i][2];
        cout << "T20: ";
        cin >> populations[i][3];
        cout << endl;
    }

    for (int i = 0; i < NUM_OF_COUNTRIES; i++)
    {
        cout << "Country: " << populations[i][0] << endl;
        cout << "B40: " << populations[i][1] << endl;
        cout << "M40: " << populations[i][2] << endl;
        cout << "T20: " << populations[i][3] << endl;
    }
}