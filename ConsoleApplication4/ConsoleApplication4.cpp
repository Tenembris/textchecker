#include <iostream>     // std::cout
#include <fstream> 
#include <vector>
                    // std::ifstream
using namespace std;

int main() {

    ifstream ifs("test.txt", ifstream::in);

    string input;
    vector<string> names;
    while (ifs >> input ) 
    {
        int pos = input.find(":");
        string sub = input.substr(pos + 1);
        names.push_back(input);
        cout << sub;
    }

  

   

    return 0;

   
}