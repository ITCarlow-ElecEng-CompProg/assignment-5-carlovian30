/** Kevin Griffin
 *  Ex-5
 *  Method of least squares of linear regession
 *
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /**Variablle declarations*/
    double arrayX[100] = {0};
    double arrayY[100] = {0};
    double sumX=0, sumY=0, sumXY=0;
    double xSQ=0, avgX=0, avgY =0, slope =0, c_intercept=0;

    /** initaialising n and i*/
    int n=0, i=0;

    /**do while loop to get the n value*/
    do
    {
        cout << "Enter a value for n: " ;
        cin>> n;
    }
    while ((n<=0) || (n> 100));

    /** for loop to fill array x and array y */
    for (i=0; i<n; i++)
    {
        cout << "Enter X value: ";
        cin >> arrayX[i];

        cout << "Enter a Y value: ";
        cin>>arrayY[i];

    }

    /**displays the x and y table to the user*/
    cout << "X Y table" << endl;
    /** for loop that evaluates the sum f x. y, and the product of x * y*/
    for (i=0; i<n; i++)
    {
        cout << arrayX[i] << " " << arrayY[i] << endl;
        sumX = sumX + arrayX[i];
        sumY = sumY + arrayY[i];
        sumXY = sumXY + arrayX[i] * arrayY[i];
        xSQ = xSQ + pow(arrayX[i], 2.0);

    }

    /**calculates the avg of x and y*/
    avgX = sumX / n;
    avgY = sumY / n;

    /** displays the results to all the calculations to the user*/
    cout <<endl;
    cout << "Sum of X is: " << sumX << endl;
    cout << "Sum of Y is: " << sumY << endl;
    cout << "Product of XY is: " << sumXY << endl;
    cout << "Sum of avgX is: " << avgX << endl;
    cout << "Sum of avgY is: " << avgY << endl;
    cout << "X squared is : " << xSQ << endl;

    /**calculates the slope and the c intercept point*/
    slope = ((n*sumXY) - (sumX * sumY)) / ((n * xSQ) - (pow(sumX, 2.0)));
    c_intercept = avgY - (slope * avgX);
    /** displays the slope and point of interception to the user*/
    cout << "slope is: " << slope << endl;
    cout << "point of interception is: " << c_intercept << endl;

    return 0;
}
