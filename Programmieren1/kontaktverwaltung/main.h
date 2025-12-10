/**
 * COPYRIGHT Benjamin Schmid <inf25189@lehre.dhbw-stuttgart.de>
 */

/**
 * includes
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * files
 */
#include "sqlite.h"

/**
 * defines
 */
//#define DEBUG
#define HELP_LINE 28
#define INPUT_BUFFER 50

/**
 * private functions in "main.c"
 */
int help(void);
int addContact(void);
int editContact(void);
int removeContact(void);
int getContacts(void);
int getContact(void);
int giveAnswer(char[INPUT_BUFFER]);