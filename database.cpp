// Database emulator by Thethela Faltein
// 26 February 2018
//Part of assignment 1

#include "database.h"
#include "Struct.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>


using namespace std;

namespace FLTTHE004{

  std::vector<StudentRecord> StudentVector;


  void AddStudent(std::string name,std::string surname,std::string studentnum,std::string classrecord){

    StudentRecord s;

    s.Name=name;
    s.Surname=surname;
    s.StudentNumber=studentnum;
    s.ClassRecord=classrecord;

    StudentVector.push_back(s);

    cout << StudentVector.size() << endl ;

  }

  void ReadDatabase(){

    std::string filename="Database.txt";
    ifstream fileread;

    fileread.open(filename);

    if(!fileread.is_open()){
      cout << "Cannot open file" << endl;
      exit(EXIT_FAILURE);
    }

    std::string word;
    fileread >> word;

    while(fileread.good()){

      cout << word << endl;
      fileread >> word;


    }





  }








}
