// Name: Mavey Ma
// Due: Friday, Oct. 16, 2015
// Functions D, Passerby Functions, Preconditions/PostConditions

#include <iostream>
#include <cassert>

using namespace std;
//1
void sort(int& numA, int& numB, int& numC);
// Summary: Sorts three numbers in increasing order.
// Precondition: Range [0, 100]
// Postcondition: Values will be sorted from smallest to biggest.
//2
void numDigits(int  valA, int& n);
//Summary: Determines the number of digits in an integer.
//Precondition: Range [-10000 and 10000]
//Postcondition: When given an int value between [-1000, 1000], the function will count the number of digits in that number.
void computeSphere(double& a, double& v, double r);
//Summary: Calculates area and volume.
//Precondition: Range [0, 10000]
//Postcondition: Given a radius, the function will calculate both the area and the volume of a sphere.
void swap(int& A, int& B);
//Summary: Swaps the entered values
//Preconditions:  Positive integers only
//Postcondition: A will become B, and B will become what A was originally.
int main()
{   /*
    cout << "Does this work?\n";
    //1 TESTS
    int first = 5, second = 5, third = 5;
    sort(first, second, third);
    first = 1, second = 25, third = 3;
    sort(first, second, third);
    first = 100, second = 0, third = 25;
    sort(first, second, third);
    //2 TESTS
    int count = 0, counter = 0, counts = 0;
    numDigits(10, count);
    numDigits(1000, counter);
    numDigits(-234, counts);
    //3 TESTS
    double area1, volume1, area2, volume2, area3, volume3;
    computeSphere(area1, volume1, 1);
    computeSphere(area2, volume2, 2);
    computeSphere(area3, volume3, 100);
    */
    //4 TESTS
    int valA = 3, valB = 5;
    swap(valA, valB);
    valA = 100, valB = 9;
    swap(valA, valB);
    valA = 1997, valB = 1442;
    swap(valA, valB);
    
    return 0;
}
void sort(int& numA, int& numB, int& numC)
{
    assert((numA >= 0) && (numA <= 100));
    assert((numB >= 0) && (numB <= 100));
    assert((numC >= 0) && (numC <= 100));
    int smallest, middle, biggest;
    if (numA < numB)
    {
        if (numB < numC)
        {
            smallest = numA;
            middle = numB;
            biggest = numC;
            cout << smallest << ", " << middle << ", " << biggest << endl;
            //cout << "HELP" << endl;
            return;
        }
        else if (numB >= numC)
        {
            smallest = numA;
            middle = numC;
            biggest = numB;
            cout << smallest << ", " << middle << ", " << biggest << endl;
            //cout << "PINEAPPLE" << endl;
            return;
        }
    }
    else if (numA >= numB)
    {
        if (numB < numC)
        {
            smallest = numB;
            middle = numC;
            biggest = numA;
            cout << smallest << ", " << middle << ", " << biggest << endl;
            //cout << "PANDA" << endl;
            return;
        }
        else if (numB >= numC)
        {
            smallest = numC;
            middle = numB;
            biggest = numA;
            cout << smallest << ", " << middle << ", " << biggest << endl;
            //cout << "BANANA" << endl;
            return;
        }
    }
}//1 END SORT
void numDigits(int  valA, int& n)
{
    assert((valA >= -1000) && (valA <= 1000));
    while (valA != 0)
    {
        valA /= 10;
        n++;
    }
    cout << n << endl;
}//2 END NUM DIGITS
void computeSphere(double& a, double& v, double r)
{
    assert((r >= 0) && (r <= 10000));
    const double PI = 3.14;
    v = (static_cast<double>(4)/3) * PI * r * r * r;
    a = 4 * PI * r * r;
    cout << "Volume is " << v << endl;
    cout << "Area is " << a << endl;
}//3 END COMPUTE SPHERE
void swap(int& A, int& B)
{
     assert((A > 0) && (B > 0));
     int newA, newB;
     newA = B;
     newB = A;
     cout << "Before: " << A << ", " << B << endl;
     cout << "After: " << newA << ", " << newB << endl;
}//4 END SWAP
