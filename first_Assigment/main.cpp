#include <iostream>
using namespace std;

void printDiamond(int n) {
    int x, y, z;

    for (x = 1; x <= n; x++) {
        for (z = 1; z <= n - x; z++)
            cout << " ";

        for (y = 1; y <= x * 2 - 1; y++)
            cout << "*";
        cout << endl;
    }
    for (x = n; x >= 1; x--) {

        for (z = 1; z <= n - x; z++) // one error i had was i was substracting 1 instead of x xD
            cout << " ";

        for (y = 1; y <= x * 2 - 1; y++) // secon error i had was i forgot to add the < simbol
            cout << "*";

        cout << endl;
        }
    }

 


int main()
{
    
    cout << "Class 94818 CMPR120\n";
        cout <<"Instructor : Joel Kirscher\n";
        cout << "Student : Miguel Basilio\n";
        cout << "Enviroment : Visual Studio 2019\n";
        cout << "Project : My first Program\n\n\n";

    cout << "Hello World!\n\n\n\n";


    cout << "Class 94818 CMPR120\n";
    cout << "Instructor : Joel Kirscher\n";
    cout << "Student : Miguel Basilio\n";
    cout << "Enviroment : Visual Studio 2019\n";
    cout << "Project : \n";


    cout << "Assigment 1 product of 3 Numbers\n\n\n";

    int numberOne = 10;
    int numberTwo = 20;
    int numberThree = 30;
    int product;

    product = numberOne * numberTwo * numberThree;
    cout << "The product of the three integers is " << product << endl;
    cout << endl;


    cout << "Class 94818 CMPR120\n";
    cout << "Instructor : Joel Kirscher\n";
    cout << "Student : Miguel Basilio\n";
    cout << "Enviroment : Visual Studio 2019\n";
    cout << "Project : Golden Ratio\n\n\n\n";

    cout << "Golden Ratio\n";
    cout << endl;
    cout << endl;
    double ratio = 1.62;
    double height = 5;
    double width;

    width = height * ratio;
    cout << "The Ratio is: " << width << endl;
    cout << endl;
    cout << endl;

 

 

    cout << "Class 94818 CMPR120\n";
    cout << "Instructor : Joel Kirscher\n";
    cout << "Student : Miguel Basilio\n";
    cout << "Enviroment : Visual Studio 2019\n";
    cout << "Project : \n";
    cout << "Assignment 4 Restaurant Bill\n\n";

    double tax = 0.675;
    double tip = 20.00;
    double total = 88.67;
    double mealTotal;

    mealTotal = total * tax - tip;

        cout << "Meal Cost: " << mealTotal << endl;
        cout << "Tax: " << tax * 10 << endl;
        cout << "Tip: " << tip << endl;
        cout << "Total Bill: " << total << endl;
        cout << endl;

 


        cout << "Class 94818 CMPR120\n";
        cout << "Instructor : Joel Kirscher\n";
        cout << "Student : Miguel Basilio\n";
        cout << "Enviroment : Visual Studio 2019\n";
        cout << "Project:\n";
        cout << "Diamond Pattern\n\n\n\n";

        

         
            printDiamond(5);
        


    return 0;
}
