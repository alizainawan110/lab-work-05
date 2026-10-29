// Ali zain L1F26BSCS0294
//Task 01
/*#include<iostream>
using namespace std;
int main()
{
	int daynumber;
	cout << "enter a day number (1-7): ";
	cin >> daynumber;
	switch (daynumber)
	{
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	default:
		cout << "Invalid output";
	}
    return 0;









}
*/

// Task 02

/*#include <iostream>

using namespace std;

int main() {
   
    char grade;
    double gradePoint;

    
    cout << "Enter the grade letter (A, B, C, D, F): ";
    cin >> grade;

    
    switch (grade) {
    case 'A':
    case 'a':
        cout << "Remarks: Excellent work" << endl;
        gradePoint = 4.0;
        break;

    case 'B':
    case 'b':
        cout << "Remarks: Good" << endl;
        gradePoint = 3.0;
        break;

    case 'C':
    case 'c':
        cout << "Remarks: Satisfactory" << endl;
        gradePoint = 2.0;
        break;

    case 'D':
    case 'd':
        cout << "Remarks: Needs improvement" << endl;
        gradePoint = 1.0;
        break;

    case 'F':
    case 'f':
        cout << "Remarks: Fail" << endl;
        gradePoint = 0.0;
        break;

    default:
        cout << "Invalid grade" << endl;
        gradePoint = 0.0;
        break;
    }

   
   
    

    return 0;
}
*/

// task 03

/*#include <iostream>

using namespace std;

int main()
{
    int choice;

    float value, converted;

   
    cout << "Unit Converter" << endl;
    cout << "1. Kilometres to miles" << endl;
    cout << "2. Kilograms to pounds" << endl;
    cout << "3. Celsius to Fahrenheit" << endl;
    cout << "4. Inches to centimetres" << endl;

    
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter the value: ";
    cin >> value;

    
    switch (choice) {
    case 1:
        converted = value * 0.621371;
        cout << value << " km = " << converted << " miles" << endl;
        break;

    case 2:
        converted = value * 2.20462;
        cout << value << " kg = " << converted << " lbs" << endl;
        break;

    case 3:
        converted = (value * 9.0 / 5.0) + 32.0;
        cout << value << " C = " << converted << " F" << endl;
        break;

    case 4:
        converted = value * 2.54;
        cout << value << " in = " << converted << " cm" << endl;
        break;

    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return 0;
}
*/
// Task 04
/*#include <iostream>
using namespace std;
int main()
{
    int mounth;
    cout << "Enter mounth number 1-12:";
    cin >> mounth;
    switch (mounth)
    {
    case 1:
    case 2:
        cout << "Winter";
        break;
    case 3:
    case 4:
    case 5:
        cout << "Spring";
        break;
    case 6:
    case 7:
    case 8:
        cout << "Summer";
        break;
    case 9:
    case 10:
    case 11:
        cout << "Autumn";

        break;
    default:
        cout << "Invalid mounth";
        break;
    }
        switch (mounth)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Days: 31 days" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Days: 30 days" << endl;
            break;
        case 2:
            cout << "Days: 28 days" << endl;
            break;





        default:
            break;
     }   





    
    }
 */
// Task 05

/*
#include <iostream>

using namespace std;

int main() {
   
    int year;
    cout << "Enter a year: ";
    cin >> year;

    
    if (year > 0)
    {
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                {
                    cout << year << " is a leap year" << endl;
                    cout << "February has 29 days" << endl;
                }
                else
                {
                    cout << year << " is not a leap year" << endl;
                    cout << "February has 28 days" << endl;
                }
            }
            else {
                cout << year << " is a leap year" << endl;
                cout << "February has 29 days" << endl;
            }
        }
        else {
            cout << year << " is not a leap year" << endl;
            cout << "February has 28 days" << endl;
        }
    }
    else {
        cout << "Invalid year" << endl;
    }

    return 0;
}
*/
// task 06


/*
#include <iostream>

using namespace std;

int main() {
   
    int correctPin = 1234;
    int enteredPin;
    int balance = 20000;
    int amount;

    
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

   
    if (enteredPin == correctPin) {
        if (amount > 0) {
            if (amount <= balance) {
                if (amount % 500 == 0) {
                    
                    balance = balance - amount;
                    cout << "Withdrawal successful";
                    cout << "Amount withdrawn: Rs. " << amount;
                    cout << "Remaining balance: Rs. " << balance;
                }
                else {
                    cout << "Amount must be a multiple of 500";
                }
            }
            else {
                cout << "Insufficient balance";
            }
        }
        else {
            cout << "Invalid amount";
        }
    }
    else {
        cout << "Incorrect PIN";
    }

    return 0;
}
*/
//Task 07


