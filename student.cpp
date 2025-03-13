//  filename:  student.cpp

/*
       Author:  Wei Kian Chen
  Modified by:  Matthew Kane
        Class:  CSI-240-04
   Assignment:  Lab 3
Date Assigned:  February 9, 2024
     Due Date:  February 13, 2024, 13:00

Description:
  The file define the Student class with operator loading.

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


/*
    Pre: The object is instantiated 
   Post: All private members are initialized to default value
Purpose: Default constructor. Initialized all the private members to default
*/
Student::Student()
{
   mName = "";
   mID = "";
   mCreditCompleted = 0;
   mGPA = 0;
}


/*
    Pre: The object is instantiated
   Post: All private members are initialized with the provided value
Purpose: Constructor. Initialized the private members with the provide value
*/
Student::Student(string name, string id, int credits, double gpa)
{
   mName = name;
   mID = id;
   mCreditCompleted = credits;
   mGPA = gpa;
}


// accessors
/*
    Pre: The object is instantiated
   Post: The credit completed is returned to the caller
Purpose: Extract the completed credits from the object
*/
int Student::getCreditCompleted()
{
   return mCreditCompleted;
}


/*
    Pre: The object is instantiated
   Post: The GPA is returned to the caller
Purpose: Extract the GPA from the object
*/
double Student::getGPA()
{
   return mGPA;
}


/*
    Pre: The object is instantiated
   Post: The student's ID is returned to the caller
Purpose: Extract the student's ID from the object
*/
string Student::getID()
{
   return mID;
}


/*
    Pre: The object is instantiated
   Post: The student's name is returned to the caller
Purpose: Extract the student's name from the object
*/
string Student::getName()
{
   return mName;
}


// mutator
/*
    Pre: The object is instantiated
   Post: The credit completed is updated
Purpose: To modify the credit completed for the Student object
*/
void Student::setCreditCompleted(int credits)
{
   mCreditCompleted = credits;
}


/*
    Pre: The object is instantiated
   Post: The GPA is updated
Purpose: To modify the GPA of the Student object
*/
void Student::setGPA(double gpa)
{
   mGPA = gpa;
}


/*
    Pre: The object is instantiated
   Post: The student's ID is updated
Purpose: To modify the student's ID of the Student object
*/
void Student::setID(string id)
{
   mID = id;
}


/*
    Pre: The object is instantiated
   Post: The student's name is updated
Purpose: To modify the student's name of the Student object
*/
void Student::setName(string name)
{
   mName = name;
}


// operator overloading


/*  Purpose:   displays an entire object by simply using <<
*       Pre:   object must be instanciated and populated
*      Post:   outputs all of an object's instance data
****************************************************************/
ostream& operator<<(ostream& in, const Student& obj)
{
    return cout << obj.mName << endl << obj.mID << endl << obj.mCreditCompleted << " " << obj.mGPA << endl;
}

/*  Purpose:   outputs an object into a file using <<
*       Pre:   object must be instanciated and populated, file must exist
*      Post:   object is now in the file
****************************************************************/
ofstream& operator<<(ofstream& file, const Student& stu)
{
    file << stu.mName << endl << stu.mID << endl << stu.mCreditCompleted << " " << stu.mGPA << endl;
    return file;
}

/*  Purpose:   displays an entire object by simply using <<
*       Pre:   object must be instanciated and populated
*      Post:   outputs all of an object's instance data
****************************************************************/
istream& operator>>(istream& in, Student& stu)
{
    cout << "Name: ";
    getline(in, stu.mName);

    cout << "ID: ";
    in >> stu.mID; 

    cout << "Credits: ";
    in >> stu.mCreditCompleted; 

    cout << "GPA: ";
    in >> stu.mGPA;

    return in;
}

/*  Purpose:   reads the Student object from the file using >>
*       Pre:   object must be instanciated and populated
*      Post:   outputs all of an object's instance data
****************************************************************/
ifstream& operator>>(ifstream& in, Student& stu)
{
    getline(in, stu.mName);
    in >> stu.mID >> stu.mCreditCompleted >> stu.mGPA;

    return in;
}

