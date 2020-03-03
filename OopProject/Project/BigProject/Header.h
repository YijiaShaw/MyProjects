#ifndef Header_h
#define Header_h
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <Windows.h>

using namespace std;

enum ConsoleTextColor {
	RED = FOREGROUND_INTENSITY | FOREGROUND_RED,
	GREEN = FOREGROUND_INTENSITY | FOREGROUND_GREEN,
	BLUE = FOREGROUND_INTENSITY | FOREGROUND_BLUE,
	YELLOW = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN,
	PURPLE = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE,
	CYAN = FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE,
	WHITE = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	BLACK = 0
};

enum ConsoleBackGroundColor {
	_RED = BACKGROUND_INTENSITY | BACKGROUND_RED,
	_GREEN = BACKGROUND_INTENSITY | BACKGROUND_GREEN,
	_BLUE = BACKGROUND_INTENSITY | BACKGROUND_BLUE,
	_YELLOW = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN,
	_PURPLE = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE,
	_CYAN = BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE,
	_WHITE = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
	_BLACK = 0
};
const double pi = 3.1415926, e = 2.71828;
#endif /* Header_h */