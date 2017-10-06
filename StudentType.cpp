#include <fstream>
#include <iostream>
#include "StudentType.h"
#include <string>
using namespace std;


StudentType::StudentType()
{
   Stud_name ="";
   stud_num=0;

}

void StudentType::Initialize(string name,int num)
{
   Stud_name = name;
   stud_num = num;

}

void StudentType::Print(std::ostream& out) const
// pre:  out has been opened.
// post: value has been sent to the stream out.
{
  out << Stud_name<<stud_num;
}
