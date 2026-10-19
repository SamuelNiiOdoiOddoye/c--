#include <iostream>
using namespace std;

int main(){

        cout << "Hi please enter your name: ";
    string name_1;
    cin >> name_1;

    cout << "Hello " << name_1 << endl;
    cout << "This Program is meant to calculate the  area Common figures " << endl;
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


    return 0;
}