/*#include <iostream>
using namespace std;

int main() {
  
    int testScore, matricMarks, interMarks;

    cout << "Enter Entry Test Score (out of 100): ";
    cin >> testScore;

    cout << "Enter Matric Marks (out of 1100): ";
    cin >> matricMarks;

    cout << "Enter Intermediate Marks (out of 1100): ";
    cin >> interMarks;

    
    if (testScore >= 50) {
        if (matricMarks >= 660) {
            if (interMarks >= 660) {
                cout << "Admission granted" << endl;

                
                if (testScore >= 90) {
                    cout << "Scholarship: 50%" << endl;
                }
                if (testScore < 90) {
                    if (testScore >= 75) {
                        cout << "Scholarship: 25%" << endl;
                    }
                }
                if (testScore < 75) {
                    cout << "Scholarship: None" << endl;
                }

            }
            else {
                cout << "Rejected: intermediate marks are below 660" << endl;
            }
        }
        else {
            cout << "Rejected: matric marks are below 660" << endl;
        }
    }
    else {
        cout << "Rejected: entry test score is below 50" << endl;
    }

    return 0;
}*/
//task 08 
/*
#include <iostream>
using namespace std;

int main() 
{
    
    int sideA, sideB, sideC;

    cout << "Enter the length of side A: ";
    cin >> sideA;
    cout << "Enter the length of side B: ";
    cin >> sideB;
    cout << "Enter the length of side C: ";
    cin >> sideC;

    
    if (sideA > 0) {
        if (sideB > 0) {
            if (sideC > 0) {

                
                if (sideA + sideB > sideC) {
                    if (sideA + sideC > sideB) {
                        if (sideB + sideC > sideA) {

                           
                            cout << "Valid triangle" << endl;

                            if (sideA == sideB) {
                                if (sideB == sideC) {
                                    cout << "Type: Equilateral" << endl;
                                }
                                else {
                                    cout << "Type: Isosceles" << endl;
                                }
                            }
                            else {
                                if (sideB == sideC) {
                                    cout << "Type: Isosceles" << endl;
                                }
                                else {
                                    if (sideA == sideC) {
                                        cout << "Type: Isosceles" << endl;
                                    }
                                    else {
                                        cout << "Type: Scalene" << endl;
                                    }
                                }
                            }

                        }
                        else {
                            cout << "Not a valid triangle: two sides must add up to more than the third" << endl;
                        }
                    }
                    else {
                        cout << "Not a valid triangle: two sides must add up to more than the third" << endl;
                    }
                }
                else {
                    cout << "Not a valid triangle: two sides must add up to more than the third" << endl;
                }

            }
            else {
                cout << "Invalid: every side must be greater than 0" << endl;
            }
        }
        else {
            cout << "Invalid: every side must be greater than 0" << endl;
        }
    }
    else {
        cout << "Invalid: every side must be greater than 0" << endl;
    }

    return 0;
}
*/
//task 09
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int units, surchargePercent;
    double ratePerUnit, energyCharges, surcharge, totalBill;

    cout << "Enter units consumed: ";
    cin >> units;

    
    if (units > 0) {

       
        if (units <= 100) {
            ratePerUnit = 10.0;
        }
        else {
            if (units <= 300) {
                ratePerUnit = 15.0;
            }
            else {
                ratePerUnit = 20.0;
            }
        }

      
        energyCharges = units * ratePerUnit;

        if (energyCharges > 5000) {
            surchargePercent = 10;
        }
        else {
            if (energyCharges > 3000) {
                surchargePercent = 5;
            }
            else {
                surchargePercent = 0;
            }
        }

       
        surcharge = energyCharges * surchargePercent / 100.0;
        totalBill = energyCharges + surcharge;

        cout << fixed << setprecision(2);
        cout << "Units: " << units << endl;
        cout << "Rate per unit: Rs. " << ratePerUnit << endl;
        cout << "Energy charges: Rs. " << energyCharges << endl;
        cout << "Surcharge (" << surchargePercent << "%): Rs. " << surcharge << endl;
        cout << "Total bill: Rs. " << totalBill << endl;

    }
    else {
        cout << "Invalid units" << endl;
    }

    return 0;
}
*/
