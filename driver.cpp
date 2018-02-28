// Driver class by Thethela Faltein. Contains main()
//26 February 2018
//Part of assignment 1

#include <iostream>
#include "database.h"
#include <vector>
#include <fstream>
#include <cstdlib>
#include <stdio.h> // for upper case
#include <ctype.h> // for upeer case


using namespace std;
using namespace FLTTHE004;


int main(){

  AddStudent("Thethela","Faltein","FLTTHE004","43 34 12");
  AddStudent("Thethela the great","Faltein","FLTTHE003","43 34 12");

  SavetoDatabase();

  AddStudent("Thetwed","Fd2ed","FLTTHE004","43 34 12");


  return 0;


}
