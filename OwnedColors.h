#pragma once
#include "Colors.h"
#include <vector>

//@author Jasmine Krahn
// holds all colors user input that they own in a linked list
class OwnedColors
{
public:
	OwnedColors() {}
	~OwnedColors() {}
	void vectorAdd(Colors color) {
		ColorsV.push_back(new Colors(color.getName(), color.getHexCode()));
	}
	void vectorDelete(Colors color) {
		std::vector<Colors*>::iterator c;
		for (int i = 0;i < ColorsV.size();i++) {
			if (ColorsV.at(i)->getHexCode() == color.getHexCode() && ColorsV.at(i)->getName() == color.getName()) {
				c = ColorsV.begin() + i;
				break;
			}
		}
		ColorsV.erase(c);
	}
	std::vector<Colors*> vectorReturn() {
		return ColorsV;
	}
private:
	std::vector<Colors*> ColorsV;
};