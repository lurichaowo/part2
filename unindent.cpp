
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
	//getline(fin, line);
	
	while (getline(fin, line)){
		//cout << "printing line: " << line << endl;		
		for (int i = 0; i < line.length(); ++i)
		{
			char c = line[i];
			if (!(c == ' ' || c == '\t')){
				//cout << "IF STATEMENT char: " << c << endl;
				new_s += line.substr(i);
				new_s += "\n";
				break;
			}

		}
	}
	fin.close();
	return new_s;
}
