#include <iostream>
#include "unindent.h"
#include "indent.h"

using namespace std;

int main(){
	string filename = "bad-code.cpp";
	string new_s;
	cout << "Fixing bad-code.cpp" << endl;
	new_s = removeLeadingSpaces(filename);
	cout << "REMOVE LEADING SPACES NEW_S: \n" << new_s << endl;
	new_s = fixIndent(filename);
	return 0;
}
