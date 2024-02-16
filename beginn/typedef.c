#include <stdio.h>
#include <string.h>

//typedef char user[25]
/*
struct user
{
    char name[25];
    char password[12];
    int id;
};
*/

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;


int main(void)
{
    //typedef = reserved keyword that gives an existing datatype a "nickname"    

    //no struct needed
    User user1 = {"BRO", "nionksvv", 123456};
    User user2 = {"Bruh", "mpsdnmiof", 698732};
    
    printf("%s\n", user1.name);
    printf("%s\n", user1.id);
    printf("%s\n", user1.password);
    printf("%s\n", user2.name);
    printf("%s\n", user2.id);
    printf("%s\n", user2.password);

    return 0;
}