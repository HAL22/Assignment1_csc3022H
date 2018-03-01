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
#include <stdio.h> // for upper case
#include <ctype.h> // for upeer case
#include <sstream> // for grading
#include <array>
#include <stdlib.h>




using namespace std;

namespace FLTTHE004{

  std::vector<StudentRecord> StudentVector;
  std::vector<StudentRecord> StudentVector2;


  void convert(std::string& s){      // converts the student num to upper case

    for(unsigned int i=0; i<s.length(); i++){
      s[i] = toupper(s[i]);
    }


  }

  void AddStudent(std::string name,std::string surname,std::string studentnum,std::string classrecord){

    StudentRecord s;
    int found=0;

    convert(studentnum);

    s.Name=name;
    s.Surname=surname;
    s.StudentNumber=studentnum;
    s.ClassRecord=classrecord;



  //  cout << s.StudentNumber << endl;


    for(unsigned int i=0;i<StudentVector2.size();i++){
       if(StudentVector2.at(i).StudentNumber == s.StudentNumber){
          cout << "Duplicate found,but already submitted to the database" << endl;
          found=1;
          break;
    }
     }

    //cout << found;

    if(found==0){
    for(unsigned int i=0;i<StudentVector.size();i++){
      if(StudentVector.at(i).StudentNumber == s.StudentNumber){
         cout << "Duplicate found" << endl;
         StudentVector.erase(StudentVector.begin()+i);
         cout << "Duplicate deleted, new info updated" << endl;
         break;
      }
    }



     StudentVector.push_back(s);}




    //cout << StudentVector.size() << endl ;

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
    //fileread >> word;

    std::getline(fileread,word);

    while(fileread.good()){

      cout << word << endl;
      //fileread >> word;
      std::getline(fileread,word);

    }

  }

  std::string toString(StudentRecord s){

    return s.Name+"  "+s.Surname+"   "+s.StudentNumber+"        "+s.ClassRecord;

  }

  void SavetoDatabase(){

    StudentVector.swap(StudentVector2);
    StudentVector.clear();

    ofstream myfile;
    myfile.open("Database.txt",fstream::app);
    for(unsigned int i=0;i<StudentVector2.size();i++){

      myfile << toString(StudentVector2.at(i)) << endl;

    }

    myfile.close();






  }

  void DisplayData(std::string studentnum){

    bool found=false;

    bool found2=false;

    if(StudentVector.size()>0){



      for(unsigned int i=0;i<StudentVector.size();i++){
        if(StudentVector.at(i).StudentNumber == studentnum){

          found=true;
          found2=true;
          cout << toString(StudentVector.at(i)) << endl;

        }

      }



    }else{
      found=false;
    }

    if(found==false){

      for(unsigned int i=0;i<StudentVector2.size();i++){
        if(StudentVector2.at(i).StudentNumber == studentnum){
          found2=true;
          cout << toString(StudentVector2.at(i)) << endl;

        }

      }


    }


 if(found2==false){
   cout << "Student number not in the record" << endl;
 }




  }

  void Grade(std::string studentnum){


  convert(studentnum);

    bool found=false;
    bool found2=false;
    std::string grade;
    unsigned int sum=0;

    if(StudentVector.size()>0){



      for(unsigned int i=0;i<StudentVector.size();i++){
        if(StudentVector.at(i).StudentNumber == studentnum){

          found=true;
          found2=true;
          grade=StudentVector.at(i).ClassRecord;


        }

      }



    }else{
      found=false;
    }

    if(found==false){

      for(unsigned int i=0;i<StudentVector2.size();i++){
        if(StudentVector2.at(i).StudentNumber == studentnum){

          found2 =true;

          grade=StudentVector.at(i).ClassRecord;

        }

      }


    }


    // calcualting the Grade

    if(found2==true){

  unsigned  int arr[grade.length()];


    unsigned int i=0;
    stringstream ssin(grade);

  //  cout << grade << endl;

    while(ssin.good() && i<grade.length()){


      ssin >> arr[i];
      sum=sum+arr[i];
      i++;


    }



   float average = sum/i;



  cout << "The average is  "<< average<< endl;}

  if(found2==false){
    cout << "The student number is not in the database" << endl;
  }





  }








}
