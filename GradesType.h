#include <iostream>
using namespace std;

class GradesType
{
public:
  GradesType();
  void Print(std::ostream&) const;

private:
int programwork[6];
int testgrades[4];
int finalexamgrades[1];

};

