// Written by Simon Cahill
// Copyright (c) 2016
// All Right Reserved
// Copies and modifications of this file are prohibited and punishable by law,
// unless done with EXPRESS PERMISSION by the author of this file.

#ifndef UI_H_INCLUDED
#define UI_H_INCLUDED

#include <windows.h>

///////////////////////////////////////
/// \brief Gets the length of the console
///         window by columns.
///////////////////////////////////////
int getConsoleLen();

///////////////////////////////////////
/// \brief Gets the height of the console
///         window by rows.
///////////////////////////////////////
int getConsoleHeight();

///////////////////////////////////////
/// \brief Converts an X and a Y value
///         to a COORD struct.
///////////////////////////////////////
COORD getCoord(short x, short y);

///////////////////////////////////////
/// \brief Sets the position of the
///         cursor in the window to the
///         given coordinates.
///////////////////////////////////////
void setCursorPosition(short x, short y);

///////////////////////////////////////
/// \brief Prints to the centre (X-axis)
///         of the console window.
///////////////////////////////////////
void printCentre(char *str, short yCoord);

///////////////////////////////////////
/// \brief Prints to the right side of
///         the console window.
///////////////////////////////////////
void printRight(char *str, short yCoord);

///////////////////////////////////////
/// \brief Prints to the centre (X/Y axis)
///         of the console window.
///////////////////////////////////////
void printXYCentre(char *str);

///////////////////////////////////////
/// \brief Prints a given string to the
///         top row in the middle of the
///         console screen.
///////////////////////////////////////
void printTopCentre(char *str);

///////////////////////////////////////
/// \brief Prints a given string to the
///         bottom row in the middle of
///         the console screen.
///////////////////////////////////////
void printBottomCentre(char *str);

///////////////////////////////////////
/// \brief Prints a progress bar to the
///         top of the console screen.
///////////////////////////////////////
void printProgressBar(int percent, int startFrom);

///////////////////////////////////////
/// \brief Clears the console screen
///         by scrolling through the rows
///         and columns of the screen,
///         and clearing each char.
///         Gives it a cool retro-look.
///////////////////////////////////////
void clearScreen();

///////////////////////////////////////
/// \brief Clears a single line in the
///         console.
///////////////////////////////////////
void clearLine(short row);

///////////////////////////////////////
/// \brief Clears a single column in the
///         console.
///////////////////////////////////////
void clearColumn(short col);

///////////////////////////////////////
/// \brief Clears the top line in the
///         console.
///////////////////////////////////////
void clearTopLine();

///////////////////////////////////////
/// \brief Clears the bottom line in the
///         console.
///////////////////////////////////////
void clearBottomLine();

///////////////////////////////////////
/// \brief Clears the screen in a cool
///         retro cinematic way!
///////////////////////////////////////
void cinematicClear();

///////////////////////////////////////
/// \brief Prints the welcome screen
///         in a cool cinematic
///////////////////////////////////////
void printWelcomeScreen();

///////////////////////////////////////
/// \brief Prints the main menu to the
///         screen. This method does NOT
///         wait for ANY type of input.
///         It prints, and exits.
///////////////////////////////////////
void printMainMenu(int selection);

///////////////////////////////////////
/// \brief Prints any given text to the
///         left side of the console at
///         the given Y coords.
///////////////////////////////////////
void printLeft(char *str, short yCoord);

///////////////////////////////////////
/// \brief Prints an error in a cool
///         retro-style message box.
///////////////////////////////////////
void printError(char *msg);

///////////////////////////////////////
/// \brief Prints a message in a cool
///         retro-style message box.
///////////////////////////////////////
void printMessage(char *title, char *msg);

///////////////////////////////////////
/// \brief Clears all the lines between
///         the from and to param values.
///         Includes the actual lines, too.
///////////////////////////////////////
void clearLines(short from, short to);

///////////////////////////////////////
/// \brief Prints a message similar to
///         the \see printMessage
///         function. The main difference,
///         is that this function will
///         print multiple lines (max 5)
///         in to the message box.
///         This is idea when displaying
///         complex errors and
///         notifications.
///////////////////////////////////////
void printMultilineMsg(char *title, char lines[5][61]);

///////////////////////////////////////
/// \brief Prints a message similar to
///         the \see printError
///         function. The main difference,
///         is that this function will
///         print multiple lines (max 5)
///         in to the message box.
///         This is idea when displaying
///         complex errors and
///         notifications.
///////////////////////////////////////
void printMultilineError(char lines[5][61]);

#endif // UI_H_INCLUDED