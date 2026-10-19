#include <iostream>
using namespace std;
int main(){

int num_limit,num_counter ;
cout<< "Type in Number: " ;
cin >> num_limit;

for (num_counter = 0 ; num_counter <= num_limit ;num_counter++){
    for(int i = 0; num_counter % i ==0 ; i++){

        cout << num_counter;
    }
}



    return 0;
}
