#include "WikiProcess.h"
using namespace std;

WikiProcess::WikiProcess(string fileName){
	readFromFile(fileName);
}

void WikiProcess::readFromFile(string fileName){
	inFile.open(fileName);
	if(inFile.is_open())
	{
		string word;
		string line;
		while(getline(inFile,line))
		{
			stringstream ss;
			ss<<line;
			while(ss>>word)
			{
				//add to vector
				stringVector.push_back(word);
			}
		}

	}
}

/*
	For Debugging purposes
*/
void WikiProcess::displayVector()
{
	cout << "size = " << stringVector.size() << endl;
	for (vector<string>::iterator it = stringVector.begin(); it != stringVector.end(); ++it)
    {	
    	std::cout << *it << " ";
    }
}