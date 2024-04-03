#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
   fstream newfile ,secondnewfile;
//    newfile.open("tpoint.txt");  // open a file to perform write operation using file object
//    //checking whether the file is open {
//       newfile<<"kkkkkkTutorials point \n"; //inserting text
//       newfile.close(); //close the file object
int count=0;
   
   newfile.open("abc.txt"); //open a file to perform read operation using file object
   secondnewfile.open("nfile.txt");
   if (newfile.is_open() and secondnewfile.is_open()){ //checking whether the file is open
      string tp;
      while(getline(newfile, tp)){ //read data from file object and put it into string.
         secondnewfile << tp <<" "; //print the data of the string
      }
      newfile.close(); //close the file object.
      secondnewfile.close();
   }
}