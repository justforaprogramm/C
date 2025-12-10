#include "sqlite.h"

int sqliteStart(void){
    sqlite3 *db;
    int rc;

    rc = sqlite3_open("Contacts.db", &db);

    if (!openDBHelper(rc, db)) {
        sqlite3_close(db);
        return 1;
    }

    return 0;
}

int openDBHelper(int rc, sqlite3 *db)
{
    if(rc)
    {
        #ifdef SQLITE_DEBUG
            printf("SQLITE_DEBUG: Can't open database: %s\n", sqlite3_errmsg(db));
        #endif //SQLITE_DEBUG
    }
    else 
    {
        #ifdef SQLITE_DEBUG
            printf("SQLITE_DEBUG: Opened database successfully\n");
        #endif //SQLITE_DEBUG
        sqlite3_close(db);
    }
    return 1;
}
