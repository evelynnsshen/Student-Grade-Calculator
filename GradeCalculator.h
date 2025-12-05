#ifndef GradeCalculator_H
#define GradeCalculator_H

class GradeCalc 
{
    public: 
    GradeCalc(); 
    double CalcGrades(); 
    virtual double printGrade(); 
    void AskGrades();
    private: 
    double finalGrade;
};

class Homework : public GradeCalc
{
    public: 
    double HWAvg(); 
    virtual double printGrade(); 
    private: 
    double HWScores[10];  
};

class Midterm : public GradeCalc
{
    public: 
    double MTAvg(); 
    virtual double printGrade(); 
    private: 
    double MTScores[2]; 
};

class Final : public GradeCalc 
{
    public: 
    virtual double printFGrade(); 
    private: 
    double FinalScore; 
};