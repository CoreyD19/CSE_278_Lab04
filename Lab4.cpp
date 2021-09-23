#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char *argv[]){
    
    if (argc == 1){
         std::cout << "Not valid arguments";
         return 0;
     } 
    std::string s = argv[1];
     if(s=="Q1"){
        std::cout << "This is the code for the first question";
    }
     else if(s=="Q2"){
         ifstream inFile;
         inFile.open("input.txt");
         int sum;
         int average;
         int num;
         int x;
         while(inFile >> x){
             sum+=x;
             num++;
         }
         average = int(sum/num);
         std::cout<< average;
     }
    
    return 0;
}
