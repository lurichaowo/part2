#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>
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
	//Created a std::stringstream for storing the unindented bad-code file.
	std::stringstream unindented;
	//Storing unindented code in stream.
	unindented << removeLeadingSpaces("bad-code.cpp");
	int b_count = 0;
	while (getline(unindented, line)){
		//Added section for less indentation if } is first character.
		if (line[0] == '}')
			b_count--;
		for (int i = b_count; i > 0; --i)
		{
			new_s += "\t";
		}
		if (countChar(line, '{') > 0)
		{
			b_count = b_count + countChar(line, '{');
		}
		if (countChar(line, '}') > 0)
		{
			b_count = b_count - countChar(line, '}');
		}
		//Added original line back here to result.
		new_s += line + "\n";
	}
	return new_s;
}
