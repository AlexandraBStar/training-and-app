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
    
   std::system("cls"); //pentru a sterge ce am introdus de la tastatura

   cout << "Please guess the number: ";
   cin >> GuesedVariable;

   (VariableToGuess == GuesedVariable)?cout<< "Congratulations!"<< endl:cout << "Wrong! Please try again!";//ternary operator: conditie ?(then) behaviour :(else) behaviour

   return 0;
    
}

int CalculatorApp()
{
    float NumberOne, NumberTwo;
    char operation;

    cout <<"Welcome to your Calculator app" << endl;
    cout << "______________________________"<< endl;

    cout << "Please enter your first number, the operation you need and the second number: "<<endl;
    cin >> NumberOne >> operation >> NumberTwo;

    switch (operation)
    {
        case '-': cout<<NumberOne<<operation<<NumberTwo<<"="<<NumberOne - NumberTwo;break;
        case '+': cout<<NumberOne<<operation<<NumberTwo<<"="<<NumberOne + NumberTwo;break;
        case '*': cout<<NumberOne<<operation<<NumberTwo<<"="<<NumberOne * NumberTwo;break;
        case '/': cout<<NumberOne<<operation<<NumberTwo<<"="<<NumberOne / NumberTwo;break;
        case '%': 
            bool isNumberOneInt, isNumberTwoInt;
            isNumberOneInt = ((int)NumberOne == NumberOne);
            isNumberTwoInt = ((int)NumberTwo == NumberTwo);

            if(isNumberOneInt && isNumberTwoInt)
                cout<<NumberOne<<operation<<NumberTwo<<"="<<(int)NumberOne % (int)NumberTwo;
            else
                cout << "Not valid"; 
            break;
        default: cout << "The operations is not in calculator app"<<endl;
        break;

    }
    return 0; 
}

int DayMonth()
{
    int Year;
    int Month;
    cout <<"Welcome to your Month app calculator" << endl;
    cout << "______________________________"<< endl;

    cout <<"Add year: ";
    cin >> Year;
    cout <<"Add Month: ";
    cin >> Month;

     switch (Month)
     {
        case 2:(Year % 4 == 0 && Year % 100 !=0 || Year % 400 == 0)?cout << "29 days":cout << "28 days";break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:cout<<"31 days";break;
        case 4:
        case 6:
        case 9:
        case 11:cout<<"30 days";break;
        default: cout << "Month not recognised"<<endl;
        break;
     }  

}

int WhileLoop()
{
    int counter = 100;

    while (counter <= 500)
    {
        if(counter % 3 == 0 && counter % 5 == 0)
            cout << counter << " is divisible" << endl;
        counter++;
    }

}

int CountDigitsContain()
{
        int32_t Number;
        
        cout << "Please insert the number: ";
        cin >> Number;

        if (Number == 0)
            cout<< "You have entered 0 value";
        else {
            if(Number < 0)
            {
                Number = Number *(-1);
            }
            int counter = 0;
            while(Number > 0)
            {
                Number /= 10;
                counter ++;
            }
        cout << "Number contains: " << counter << " digits" << endl;
            }
}

int main (){
    //GuessGame();
    //BMICalculator();
    //CalculatorApp();
    //DayMonth();
    //WhileLoop();
    CountDigitsContain();

    return 0;
}

