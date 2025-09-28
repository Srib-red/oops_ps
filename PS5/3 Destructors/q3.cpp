#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
    ofstream file;
    string filename;
public:
    FileHandler(string fname, string content) {
        filename = fname;
        file.open(filename);
        if (file.is_open()) {
            file << content;
            cout << "File created with content: \n##" << content << "##" << endl;
        } else {
            cout << "Failed to open file " << filename << endl;
        }
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();  // Automatically close the file
            cout << "Object out of scope, file destroyed and closed!!!" << endl;
        }
    }
};

int main() {
    FileHandler f1("test.txt", "AAL IZZ WELL");
    return 0;
}
