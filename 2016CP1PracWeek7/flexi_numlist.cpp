/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   flexi_numlist.cpp
 * Author: k
 *
 * Created on 3 May 2016, 11:24 PM
 */

#include <iostream> 
using namespace std;

const int SIZE = 4;

int mainFlexi_numlist(void) {
    int numlist[8], i, temp;
    // Read 8 integers from the keyboard and put them in the array 
    for (i = 0; i < SIZE; i++) {
        cout << "Enter numlist[" << i << "] : ";
        cin >> numlist[i];
    }
    // Display the numbers in the array 
    cout << "The original array." << endl;
    for (i = 0; i < SIZE; i++) {
        cout << "numlist[" << i << "] : ";
        cout << numlist[i] << endl;
    }
    // Now, display the numbers in a reverse order 
    cout << "The same array with values reversed." << endl;
    
    for (i = 0; i < SIZE / 2; i++) {
        temp = numlist[i];
        numlist[i] = numlist[SIZE - 1 -i];
        numlist[SIZE - 1 -i] = temp;
    }
    
    for(i = 0; i < SIZE; i++){
        cout <<"numlist[" << i << "] : " << numlist[i] << endl;
    }
    return 0;

}
