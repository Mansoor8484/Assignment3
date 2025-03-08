/* Filename: Mansoor_q12
 * Author: Jake Mansoor
 * Description: Demonstrates comprehension of f(x) overloading. 
 */
#include<iostream>

//function declarations/inline definition
inline double sum(double x, double y) {
    return x + y;
}
double sum(double x, double y, double z);
double sum(double x[], int size);


//beggining of main class
int main() {
    //serise of function calls and printing fucntions to the terminal
    double sumOfTwo = sum(12.5, 14.5);
    printf("%lf\n", sumOfTwo);
    double sumOfThree = sum(15.9,87.9,63.2);
    printf("%lf\n", sumOfThree);

    double arr[3] = {12.5,23.5,65.7};
    double sumArray = sum(arr,3);
    printf("%lf",sumArray);


}

//definition of overloaded sum function with three params
double sum(double x, double y, double z) {
    return x+y+z;
};


//overloaded sum function accepting an array and its size.
double sum(double x[], int size){
    double sumOfArr;
    for (int i =0; i < size; i++) {

        sumOfArr += x[i];
    }

    return sumOfArr;
};

