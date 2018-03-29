#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include "indent.h"

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
	getline(fin, line);

	int b_count = 0;
	while (fin >> line){
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
		new_s += "\n";
	}
	return new_s;
}
