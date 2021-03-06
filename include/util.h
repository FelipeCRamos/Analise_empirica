#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <iomanip>
#include <iterator>
// My own pow function
unsigned long long int cPow(long int n, long int e);

// Confere para fibsearch
long int min(long int x, long int y);

// Generate a fibonacci sequence
long int *makeFib(long int size);

// A simple array print function
void pArray( long int *, long int * );

// A function to create "random" arrays
long int *cArray( int );

// A simple args show function
void showArgs( int *argc, char **argv );

// a function to simply break page
void bp();

// A function to pretty print all the results
void printResults(int aSize, int array_size, long int time, const int n_functions, long int *sum_times, long int *iterations );

// A function to output the results on a .dat file
void generateResults(int i, std::ofstream &file, int aSize, int array_size, long int time, const int n_functions, long int *sum_times, long int *iterations );

#endif
