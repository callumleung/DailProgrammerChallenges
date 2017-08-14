// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

std::string GetInput();
std::string EncodeString(std::string, std::vector<char>);
std::string ConsonantTest(char, std::vector<char>);

int main()
{
	//vector to hold consonants that will be encoded

	std::vector<char> EncodeChars = { 'b', 'c', 'd', 'f', 'g','h', 'j', 'k', 'l','m','n','p','q','r','s','t','v','w','x','z' };


	//take in a string input
	std::string UserInput = GetInput();

	//encode the given string into the Rovarspraket language
	std::string EncodedString = EncodeString(UserInput, EncodeChars);

	std::cout << EncodedString << std::endl;

    return 0;
}





std::string GetInput()
{
	std::cout << "Enter text to be encoded: \n";

	std::string UserText = "";
	std::cin >> UserText;

	return UserText;

}




std::string EncodeString(std::string StartString, std::vector<char> EncodeChars)
{
	//set up new string 
	std::string EncodedString = "";

	//loop through the characters of the given string 
		//shouldnt need to deal  with spaces and non-letter input since they will be caught in the else statement of ConsonantTest

	for (char& Letter: StartString)
	{
		//call ConsonantTest on the current character and add to the new encoded string
		


		//see what happens when reach  space 
		std::string TempString = ConsonantTest(Letter, EncodeChars);

		EncodedString += TempString;


	}


	//call ConsonantTest on the current character and add to the new encoded string

	return EncodedString;


}


std::string ConsonantTest(char CurrentChar, std::vector<char> EncodeChars)
{
	
	if (std::find(EncodeChars.begin(), EncodeChars.end(), CurrentChar) != EncodeChars.end() )
	{
		//char found
		//want to return 3 letter string consisting of char+o+char
	
		std::string s(1, CurrentChar);
		s += "o";
		s += CurrentChar;

		return s;
	}
	else
	{
		//char not found
		//return the char

		//this should work to cast to string but its not for some reason
		std::string s(1, CurrentChar);

		//alternative casting method
		//std::stringstream ss;
		//std::string target;
		
		//ss << CurrentChar;
		//ss >> target;



		return s;
	}


}

