/*
	Miller, Kyle 
	Foo, Brandon
	Project 1
	CS240
*/

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#ifndef WIKI_H
#define WIKI_H

class WikiProcess{
	private:
		/*
			In file stream
		*/
		std::ifstream inFile;

		/*
			Out file stream
		*/
		std::ofstream outFile;

		/*
			Vector to store string from file
		*/
		std::vector<std::string> stringVector;

	public:

		/*
			Concstructor
		*/
		WikiProcess(std::string fileName);

		/*
			Read string data from file
			@param fileName - File to open
		*/
		void readFromFile(std::string fileName);

		void displayVector();
	
};
#endif //WIKI_H