#ifndef GRADECALCULATOR_H
#define GRADECALCULATOR_H

class GradeCalc 
{
public: 
    GradeCalc();
    virtual ~GradeCalc() {}

    virtual void AskGrades() = 0;
    virtual double CalcGrades() = 0;
    virtual double printGrade() = 0;

protected:
    double finalGrade;
};

class Homework : public GradeCalc
{
public:
    Homework();  
    double HWAvg(); 

    void AskGrades();
    double CalcGrades();
    double printGrade();

private: 
    double HWScores[10];  
};

class Midterm : public GradeCalc
{
public: 
    Midterm(); 
    double MTAvg(); 

    void AskGrades();
    double CalcGrades();
    double printGrade();

private: 
    double MTScores[2]; 
};

class Final : public GradeCalc 
{
public: 
    Final(); 

    void AskGrades();
    double CalcGrades();
    double printGrade();

private: 
    double FinalScore; 
};

#endif