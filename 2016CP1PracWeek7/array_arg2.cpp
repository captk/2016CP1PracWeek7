/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   array_arg2.cpp
 * Author: k
 *
 * Created on 4 May 2016, 12:26 AM
 */

// array arg2.cpp - The entire array as an argument to a function 
#include <iostream> 
using namespace std;
void get_grade(int grade[]);
const int SIZE = 5;

int mainArray_arg2(void) {
    int grades[SIZE];
    int i;
    cout << "Enter "<< SIZE<< " grades \n";
    get_grade(grades); // can read, modify all elements
    for (i = 0; i < SIZE; ++i) // Displays the array 
        cout << "grade[" << i << "] = " << grades[i] << endl;
        return 0;
}

void get_grade(int grade[]) {
    for (int i = 0; i < SIZE; ++i) {
        cout << "Input a grade between 0 and 100: ";
        cin >> grade[i];
    }
}