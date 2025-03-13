//  filename:  lab3.cpp

/*
       Author:  Wei Kian Chen
  Modified by:  Matthew Kane
        Class:  CSI-240-04
   Assignment:  Lab 3
Date Assigned:  February 9, 2024
     Due Date:  February 13, 2024, 13:00

Description:
  The is a stub driver to test the Student class.

Certification of Authenticity:
  I certify that this is entirely my own work, except where I have given
  fully-documented references to the work of others.I understand the definition and
  consequences of plagiarism and acknowledge that the assessor of this assignment may, for
  the purpose of assessing this assignment:
  - Reproduce this assignment and provide a copy to another member of academic staff; and/or
  - Communicate a copy of this assignment to a plagiarism checking service(which may then
  retain a copy of this assignment on its database for the purpose of future plagiarism
  checking)
*/


#include "student.h"

int main()
{
    ifstream fin;  // Reads data FROM the file
    ofstream fout; // Writes data TO the file
    Student stu, stu2;

    const string STR= "12345", STR2 = "123456789", STR3 = "000";
    const int CREDITS = 15;
    const float GPA = 3.6;

    // initialize stu1 object (Name, ID, Credits, GPA)
   Student stu1("John Doe", STR2, CREDITS, 3.2);

    // Writing a student object into the input stream
    cout << "'istream >> Student' Overload: " << endl;
    cin >> stu;
    cout << "\n\n";

    // Printing a student object into console
    cout << "'ostream << Student' Overload: " << endl;
    cout << stu;
    cout << "\n\n";

    // Writing a student object into a file
    // Open file and make sure it works
    cout << "'ofstream << Student' Overload: (Check 'file.txt')" << endl;

    fout.open("file.txt");
    if(fout.fail())
    {
        cout << "Could not open 'file.txt'" << endl;
    }

    fout << stu;
    cout << "\n\n";

    fout.close();

    // Reading a student object from a file
    // Open file and make sure it works
    cout << "'ifstream >> Student' Overload: " << endl;

    fin.open("file.txt");
    if (fin.fail())
    {
        cout << "Could not open 'file.txt'" << endl;
    }

    fin >> stu;

    // Display the student data read from the file
    cout << stu;

    cout << "\n\n";

    fin.close();

    // Compare student ID with string (member function)
    cout << "'Student == string' (as member function) Overload: " << endl;

    if (stu == STR)
    {
        cout << "Student equals string" << endl;
    }
    else
    {
        cout << "Student does not equal string" << endl;
    }

    cout << "\n\n";

    // Compare student ID with string
    cout << "'string == Student' Overload: " << endl;

    if (STR == stu)
    {
        cout << "String provided and student are the same!" << endl;
    }
    else
    {
        cout << "String provided and student are not the same" << endl;
    }

    cout << "\n\n";

    // check student ID by comparing with other student object
    cout << "'Student == Student' Overload: " << endl;

    if (stu == stu1)
    {
        cout << "stu and stu1 have the same ID!" << endl;
    }
    else
    {
        cout << "stu and stu1 don't have the same ID!" << endl;
    }

    cout << "\n\n";

    // Compere inverse student ID with string (member function);
    cout << "'Student != string' Overload (Member function): " << endl;

    if (stu != STR)
    {
        cout << "Student ID and string provided are NOT the same!" << endl;
    }
    else
    {
        cout << "Student ID and string provided ARE the same!" << endl;
    }

    cout << "\n\n";

    // Compare inverse student ID with string
    cout << "'string != Student' Overload: " << endl;

    if (STR != stu)
    {
        cout << "Student ID and string provided are NOT the same!" << endl;
    }
    else
    {
        cout << "Student ID and string provided ARE the same!" << endl;
    }

    cout << "\n\n";

    // Compare inverse student ID with string
    cout << "'Student != Student' Overload: " << endl;

    if (stu != stu1)
    {
        cout << "Student ID and string provided are NOT the same!" << endl;
    }
    else
    {
        cout << "Student ID and string provided ARE the same!" << endl;
    }

    cout << "\n\n";

    // Assign one object to another
    cout << "'Student = Student' Overload: " << endl;
    
    cout << "Before:\n" << stu2 << endl;
    stu2 = stu;
    cout << "After\n" << stu2 << endl;

    cout << "\n\n";

    // Assign a string to a student's ID attrubute
    cout << "'Student = string' Overload: " << endl;

    cout << "Before:\n" << stu << endl;
    stu = STR3;
    cout << "After\n" << stu << endl;

    cout << "\n\n";

    // Assign an int to to a student's credits attribute
    cout << "'Student = int' Overload: " << endl;

    cout << "Before:\n" << stu << endl;
    stu = CREDITS;
    cout << "After\n" << stu << endl;

    cout << "\n\n";

    // Assign a double to a student's GPA attribute
    cout << "'Student = double' Overload: " << endl;

    cout << "Before:\n" << stu << endl;
    stu = GPA;
    cout << "After\n" << stu << endl;

    cout << "\n\n";

    // Add more completed credits to a student object (member function)
    cout << "'Student + int' Overload: " << endl;

    cout << "Before:\n" << stu << endl;
    stu + CREDITS;
    cout << "After\n" << stu << endl;

    cout << "\n\n";

    // Add more ompleted credits to a student object
    cout << "'int + Student' Overload: " << endl;

    cout << "Before:\n" << stu << endl;
    stu.setCreditCompleted(CREDITS + stu);
    cout << "After\n" << stu << endl;

    cout << "\n\n";

    // Add GPA to a student object
    cout << "'Student + double' Overload: " << endl;

    cout << "Before:\n" << stu << endl;
    stu.setGPA(stu + GPA);
    cout << "After\n" << stu << endl;

    cout << "\n\n";

    // Add GPA to a student object
    cout << "'double + Student' Overload: " << endl;

    cout << "Before:\n" << stu << endl;
    stu.setGPA(GPA+ stu);
    cout << "After\n" << stu << endl;

    cout << "\n\n";

    // Subtract credits from a student object
    cout << "'Student - int' Overload: " << endl;

    cout << "Before:\n" << stu << endl;
    stu - CREDITS;
    cout << "After\n" << stu << endl;

    cout << "\n\n";

    // Subtract credits from a student object
    cout << "'int - Student' Overload: " << endl;

    cout << "Before:\n" << stu << endl;
    stu.setCreditCompleted(CREDITS - stu);
    cout << "After\n" << stu << endl;

    cout << "\n\n";

    // Subtract GPA from a student object
    cout << "'Student - double' Overload: " << endl;

    cout << "Before:\n" << stu << endl;
    stu - GPA;
    cout << "After\n" << stu << endl;

    cout << "\n\n";

    // Subtract GPA from a student object
    cout << "'Student - double' Overload: " << endl;

    cout << "Before:\n" << stu << endl;
    stu.setGPA(GPA-stu);
    cout << "After\n" << stu << endl;

    cout << "\n\n";

    return 0;
}