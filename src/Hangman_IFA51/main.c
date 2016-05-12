// Written by Simon Cahill
// Copyright (c) 2016
// All Rights Reserved
// Copies and modifications of this file are prohibited and punishable by law,
// unless done with EXPRESS PERMISSION by the author of this file.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <winioctl.h>

// Project includes
#include "main.h"
#include "systemio.h"
#include "words.h"
#include "ui.h"

int main() {

    char *welcome = "Welcome to Hangman";
    char *by = "By Simon C., Patrick M., Sergey S.";

    printXYCentre(welcome);
    //printf(welcome);
    //SetCursorPos(windowSize.dwSize.X) / 2 - strlen(&by) / 2, 4);
    //printf(by);

    // Create directories needed by the program
    createDirectories();

    // Check if word files exist.
    struct WordCategories wordCategories;
    wordCategories = getWords();

    return 0;
}
