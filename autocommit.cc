// basic file operations
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <cstdlib>
using namespace std;

int main () {
  ofstream myfile;
  int a = rand() % 10;
  int b = rand() % 10;
  int c = rand() % 10;
  int d = rand() % 10;
  char message[100] ="git commit --date=\"April 0 9:05:20 2021 +0800\" -am \"temp submit\"";
  for (int i = 1; i <= 9; i++) {
      if (i == a || i == b || i == c || i ==d) {
          continue;
      }
        myfile.open ("commit.md");
        myfile << "Writing this to a file.\n" << i << endl;
        myfile.close();
        message[25] = i + 48;
        cout << message << endl;
        // system("git add -u");
        // system(message);
  }

  return 0;
}