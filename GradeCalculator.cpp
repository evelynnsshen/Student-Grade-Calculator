#include "GradeCalculator.h"
#include <iostream>
using namespace std;


GradeCalc::GradeCalc()
{
    finalGrade = 0;
}


Homework::Homework()
{
    for (int i = 0; i < 10; i++)
    {
        HWScores[i] = 0;
    }
}

void Homework::AskGrades()
{
    cout << "What are your homework grades?" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> HWScores[i];
    }
}

double Homework::HWAvg()
{
    double sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += HWScores[i];
    }
    return sum / 10.0;
}

double Homework::CalcGrades()
{
    finalGrade = HWAvg();
    return finalGrade;
}

double Homework::printGrade()
{
    cout << "Homework average: " << finalGrade << endl;
    return finalGrade;
}


Midterm::Midterm()
{
    for (int i = 0; i < 2; i++)
    {
        MTScores[i] = 0;
    }
}

void Midterm::AskGrades()
{
    cout << "What are your midterm grades?" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> MTScores[i];
    }
}

double Midterm::MTAvg()
{
    double sum = 0;
    for (int i = 0; i < 2; i++)
    {
        sum += MTScores[i];
    }
    return sum / 2.0;
}

double Midterm::CalcGrades()
{
    finalGrade = MTAvg();
    return finalGrade;
}

double Midterm::printGrade()
{
    cout << "Midterm average: " << finalGrade << endl;
    return finalGrade;
}

Final::Final()
{
    FinalScore = 0;
}

void Final::AskGrades()
{
    cout << "What is your final exam grade?" << endl;
    cin >> FinalScore;
}

double Final::CalcGrades()
{
    finalGrade = FinalScore;
    return finalGrade;
}

double Final::printGrade()
{
    cout << "Final exam grade: " << finalGrade << endl;
    return finalGrade;
}