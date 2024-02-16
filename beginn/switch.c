#include <stdio.h>
int sys0(int grade);
int sys1(int grade);
int sys2(char grade);

int main(){

    char Gradesys;
    char Grade2;
    int Grade;

    printf("\nEnte a GradeSystem(0-15 = 0;1-6 = 1;B-F = 2): ");
    scanf("%c", &Gradesys);
    printf("\nEnter Grade: ");

    if(Gradesys == 0x32){  // hex value
        scanf("%c", &Grade2);
        scanf("%c", &Grade2);
    }else{
        scanf("%d", &Grade);
    }

    switch (Gradesys)
    {
    case '0':
        sys0(Grade);
        break;
    case '1':
        sys1(Grade);
        break;
    case '2':
        sys2(Grade2);
        break;
    default:
        printf("no valuable input given\n");
        break;
    }

    return 0;
}

int sys0(int grade){
    switch (grade)
    {
        case 15:
        case 14:
        case 13:
            printf("very good!\n");
            break;
        case 12:
        case 11:
        case 10:
            printf("good!\n");
            break;
        case 9:
        case 8:
        case 7:
            printf("Ok!\n");
            break;
        case 6:
        case 5:
            printf("you can do better!\n");
            break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("you are to bad!\n");
            break;
        default:
            printf("no good value given!\n");
            break;
    }
    return 0;
}

int sys1(int grade){
    switch (grade)
    {
        case 1:
            printf("very good!\n");
            break;
        case 2:
            printf("good!\n");
            break;
        case 3:
            printf("Ok!\n");
            break;
        case 4:
            printf("you can do better!\n");
            break;
        case 5:
        case 6:
            printf("you are to bad!\n");
            break;
        default:
            printf("no good value given!\n");
            break;
    }
    return 0;
}

int sys2(char grade){
    switch (grade)
    {
        case 'A':
            printf("very good!\n");
            break;
        case 'B':
            printf("good!\n");
            break;
        case 'C':
            printf("Ok!\n");
            break;
        case 'D':
            printf("you can do better!\n");
            break;
        case 'E':
            printf("at least not an F!\n");
            break;
        case 'F':
            printf("you are to bad!\n");
            break;
        default:
            printf("no good value given!\n");
            break;
    }
    return 0;
}