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
#include <sstream> // for grading
#include <array>
#include <stdlib.h>


using namespace std;
using namespace FLTTHE004;

void displaymenu(){

  cout <<"1. Add student"<<endl;
  cout <<"2. Read database"<<endl;
  cout <<"3. Save database"<<endl;
  cout <<"4. Display given student data"<<endl;
  cout <<"5. Grade student"<<endl;
  cout << "q: Quit"<< endl;

}


int main(){


  string ans="";
  string name;
  string surname;
  string studentnum;
  string classrecord;


  displaymenu();

  cout << "Pick an option,press the number you want or q(to quit)" << endl;
  getline(cin,ans);


  for(;;){



    if(ans=="1"){

      cout << "Enter name" << endl;
      getline(cin,name);
      cout << "Enter surname" << endl;
      getline(cin,surname);
      cout << "Enter studentnum" << endl;
      getline(cin,studentnum);
      cout << "Enter classrecord" << endl;
      getline(cin,classrecord);

      AddStudent( name,surname,studentnum,classrecord);



      cout << "Function AddStudent() called" << endl;





    }

  else  if(ans=="2"){
      ReadDatabase();

      cout << "Function ReadDatabase() called" << endl;




    }

  else  if(ans=="3"){

      SavetoDatabase();

      cout << "Function SavetoDatabase() called" << endl;



    }

  else  if(ans=="4"){
      cout << "Enter Student Number" << endl;
      cin >> studentnum;

      DisplayData(studentnum);

      cout << "Function DisplayData() called" << endl;


    }


  else  if(ans=="5"){
      cout << "Enter Student Number" << endl;
      cin >> studentnum;

      Grade( studentnum);

      cout << "Grade() called" << endl;


    }

  else  if(ans=="q"){
      cout << "exiting program" << endl;
      break;
    }

    else{cout << "Wrong input*********" << endl;}



    displaymenu();

    cout << "Pick an option,press the number you want or q(to quit)" << endl;
    getline(cin,ans);





  }


  return 0;


}
