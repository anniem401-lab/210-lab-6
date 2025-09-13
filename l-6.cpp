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

    double *array = nullptr; // Pointer to hold the address of the dynamic array
    array = new double[ARRAYSIZE]; // Dynamically allocates memory for the array

    enterArrayData(array);
    outputArrayData(array);

    double sum = sumArray(array);
    cout << "Sum of Values: " << sum << endl;

    delete[] array;  // Free the dynamically allocated memory

    return 0;
}

// Receives a dynamic double array and populates it with values from user input.
void enterArrayData(double* array)
{
    const int ARRAYSIZE = 5;

    cout << "Data entry for the array: " << endl;
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        cout << "     > Element " << (i + 1) << ": ";
        cin >> array[i];
    }
    cout << "Data entry complete." << endl;
}

// Receives a dynamic double array and outputs its contents on one line.
void outputArrayData(double* array)
{
    const int ARRAYSIZE = 5;

    cout << "Outputting array elements: ";
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Receives a dynamic double array and both calculates and returns its sum. No ouput for this function.
double sumArray(double* array)
{
    const int ARRAYSIZE = 5;
    double sum = 0.0;

    for (int i = 0; i < ARRAYSIZE; i++)
    {
        sum += array[i];
    }
    return sum;
}
