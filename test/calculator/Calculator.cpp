#include <iostream>
using namespace std;
int main(){

    float value_1;
    float value_2;

     cout << "Hi Welcome to Calc"<< endl;

    cout << "+ " << " Implies addition" << endl;
   cout << "- " << " Implies subtraction" << endl;
   cout << "* " << " Implies multiplication" << endl;
   cout << "/ " << " Implies division" << endl;


  
   cout <<"What Operation would you be performing today : ";  
   char operation;
   cin >> operation;
   


   cout << "Type in value_1: ";
   cin >> value_1;
   cout << "Type in value_2: ";
   cin >> value_2;

    if (operation == '+'){

        float answer_addition;
        answer_addition = value_1 + value_2 ;
        cout << "The answer is " << answer_addition << endl;
    }

    else
    {
        if(operation == '-'){

            float answer_subtraction;
            answer_subtraction= value_1 - value_2;
            cout<< "The answer is " << answer_subtraction << endl;

        }  

        else{
            if(operation =='*'){
                float answer_multiplication;
                answer_multiplication = value_1 * value_2 ;
                cout<< "The answer is " << answer_multiplication << endl ;
            }
            else{
                if(operation == '/'){
                    float answer_division;
                    answer_division = value_1 / value_2 ;
                    cout << "The answer is "<< answer_division << endl;
                }
            }

        }    
    }
    

    return 0;
}