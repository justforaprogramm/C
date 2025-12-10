/**
 * includes
 */
#include <stdio.h>
#include <sqlite3.h>

#ifndef SQLITE
#define SQLITE
    int sqliteStart(void);
#endif //SQLITE

/**
 * defines
 */
//#define SQLITE_DEBUG

/**
 * private functions in "main.c"
 */
int openDBHelper(int, sqlite3*);