// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>



int main()
{
	//vector to hold consonants that will be encoded

	std::vector<char> EncodeChars = { 'b', 'c', 'd', 'f', 'g','h', 'j', 'k', 'l','m','n','p','q','r','s','t','v','w','x','z' };


	//take in a string input
	GetInput();


	
	//all consenants get doubled and a "o" added in the middle
		//ie r -> ror, t ->tot

	//want to scan input string one character at a time and add to new string given the encoding rules




    return 0;
}





std::string GetInput()
{
	std::cout << "Enter text to be encoded: \n";

	std::string UserText;
	std::cin >> UserText;

	return UserText;

}




std::string EncodeString(std::string StartString)
{
	//set up new string 
}


std::string ConsonantTest(char CurrentChar, std::vector<char> EncodeChars)
{
	
	if (std::find(EncodeChars.begin(), EncodeChars.end(), CurrentChar) != EncodeChars.end() )
	{
		//char found
	}
	else
	{
		//char not found
	}


}

