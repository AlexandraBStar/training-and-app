#include <iostream>
using namespace std;

int BMICalculator ()
{

    float Height;
    float Weight;
    float BMI;
    cout << "Welcome to the BMI calculator online!"<< endl;
    cout << "-------------------------------------"<< endl;

    cout << "Enter yout height (m): ";
    cin >> Height;

    cout << "Enter yout weight (kg): ";
    cin >> Weight;
    
    BMI = Weight / (Height * Height);
    
    cout << "Your BMI is: "<< BMI<<endl;
    
    if(BMI < 18.5)
    {
        cout << "Underweight"<< endl;
    }
    else 
    if (BMI >= 18.5 && BMI <=24.9)
    {
        cout << "Normal"<< endl;
    }
    else
    {
        cout << "Overweight"<< endl;
    }
return 0;
}

int GuessGame ()
{
    int VariableToGuess;
    int GuesedVariable;
    
    cout << "Welcome to Guess game: "<<endl;
    cout << "------------------------"<< endl;
    
    cout <<"Enter your data: ";
    cin >> VariableToGuess;
    
   std::system("cls");

   cout << "Please guess the number: ";
   cin >> GuesedVariable;

   if (VariableToGuess == GuesedVariable)
    cout<< "Congratulations!"<< endl;
   else
    while(VariableToGuess != GuesedVariable)
   {
        cout << "Please guess the number: ";
        cin >> GuesedVariable;

            if (VariableToGuess == GuesedVariable)
                cout<< "Congratulations!"<< endl;
                break;
        
   }    

   return 0;
    
}

int main (){
    GuessGame();
    return 0;
}

