#include "hw4sortedType.h"



struct StudentTe
{
 string stdName;
  int stdNum;
 Grade gr;
 };


struct NodeType
{
  StudentType info;
  NodeType* next;
};

SortedType::SortedType()  // Class constructor
{
  length = 0;
  NodeData = NULL;
}

bool SortedType::IsFull() const
{
  NodeType* location;
  try
  {
    location = new NodeType;
    delete location;
    return false;
  }
  catch(std::bad_alloc exception)
  {
    return true;
  }
}

int SortedType::GetLength() const
{
  return length;
}

void SortedType::MakeEmpty()
{
  NodeType* tempPtr;

  while (NodeData != NULL)
  {
    tempPtr = NodeData;
    NodeData = NodeData->next;
    delete tempPtr;
  }
  length = 0;
}

