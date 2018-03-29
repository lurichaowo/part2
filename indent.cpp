#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include "indent.h"
#include "unindent.h"

using namespace std;

int countChar(string line, char c){
	int count = 0;
	for (int i = 0; i < line.length(); ++i)
	{
		if (line[i] == c){
			count++;
		}
	}
	return count;
}


string fixIndent(string filename){
	string new_s;
	ifstream fin(filename); //opeing file
	if (fin.fail()){ //fail test
		cerr << "File cannot be opened for reading" << endl;
		exit(1);
	}
	string line;
	//std::ostringstream << removeLeadingSpaces("bad-code.cpp"));
	int b_count = 0;
	while (getline(fin, line)){
		cout << "fixIndent line: " << line << endl;
		for (int i = b_count; i > 0; --i)
		{
			cout << "forloop run\n";
			new_s += "\t";
			cout << "CURRENT NEW_S: \n" << new_s << endl;
		}
		if (countChar(line, '{') > 0)
		{
			cout << "counting {\n" << endl;
			b_count = b_count + countChar(line, '{');
			cout << "bcount: " << b_count << endl;
		}
		if (countChar(line, '}') > 0)
		{
			b_count = b_count - countChar(line, '}');
		}
		new_s += line + "\n";
		cout << "FINAL NEW_S: \n" << new_s << endl;
	}
	return new_s;
}
