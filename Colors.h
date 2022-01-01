#pragma once
using namespace std;

//@author Jasmine Krahn
//holds data for a single color including name and hexcode
class Colors
{
public:

	Colors()
	{
		name = "";
		hexCode = "";
	}
	
	Colors(string newName, string newHexCode)
	{
		name = newName;
		hexCode = newHexCode;
	}

	string getName()
	{
		return name;
	}

	string getHexCode()
	{
		return hexCode;
	}
private:
	string name;
	string hexCode;
};