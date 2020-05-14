#include <iostream>
#include <windows.h>
#include <map>
#include <string>
#include "Select.hpp"

using namespace std;

int main(){
  Select s;
  //Create map to store drive letters and their names
  map<string, string> drives;
  //Fill map with parsed drive letters and names
  s.parseBuffer(drives);
  //Get drive letter from user
  string d = s.pickDrive(drives);
}