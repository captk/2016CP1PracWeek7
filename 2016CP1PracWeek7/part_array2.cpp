/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   part_array2.cpp
 * Author: k
 *
 * Created on 4 May 2016, 12:50 AM
 */

#include <iostream> 
#include <cctype> 
using namespace std;
const int MAXSIZE = 20;
void read_array(char d_array[], int& size); // array will be modified 
void write_array(const char d_array[], int size); // array will not be modified

int main(void) {
    char digit_array[MAXSIZE];
    int size, i;
    size = 0;
    cout << "Enter an integer with no more than 20 digits: ";
    read_array(digit_array, size);
    write_array(digit_array, size);
    return 0;
}

void read_array(char d_array[], int& size) {
    char digit;
    do {
        cin.get(digit);
        if (isdigit(digit)) {
            d_array[size] = digit;
            ++size;
        }
    } while (size < 20 && isdigit(digit));
}

void write_array(const char d_array[], int size) {
    cout << "The integers you entered are: ";
    for (int i = 0; i < size; ++i) cout << d_array[i];
    cout << endl; 
}