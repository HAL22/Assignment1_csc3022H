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

  void AddStudent(std::string name,std::string surname,std::string studentnum,std::string classrecord);

  void ReadDatabase();
/**
  void SavetoDatabase();

  void Grade(std::string studentnum);*/

}




#endif
