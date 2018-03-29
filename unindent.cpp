
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include "unindent.h"

using namespace std;

string removeLeadingSpaces(string filename){
	string new_s;
	ifstream fin(filename); //opeing file
	if (fin.fail()){ //fail test
		cerr << "File cannot be opened for reading" << endl;
		exit(1);
	}
	string line;
	getline(fin, line);
	
	while (fin >> line){
		for (int i = 0; i < line.length(); ++i)
		{
			char c = line[i];
			if (!(c == ' ' || c == '\t')){
				new_s = line.substr(i, line.length());
				new_s = new_s + "\n";
				continue;
			}

		}
	}
	return new_s;
}
