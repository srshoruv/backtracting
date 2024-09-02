#include <iostream>
#include <string>
using namespace std;

void printSubs(string str, string sub) {
    if (str.size()==0) {
        cout << sub << endl;
        return;
    }
    char ch = str[0];
    printSubs(str.substr(1, str.size()-1), sub+ch);
    printSubs(str.substr(1, str.size()-1), sub);
}

int main() {
    string str = "abc";
    string sub = "";
    printSubs(str,sub);
}