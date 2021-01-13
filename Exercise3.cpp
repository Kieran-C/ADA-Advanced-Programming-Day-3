//https://repl.it/@KieranCaruana/FileReader#main.cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <algorithm>

struct stat buf;

bool fileExists(const std::string& file) {
  return (stat(file.c_str(), &buf) == 0);
}

void read(std::string fileName)
{
  std::ifstream fin;
  std::string line;
  int lineNumber = 1;
  // Open an existing file
  fin.open(fileName);
  while(!fin.eof()){
    fin>>line;
    std::replace(line.begin(), line.end(), ',', ' ');
    std::cout<<lineNumber << ") " << line<<"\n";
    lineNumber += 1;
  }
  std::cout << "\nTotal lines read: " << lineNumber-1 << "\n";
}

int main() {
  std::string fileName;
  std::string data;
  while(true){
    std::cout << "Please enter a valid filename: ";
    std::cin >> fileName;
    if(fileExists(fileName)) {
      read(fileName);
      return 1;
    }else{
      std::cout << "File does not exist!\n\n";
    }
  }
}
