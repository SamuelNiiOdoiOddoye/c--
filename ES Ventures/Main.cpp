#include <iostream>
    using namespace std;

        int main ()
        {
           // this program is to help manage the sales and inventory of es-ventures

            cout << "Hello World!" << endl ;

            cout << "   " << endl ;

            // first determine who is on duty using ID'S assigned
            // there are two types of employee's full-time and special-time
            // under the category are the ID's of each worker

            // the string employee_status would be the variable to be used to hold whether the employee is full-time or special-time
            string employee_status ;
            string  staff_id;
            cout << "for full-time worker use :" << " full-time" << endl ;
            cout << "   " << endl ;
            cout << "for special-time worker use :" << " special-time" << endl ;
            cout << "   " << endl ;
            cout << "what type of worker are you?" ;
            cin >> employee_status;
        
            if (employee_status == "full-time"){

            // remember to put in an if statement so that if the user made a mistake in selecting what type of employee they are they can go back and select the appopriate one 
                cout << "  " << endl ;
                cout << "the full-time employee's and thier staff-id's are: " << endl ;
                cout << "   " << endl;
                cout << "Samuel Nii Odoi Oddoye" << " -- " << "SNOO_04" << endl ;
                cout << "   " << endl;
                cout << "Emmanuel Sowah Oddoye" << " -- " << "ENSO_07" << endl ;
                cout << "   " << endl;
                cout << "Shirley Caroline Oddoye" << " -- " << "SCODDOYE_47" << endl ; 
                cout << " " << endl;
                cout << " Enter Your: staff-id " ;
                cin >> staff_id;
                
            
                            }

            else if (employee_status == "special-time")
            {

            // remember to put in an if statement so that if the user made a mistake in selecting what type of employee they are they can go back and select the appopriate one
                cout << "   " << endl ;
                cout << "the special-time employee's and thier staff-id's are: " << endl;
                cout << "  " << endl ;
                cout << "Samuel Quansah Ashong" << " -- " << "SQA_04" << endl ;
                cout << "  " << endl ;
                cout << "Emmanuel Okpoti Oddoye"  << " -- " << "EOO_97" << endl ;
                cout << "  " << endl ;
            }
            
            else {
        
                cout << "   " << endl ;
                cout << "The term you entered is not matching the available one's the list is below " << endl ;
                cout << "  " << endl ;
                cout << "If you are a full- time employee use " << " -- " << " full-time" << endl ;
                cout << "  " << endl ;
                cout << "If you are a special-time employee use " << " -- " << " special-time"  << endl ;
                cout << "If you are not sure of your employee-status or staff-id enter " << " -- " << " none " << endl;
                cout << "Please what type of employee are you: " ;
                cin >> employee_status;

            }
            /*    if(employee_status = "none"){
                    cout << "";
                }
            }
        
           */
           
            return 0;
        }
