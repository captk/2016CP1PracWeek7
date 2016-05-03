/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   numlist.cpp
 * Author: k
 *
 * Created on 3 May 2016, 3:56 PM
 */

#include <iostream> 
using namespace std;

int mainNumlist(void) {
    int numlist[8], i;
    // Read 8 integers from the keyboard and put them in the array 
    for (i = 0; i < 8; i++) {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> numlist[i];
    }
    // Display the numbers in the array 
    for (i = 0; i < 8; i++) {
        cout << "Value #" << i << ": ";
        cout << numlist[i] << endl;
    }
    // Now, display the numbers in a reverse order 
    for (i = 8; i > 0; i--) {
        cout << "Value #" << i << ": ";
        cout << numlist[i - 1] << endl; //Pay attention to i-1! 
    }
    cout << numlist[8];
    return 0;
    
}
