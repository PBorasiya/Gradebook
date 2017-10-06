#include <iostream>

using namespace std;

int main()
{

string n="pranav";
int number=100;
SortedType *node=new SortedType();
StudentType *stud=new StudentType();
Grade *grades=new Grade();
grades->program[0]=10;
grades->tests[0]=10;
grades->finalexam[0]=10;
&stud->Initialize(n,number);



system("pause");
return 0;
}
