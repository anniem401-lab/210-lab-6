// COMSC-210 | Lab 6 | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
using namespace std;

// Function prototypes
void enterArrayData(double*);
void outputArrayData(double*);
double sumArray(double*);

main()
{
    const int ARRAYSIZE = 5;
    double numbers[ARRAYSIZE];

    enterArrayData();
    outputArrayData();
    sumArray();

    return 0;
}

// Receives a dynamic double array and populates it with values from user input.
void enterArrayData(double*);
{
    const int ARRAYSIZE = 5;
    double numbers[ARRAYSIZE];

    cout << "Data entry for the array: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> numbers[i];
    }
}