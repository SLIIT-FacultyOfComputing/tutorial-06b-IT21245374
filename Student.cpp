#include "Student.h"
#include <iostream>
#include <cstring>

char sname[20];
int sid;

// Assign studentId and name
Student::assignDetails(sname , sid) 
{
   studentid = sid;
   name = sname ;
}

// Display StudentId and Name
Student::display() 
{
  cout << mystd.name <<endl;
  cout <<mystd.studentid<<endl;
} 

