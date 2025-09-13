// COMSC-210 | Lab 6 | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void enterArrayData(int[], int);
void outputArrayData(int[], int);
int sumArray(int[], int);

main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    enterArrayData(numbers, SIZE);
    outputArrayData(numbers, SIZE);
    sumArray(numbers, SIZE);

    return 0;
}