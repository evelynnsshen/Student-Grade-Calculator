#include "GradeCalculator.h"
#include <iostream>
#include <cmath>
#include <cstring> 

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

Midterm::Midterm()
{
    for (int i = 0; i < 2; i++)
    {
        MTScores[i] = 0; 
    }
}

Final::Final()
{
    FinalScore = 0; 
}

void GradeCalc::AskGrades()
{
    int x;
    cout << "What are your homework grades?" << endl; 
    for (int i = 0; i < 10; i++)
    { 
        cin >> x; 
        HWScores[i] = x;
        //int sum +=;
    }

    cout << "What are your midterm grades?" << endl; 
    for (int i = 0; i < 2; i++)
    { 
        cin >> x; 
        MTScores[i] = x;
    }

    cout << "What are your finals grades?" << endl; 
    cin >> x; 
    FinalScore = x; 
}

double GradeCalc::CalcGrades()
{
    double homework = HWScores.printGrade(); 
    double midterm = 
}


double Homework::HWAvg()
{
    double sum = 0;
    for(int i = 0; i < 10; i++)
    {
        sum += HWScores[i];
    }
    double hwaverage = sum / 10;
    return hwaverage;
}

double Midterm::MTAvg()
{
   double sum = 0; 
   for(int i = 0; i < 2; i++)
    {
        sum += MTScores[i];
    }
    double mtaverage = sum / 2;
    return mtaverage; 
}


double GradeCalc::CalcGrades()
{
    double finalGrade = (mtaverage + hwaverage + FinalScore) / 3;
    return finalGrade;
}
