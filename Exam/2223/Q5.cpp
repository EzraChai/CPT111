#include <iostream>
using namespace std;

/*
You are given the task of writing an automated grading tool for a math test.
The answers to all test questions are real numbers (e.g. 0.125, 32.531).
There are 20 questions in total. The grading tool will first allow the lecturer to
enter all of the correct answers and store them in an array called solutions.
Then, 10 students will enter all of their answers to all 20 questions, which
should be stored in a 2D array called studentAnswer. Then, the tool will
calculate the scores for each student and store them in a new array called
studentScore. The incomplete program is given below.
*/

void enterSolution(double[]);
void enterAnswer(double[]);
void computeScore(const double[][20], const double[], double[]);

int main()
{

    double solutions[20];

    enterSolution(solutions);

    double studentAnswer[10][20];
    for (int i = 0; i < 10; i++)
    {
        double ans[20];
        cout << i + 1 << " Student's Answer: " << endl;
        enterAnswer(ans);
        for (int j = 0; j < 20; j++)
        {
            studentAnswer[i][j] = ans[j];
        }
    }

    double scores[10];
    computeScore(studentAnswer, solutions, scores);

    for (int i = 0; i < 10; i++)
        cout << scores[i] << endl;

    return 0;
}

void enterSolution(double arr[])
{
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
}

void enterAnswer(double arr[])
{
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
}

void computeScore(const double studentAns[][20], const double answer[], double scores[])
{
    for (int i = 0; i < 10; i++)
    {
        double marks;
        for (int j = 0; j < 20; j++)
        {
            if (studentAns[i][j] == answer[j])
                marks++;
        }
        scores[i] = marks;
    }
}