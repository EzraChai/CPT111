#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// some codes missing here – Point A
bool check_multiply(int, int, int);
int random_number_gen();

int main()
{
    srand(time(NULL));

    int a = 0, b = 0, i;
    int press = 0, answer = 0, correct = 0;
    cout << "Welcome to Multiplication Tables Quiz" << endl;
    cout << "Press 1 if you are ready to start your quiz " << endl;
    cin >> press;
    if (press == 1)
    {
        for (i = 0; i < 10; i++)
        {
            a = random_number_gen();
            b = random_number_gen();
            cout << "Question " << i + 1 << endl;
            cout << "What is " << a << " X " << b << "? " << endl;
            cin >> answer;
            // some codes missing here – Point B
            if (check_multiply(a, b, answer))
            {
                cout << "Good job!" << endl;
                correct = correct + 1;
            }
            else
            {
                cout << "Sorry, you got it wrong!" << endl;
            }
        }
        cout << "You have finished answering all 10 questions" << endl;
        cout << "Your score is : " << correct << " out of 10 " << endl;
    }
    else
    {
        cout << "You are not ready? Bye bye";
    }
    return 0;
}

bool check_multiply(int a, int b, int ans)
{
    return a * b == ans;
}

int random_number_gen()
{
    return rand() % 10 + 1;
}