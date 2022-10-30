#include <iostream>
using namespace std;

int main() {


  float number1;
    cout << "Enter first number: " << endl;
    cin >> number1;

  char operatori;
    cout << "Enter an operator: ";
    cin >> operatori;

  float number2;
    cout <<"Enter second number: "<<endl;
    cin >> number2;

  float result;
    if (operatori == '+')
    {result = number1 + number2;}

        else if (operatori == '-')
        {result = number1 - number2;}

            else if (operatori == '*')
            {result = number1 * number2;}

                else 
                {result = number1 / number2;}
                cout << "Result is:  " << result << endl;

}