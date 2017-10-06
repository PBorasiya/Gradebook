#include "StudentType.h"
#include "StudentType.cpp"
// Header file for Sorted List ADT.
struct NodeType;

class SortedType
{
public:
  SortedType();     // Class constructor
  ~SortedType();    // Class destructor

  bool IsFull() const;
  int  GetLength() const;
  void MakeEmpty();
  StudentType GetItem(StudentType& item, bool& found);
  void PutItem(StudentType item);
  void DeleteItem(StudentType item);
  void ResetList();
  StudentType GetNextItem();

private:
  NodeType* NodeData;
  int length;
  NodeType* Current;
};

