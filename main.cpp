#include <iostream>
#include "unindent.h"
#include "indent.h"

using namespace std;

int main(){
	string filename = "bad-code.cpp";
	string new_s;
	cout << "Fixing bad-code.cpp\n" << endl;
	new_s = removeLeadingSpaces(filename);
	cout << "RESULT OF DE-INDENTATION: \n" << new_s << endl;
	new_s = fixIndent(filename);
	cout << "RESULT OF RE-INDENTATION: \n" << new_s << endl;
	return 0;
}
