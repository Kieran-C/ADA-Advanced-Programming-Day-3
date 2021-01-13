//https://repl.it/@KieranCaruana/FileExists#main.cpp
#include <iostream>
#include <sys/stat.h>
#include <ctime>

struct stat buf;

bool fileExists(const std::string& file) {
  return (stat(file.c_str(), &buf) == 0);
}

int main() {
  std::string fileName;
  std::cout << "Filename to check: ";
  std::cin >> fileName;

  if(fileExists(fileName)) {
    std::cout << "File does exists!";
    std::cout << "\n" << fileName << ", " << buf.st_size << " bytes, last modified: " << std::ctime(&buf.st_mtime) << "\n\n";
  }else{
    std::cout << "File does not exist!";
  }
}
