// The following declarations and definitions go into file
// ItemType.h.
#include <fstream>
#include <string>
using namespace std;

class StudentType
{
    public:
        StudentType();
        void   Print(std::ostream&) const;
        void Initialize(string name,int num) ;
    private:
        string Stud_name;
        int stud_num;

 };

