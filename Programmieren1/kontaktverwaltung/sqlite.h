/**
 * COPYRIGHT Benjamin Schmid <inf25189@lehre.dhbw-stuttgart.de>
 */

/**
 * includes
 */
#include <stdio.h>
#include <sqlite3.h>

#ifndef SQLITE
#define SQLITE
    int mySqlite(int exec);
#endif //SQLITE

/**
 * defines
 */
//#define SQLITE_DEBUG

/**
 * private functions in "main.c"
 */
int openDBHelper(int, sqlite3*);
int makeTable(void);