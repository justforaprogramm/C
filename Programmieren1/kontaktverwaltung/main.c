/**
 * COPYRIGHT Benjamin Schmid <inf25189@lehre.dhbw-stuttgart.de>
 */

 #include "main.h"

/**
 * manages input
 */
int main(int argc, char *argv[])
{
    sqlite();
    if(argc > 1)
    {
        #ifdef DEBUG
            (void)printf("DEBUG: argument given: %s\n", argv[1]);
        #endif

        if(!giveAnswer(argv[1]))
        {
            #ifdef DEBUG
            (void)printf("DEBUG: answer was completed correctly!\n");
            #endif
        }
        return 0;
    }
    //start programm without arguments
    char input[INPUT_BUFFER];
    (void)printf("Hello from Contactmanager!\n");
    #ifdef DEBUG
        (void)printf("DEBUG: Debug print enabled!\n");
    #endif

    while(true)
    {
        (void)printf("choose Action: ");
        if(scanf("%49s", input) != 1)
        {
            #ifdef DEBUG
                (void)printf("DEBUG: scan failed!\n");
            #endif
            return 0;
        }

        #ifdef DEBUG
            (void)printf("DEBUG: argument given: %s\n", input);
        #endif

        if(!giveAnswer(input))
        {
            #ifdef DEBUG
            (void)printf("DEBUG: answer was completed correctly!\n");
            #endif
        }
        else return 0;
    }
}

/**
 * calls functions for given input
 */
int giveAnswer(char in[INPUT_BUFFER])
{
    bool exit = false;
    if(!strcmp("exit", in)) exit = true;
    else if(!strcmp("help", in)) (void)help();
    else if(!strcmp("getContacts", in)) (void)getContacts();
    else if(!strcmp("getContact", in)) (void)getContact();
    else if(!strcmp("add", in)) (void)add();
    else if(!strcmp("edit", in)) (void)edit();
    else if(!strcmp("remove", in)) (void)removeContact();
    else (void)printf("type help for help!\n");
    return exit ? 1 : 0;
}

/**
 * displays help in terminal
 */
int help(void)
{
    (void)printf("help text:\n");
    for(int i=0;i<HELP_LINE;i++) (void)printf("-"); 
    //content of help
    (void)printf("\nexit:\texits the programm\nhelp:\tshows this help text\n");

    #ifdef DEBUG
        (void)printf("DEBUG: added help\n");
    #endif
    for(int i=0;i<HELP_LINE;i++) (void)printf("-");
    (void)printf("\n");
    return 0;
}

/**
 * adds a kontakt with info
 */
int add(void)
{
    (void)printf("add text\n");
    return 0;
}

/**
 * edit a contact
 */
int edit(void)
{
    (void)printf("edit text\n");
    return 0;
}

/**
 * delete a contact
 */
int removeContact(void)
{
    (void)printf("removeContact text\n");
    return 0;
}

/**
 * gets all infos about a contacts
 */
int getContacts(void)
{
    (void)printf("Contactinfo text\n");
    return 0;
}

/**
 * gets all infos about a contact
 */
int getContact(void)
{
    (void)printf("Contactinfo text\n");
    return 0;
}