/*  Purpose:   compares the student object's id with a provided string as a member function
*       Pre:   object must be instanciated and populated
*      Post:   returns wether the string provided is equal to student's ID
****************************************************************/
bool Student::operator==(string str)
{
    if (mID == str)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*  Purpose:   compares the student object's id with a provided string
*       Pre:   object must be instanciated and populated
*      Post:   returns wether the string provided is equal to student's ID
****************************************************************/
bool operator==(string str, const Student& stu)
{
    if (stu.mID == str)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*  Purpose:   compares an ID to another student's ID
*       Pre:   Both student objects must be instanciated and populated
*      Post:   returns true or false depending if both student IDs are equal 
****************************************************************/
bool Student::operator==(const Student& stu)
{
    if (mID == stu.mID)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*  Purpose:   returns false if student's ID matches the provided string
*       Pre:   object must be instanciated and populated
*      Post:   the inverse boolean is returned if the ID matches the string
****************************************************************/
bool Student::operator!=(string str)
{
    if (mID != str)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*  Purpose:   returns false if student's ID matches the provided string
*       Pre:   object must be instanciated and populated
*      Post:   the inverse boolean is returned if the ID matches the string
****************************************************************/
bool operator!=(string str, const Student& stu)
{
    if (stu.mID != str)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*  Purpose:   returns false if student's ID matches the other student's ID
*       Pre:   objects must be instanciated and populated
*      Post:   the inverse boolean is returned if the students id match each other
****************************************************************/
bool Student::operator!=(const Student& stu)
{
    if (mID != stu.mID)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*  Purpose:   assigns the info from Student on the right to Student on the left
*       Pre:   objects must be instanciated and populated
*      Post:   both student objects now have the same info
****************************************************************/
Student Student::operator=(const Student& stu)
{
    mName = stu.mName;
    mID = stu.mID;
    mCreditCompleted = stu.mCreditCompleted;
    mGPA = stu.mGPA;

    return stu;
}

/*  Purpose:   re-assigns a student object's ID attribute
*       Pre:   objects must be instanciated and populated
*      Post:   student now has new ID
****************************************************************/
Student Student::operator=(string str)
{
    mID = str;
    return *this;
}

/*  Purpose:   assigns provided int as the credit completed by Student
*       Pre:   objects must be instanciated and populated
*      Post:   student now has new credits completed
****************************************************************/
Student Student::operator=(int credits)
{
    mCreditCompleted = credits;
    return *this;
}

/*  Purpose:   assigns provided double as the student's gpa
*       Pre:   objects must be instanciated and populated
*      Post:   student now has new gpa
****************************************************************/
Student Student::operator=(double gpa)
{
    mGPA = gpa;
    return *this;
}

/*  Purpose:   sums credits completed with number provided (member function)
*       Pre:   objects must be instanciated and populated
*      Post:   student now has more credits completed
****************************************************************/
int Student::operator+(int credits)
{
    mCreditCompleted += credits;
    return mCreditCompleted;
}

/*  Purpose:   sums credits completed with number provided
*       Pre:   objects must be instanciated and populated
*      Post:   student now has more credits completed
****************************************************************/
int operator+(int credits, const Student& stu)
{
   return stu.mCreditCompleted + credits;
}

/*  Purpose:   sums gpa with number provided
*       Pre:   objects must be instanciated and populated
*      Post:   student now has more credits completed
****************************************************************/
double Student::operator+(double gpa)
{
    return mGPA + gpa;
}

/*  Purpose:   sums gpa with number provided
*       Pre:   objects must be instanciated and populated
*      Post:   student now has more credits completed
****************************************************************/
double operator+(double gpa, const Student& stu)
{
    return stu.mGPA + gpa;
}

/*  Purpose:   subtracts credits from student object (member funtion)
*       Pre:   objects must be instanciated and populated
*      Post:   student now has less credits completed
****************************************************************/
int Student::operator-(int credits)
{
    return mCreditCompleted -= credits;
}

/*  Purpose:   subtracts credits from student object
*       Pre:   objects must be instanciated and populated
*      Post:   student now has less credits completed
****************************************************************/
int operator-(int credit, const Student& stu)
{
    return credit - stu.mCreditCompleted;
}

/*  Purpose:   subtracts gpa from student object
*       Pre:   objects must be instanciated and populated
*      Post:   student now has a smaller gpa
****************************************************************/
double Student::operator-(double gpa)
{
    return mGPA -= gpa;
}

/*  Purpose:   subtracts gpa from student object
*       Pre:   objects must be instanciated and populated
*      Post:   student now has a smaller gpa
****************************************************************/
double operator-(double gpa, const Student& stu)
{
    return gpa - stu.mGPA;
}
