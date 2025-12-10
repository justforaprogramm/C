/**
 * COPYRIGHT Benjamin Schmid <inf25189@lehre.dhbw-stuttgart.de>
 */

#include "sqlite.h"

int mySqlite(int exec){
    sqlite3 *db;
    int rc;

    rc = sqlite3_open("Contacts.db", &db);

    if (!openDBHelper(rc, db)) {
        sqlite3_close(db);
        return 1;
    }

    switch(exec)
    {
        case 0:
            //start
            break;
        case 1:
            (void)makeTable();
            break;
        case 2:
            //addContact
            break;
        case 3:
            //editContact
            break;
        case 4:
            //removeContact
            break;
        case 5:
            //getContact
            break;
        case 6:
            //getContacts
            break;
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
        return 0;
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

int makeTable(void)
{
    return 0;
}