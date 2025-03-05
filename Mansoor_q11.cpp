/* Filename: Mansoor_q11.cpp
 * Author: Jake Mansoor
 * Description:A program that demonstrates IOmusing priinf and scanf, functions and basic algebra in C++
 */

#include<iostream>
using namespace std;

//total function declaration
double total(double assignmets, double exams, double final);

int main() {
    // double variables to store user inputs
    double assignnmentGrade;
    double examGrades;
    double finalExamGrade;

    //serise of printf and scanf to retrieve user responses
    printf("Input your grade for your assignemnts: ");
    scanf("%lf", &assignnmentGrade);
    printf("Input your grade for your exams combined: ");
    scanf("%lf", &examGrades);
    printf("Final Exam grade: ");
    scanf("%lf", &finalExamGrade);

    //variable to store the result from the total function
    double finalGrade = total(assignnmentGrade, examGrades, finalExamGrade);

    //if statements to assign each percent grade to a correspoinding letter grade
    if (finalGrade >= 95) {
        printf("%.2lf, A", finalGrade);
    }
    else if (finalGrade >= 91) {
        printf("%.2lf, A-", finalGrade);
    }
    else if (finalGrade >= 87) {
        printf("%.2lf, B+", finalGrade);
    }
    else if (finalGrade >= 83) {
        printf("%.2lf, B", finalGrade);
    }
    else if (finalGrade >= 79) {
        printf("%.2lf, C+", finalGrade);
    }
    else if (finalGrade >= 75) {
        printf("%.2lf, C", finalGrade);
    }
    else if (finalGrade >= 66) {
        printf("%.2lf, C-", finalGrade);
    }
    else if (finalGrade >= 61) {
        printf("%.2lf, D+", finalGrade);
    }
    else if (finalGrade >= 56) {
        printf("%.2lf, D", finalGrade);
    }
    else {
        printf("%.2lf, F", finalGrade);
    }
    

}

//total function definition
double total(double assignmets, double exams, double final){
    return(((assignmets*.15) + (exams*.6) + (final*.25)));
    // return(assignmets + exams + final)/3;
}
