// Thethela Faltein
// h file for the driver.cpp file

/**
*.h file:
*/
#ifndef DATABASE_H_INCLUDED
#define DATABASE_H_INCLUDED
#include <string>
#include <iostream>
#include <vector>
#include "Struct.h"
#include <fstream>
#include <cstdlib>

namespace FLTTHE004{

  extern std::vector<StudentRecord> StudentVector;
  extern std::vector<StudentRecord> StudentVector2;

  void AddStudent(std::string name,std::string surname,std::string studentnum,std::string classrecord);

  void ReadDatabase();

  void SavetoDatabase();

  std::string toString(StudentRecord s);

  void DisplayData(std::string studentnum);

  void Grade(std::string studentnum);

}




#endif
