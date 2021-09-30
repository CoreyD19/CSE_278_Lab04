#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main(int argc, char *argv[]){
    
    if (argc == 1 || argc > 2){
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
    else if(s=="Q3"){
        vector<int> grades;
        vector<string> names;
        std::unordered_map<std::string, int> pairMap;
        int x;
        std::string key;
        std::string n;
        ifstream inFile;
        ifstream inFile2;
        inFile.open("input.txt");
         while(inFile >> x){
            grades.push_back(x);
    }
    inFile2.open("NameFile.txt");
    while(inFile2 >> n){
        names.push_back(n);
    }

    for(int i = 0; i < grades.size(); i++){
    pairMap.insert(std::pair<std::string,int> {names[i],grades[i]});    
    }   
        std::cout << "Enter a name: ";
        std::cin >> key;
  std::unordered_map<std::string,int>::const_iterator found = pairMap.find (key);
   if ( found == pairMap.end() )
    std::cout << "Not exists";
  else
    std::cout << found->second;
    
}
    return 0;
}