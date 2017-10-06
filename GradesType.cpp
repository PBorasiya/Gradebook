// The following definitions go into file ItemType.cpp.
#include <fstream>
#include <iostream>
#include "GradesType.h"
using namespace std;

GradesType::GradesType()
{
  programwork[0]=0;
   testgrades[0]=0;
  finalexamgrades[0]=0;
}

void GradesType::Initialize(int pgmgrade,int testgrade,int fexgrade)
{
  programwork[0]=pgmgrade;
    testgrades[0]=testgrade;
    finalexamgrades[0]=fexgrade;
}

void GradesType::Print(std::ostream& out) const
// pre:  out has been opened.
// post: value has been sent to the stream out.
{
  out << programwork[0]<<" "<<testgrades[0]<<" "<<finalexamgrades[0];
}
