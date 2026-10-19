 #include <iostream>
 using namespace std;
int main(){

// write a program that produces the sum of all prime numbers less than a given number

 // the variable num holds the value of the input of the number the user inputs
 
 int num_limit, num_counter;

cout << "Type in the number : " ;
cin >> num_limit;


 for(num_counter = 0 ; num_counter <= num_limit ;num_counter ++){

    for (int i = 0 ; num_counter % i == 0 ; i++ ){

        cout << num_counter ;

    }

 }

  

    return 0;
}