/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   part_array.cpp
 * Author: k
 *
 * Created on 4 May 2016, 12:47 AM
 */

#include <iostream> 
#include <cctype> 
using namespace std;
const int MAXSIZE = 20;

int mainPart_array(void) {
    char digit_array[MAXSIZE], digit;
    int size, i;
    size = 0;
    cout << "Enter an integer with no more than 20 digits: ";
    do {
        cin.get(digit);
        if (isdigit(digit)) {
            digit_array[size] = digit;
            ++size;
        }
    } while (size < 20 && isdigit(digit));
    cout << "The integer you entered is: ";
    for (i = 0; i < size; ++i) cout << digit_array[i];
    cout << endl;
    return 0;
}


