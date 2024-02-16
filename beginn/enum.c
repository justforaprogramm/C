#include <stdio.h>

enum Day{Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7};

int main(void)
{
    //enum = a user defined typue of named integer identifiers
    //       helps to make a program more readable

    enum Day today = Fri;

    printf("%d\n\r", today);

    //(today <= 6)? printf("it's under the week\n\r"):printf("Weekend!\n\r");
    (!(today == Sat || today == Sun))? printf("it's under the week\n\r"):printf("Weekend!\n\r");
    return 0;
}