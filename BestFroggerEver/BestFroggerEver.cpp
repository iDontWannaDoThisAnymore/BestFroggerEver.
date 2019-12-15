#include <iostream>  
#include <Windows.h>  
#include "FAriasSimpleGraphics.h"

void SquarePixels();

void SquarePixels()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 10;                   // Width of each character in the font
	cfi.dwFontSize.Y = 10;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}

int main()
{
	SquarePixels();
	std::cout << "basta ya";
}

/*		COSAS A RECORDAR
-	Aprenderse SquarePixels
*/