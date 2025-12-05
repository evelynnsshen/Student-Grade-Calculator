#include "GradeCalculator.h"
#include <iostream>
using namespace std;

int main()
{
    Homework hw;
    Midterm mid;
    Final fin;

    hw.AskGrades();
    mid.AskGrades();
    fin.AskGrades();

    double hwGrade  = hw.CalcGrades();
    double midGrade = mid.CalcGrades();
    double finGrade = fin.CalcGrades();

    hw.printGrade();
    mid.printGrade();
    fin.printGrade();

    double overall = (hwGrade + midGrade + finGrade) / 3.0;

    cout << "\n==============================\n";
    cout << "   FINAL COURSE GRADE: " << overall << endl;
    cout << "==============================\n";

    return 0;
}