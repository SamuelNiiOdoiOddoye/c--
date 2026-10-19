#include <iostream>
using namespace std;

int main()
{
    cout << "Hi please enter your name: ";
    string name_1;
    cin >> name_1;

    cout << "Hello " << name_1 << endl;
    cout << "This Program is meant to calculate the perimeter , area and volume of Common figures as well as perform basic arithmetics" << endl << endl;
    cout << " For Perimeter type Perimeter " << endl;
    cout << "For Area type Area " << endl ;
    cout << "For basic arithmetic type Arithmetic" << endl << endl;
    cout << "So " << name_1 << " what action would you be performing today please: " ;
    string action_1;
    cin>> action_1;

    if (action_1 == "Arithmetic"){

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
    

    }

    else{

            if(action_1 == "Area"){

               cout << "Hello " << name_1 << endl;
    cout << "This Program is meant to calculate the  area of common figures " << endl;
    cout << "You can find the find Square, Rectangle, Triangle," << endl;
    cout << "What shape's area would you like to find today: ";
    string shape_name;
    cin >> shape_name;
    if (shape_name == "Square"){

        cout<<"Type in value for the side of the square: ";
        float side_length_square;
        cin >> side_length_square;
        float answer_area_square;
        answer_area_square = side_length_square * side_length_square;
        cout << "The area of a square is: "<< answer_area_square << endl;
    }

    else{

        if (shape_name == "Triangle"){

            float answer_area_triangle;
            cout << "Type in the height of the triangle here: ";
            float height_triangle_1;
            cin >> height_triangle_1;

            cout << "Type in the length of the base here: ";
            float base_triangle_1;
            cin >> base_triangle_1;

            answer_area_triangle = 0.5 * height_triangle_1 *base_triangle_1 ;

            cout << "The area of the triangle is: "<< answer_area_triangle << endl;
        }

        else{

            if(shape_name == "Rectangle"){

                float answer_area_rectangle;
                cout << "Type in the length of the rectangle here: ";
                float length_rectangle_1;
                cin >> length_rectangle_1;

                cout << "Type in the width of the rectangle here: ";
                float width_rectangle_1;
                cin >> width_rectangle_1;

                answer_area_rectangle = length_rectangle_1 * width_rectangle_1;
                cout << "The area of the rectangle is: "<< answer_area_rectangle << endl;
            }

           

        }

    }
 ;

            }

            else{
                cout << "You can find the perimeter of the following shapes: Rectangle, Square, Triangle," <<endl;
                if(action_1 == "Perimeter"){

                   
                    cout << "Hi this program is meant to calculate the perimeter of common figures";
                    cout << "What shapes perimeter would you like to find today";
                    string shape_name ;
                    cin >> shape_name;

                    if(shape_name == "Rectangle"){
                        cout << "What is the length of the Rectangle: ";
                        float length_rectangle_1;
                        cin >> length_rectangle_1;

                        cout << "What is the width of the Rectangle: ";
                        float width_rectangle_1;
                        cin >> width_rectangle_1;

                        float Perimeter_Rectangle_1;
                        Perimeter_Rectangle_1 = (2*length_rectangle_1) + (2*width_rectangle_1);
                        cout << "The Perimeter of the rectangle is: " << Perimeter_Rectangle_1;
                    }

                    else{
                        if(shape_name == "Square"){
                            cout << "What is the length of the side of the Sqaure: ";
                        float length_side_square_1;
                        cin >> length_side_square_1;

                            float Perimeter_Square_1;
                        Perimeter_Square_1 = 4*length_side_square_1;
                        cout << "The Perimeter of the square is: " << Perimeter_Square_1;
                        }

                        else{

                            if(shape_name == "Triangle"){
                                
                                cout << "What is the length of the first side of the triangle: ";
                                float side_length_triangle_1;
                                cin >> side_length_triangle_1;

                                cout << "What is the length of the second side of the triangle: ";
                                float side_length_triangle_2;
                                cin >> side_length_triangle_2;

                                cout << "What is the length of the base of the triangle: ";
                                float base_length_triangle_1;
                                cin >> base_length_triangle_1;      

                                float Perimeter_triangle_1;
                                Perimeter_triangle_1 = side_length_triangle_1 + side_length_triangle_2 + base_length_triangle_1;
                                cout << "The perimeter of the triangle is: " << Perimeter_triangle_1;
                            }
                        }
                    }


                }
            }

    }

    

return 0;
}

