/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   array_arg.cpp
 * Author: k
 *
 * Created on 4 May 2016, 12:23 AM
 */

// array arg.cpp - An array element as an argument to a function 
#include <iostream> 
using namespace std;
void get_grade(int& grade); // Obtains a grade from the user and stores it in parameter, grade.
const int SIZE =5;

int mainArray_arg(void) {
    int grades[SIZE];
    int i;
    cout << "Enter " << SIZE << " grades \n";
    for (i = 0; i < SIZE; ++i) // read, store values one-by-one 
        get_grade(grades[i]);
    for (i = 0; i < SIZE; ++i) // Displays the array 
        cout << "grade[" << i << "] = " << grades[i] << endl;
    return 0;
}

void get_grade(int& grade) {
    cout << "Input a grade between 0 and 100: ";
    cin >> grade;
}