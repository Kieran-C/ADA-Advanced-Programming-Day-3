//https://repl.it/@KieranCaruana/File-Writer#main.cpp
#include <iostream>//include iostream libary
#include <sys/stat.h>//include stat.h libary
#include <fstream>//include fstream libary

std::fstream fout;//initalizes fout

int main() {//opens main method
  std::string name;//initalizes name
  std::string rerun;//initalizes rerun
  fout.open("names.csv", std::ios::app); //opens or creates file
  while(true){//while loop
    std::cout << "\nEnter name: ";//prints enter name
    std::cin.clear();//clear cin
    getline(std::cin, name);//getline user input and append to name
    fout << name << ", ";//add to file name
    std::cout << "Add another: (Y/N) ";//ask to rerun
    std::cin.clear();//clear cin
    getline(std::cin , rerun);//getline rerun input
    if ((rerun == "Y") || (rerun == "y")){//if rerun input was y
    }else{return 1;}//else exit loop
  }//closing bracket
}//closing bracket
