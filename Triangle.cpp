#include <iostream>

using namespace std;

int main()
{
    // Declare variables to store angles and side lengths of the triangle
    float angle1, angle2, angle3, length1, length2, length3;
    int total;

    // Prompt user to enter the angles of the triangle
    cout << "Enter the first angle of the triangle : " ;
    cin >> angle1;
    cout << "Enter the second angle of the triangle : " ;
    cin >> angle2;
    cout << "Enter the third angle of the triangle : " ;
    cin >> angle3;

    // Calculate the sum of angles
    total = angle1 + angle2 + angle3;

    // Check if any angle is zero
    if (angle1 == 0 || angle2 == 0 || angle3 == 0)
    {
        cout << "Any angle should not be zero or less" << endl;
    }
    else
    {
        // Check if the angles form a valid triangle (angles sum up to 180)
        if (total == 180)
        {
            // Prompt user to enter the sides of the triangle
            cout << "Enter the first side of the triangle : " ;
            cin >> length1;
            cout << "Enter the second side of the triangle : " ;
            cin >> length2;
            cout << "Enter the third side of the triangle : " ;
            cin >> length3;
            if(length1<=0||length2<=0||length3<=0)
            {
                cout << "Any length Length shoulnot be zero or less" << endl;
            }
            else
            {
            // Check the type of triangle based on side lengths
            if (length1 == length2 && length2 == length3 && length1 == length3)
            {
                cout << "It is Equilateral Triangle" << endl;
            }
            else if (length1 == length2 || length2 == length3 || length1 == length3)
            {
                cout << "It is Isosceles Triangle" << endl;
            }
            else if (length1 != length2 || length1 != length3 || length2 != length3)
            {
                cout << "It is Scalene Triangle" << endl;
            }

            // Check the type of triangle based on angles
            if (angle1 == 60 && angle2 == 60 && angle3 == 60)
            {
                cout << "It is Equiangular Triangle" << endl;
            }
            else if (angle1 < 90 && angle2 < 90 && angle3 < 90)
            {
                cout << "It is Acute Triangle" << endl;
            }
            else if (angle1 == 90 || angle2 == 90 || angle3 == 90)
            {
                cout << "It is Right Triangle" << endl;
            }
            else if (angle1 > 90 || angle2 > 90 || angle3 > 90)
            {
                cout << "It is Obtuse Triangle" << endl;
            }
            }
        }

        else
        {
            cout << "This is not a Triangle";
        }
        }
    return 0;
}
