#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void copy(char str1[], char str2[]);     // Function to copy one string into another
void comp(char str1[], char str2[]);     // Function to compare two strings
int length(char str[]);                       // Function to check the length of the string  
void case_change(char str[]);                 // Function to change the case of the string
void main()
{
    char s1[100],s2[100];
    int ch,i;
    while(i!=0)
    {
    printf("\n----------Menu-----------\n");
    printf("1:Length Of the string\n");
    printf("2:Change the case of the string\n");
    printf("3:Copy one string into another\n");
    printf("4:Compare two strings\n");
    printf("5:Exit\n");
    
    printf("Enter Your Choice\n");     //Input the users choice
    scanf("%d",&ch);
    switch(ch)
    {
        // length if string
        case 1: printf("Enter the string\n");
                scanf("%s",s1);
                i = length(s1);     // Function call to calculate the length
                printf("Length = %d",i);
            break;
        // change case
        case 2: printf("Enter the string\n");
                gets(s1);
                case_change(s1);    // Function call to change the case
            break;
        // copy one string into other
        case 3: printf("Enter the string1\n");
                gets(s1);
                printf("Enter the string2\n");
                gets(s2);
                copy(s1,s2);        // Function call to copy one string into another
            break;
        // Compare two strings
        case 4: printf("Enter the string1\n");
                gets(s1);
                printf("Enter the string2\n");
                gets(s2);
                comp(s1,s2);       // Function call to compare two strings;
            break;
        // exit the cases
        case 5: exit(0);           
            break;
        default: printf("INVALID INPUT");
    }
    }
}
void copy(char str1[], char str2[])
{
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("Strings after copying");
    printf("Strin1 = %s",str1);
    printf("Strin2 = %s",str2);
}                  
int length(char str[])
{
    int i,len = 0;
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    return len;
}                       
void case_change(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
            str[i] = str[i] - 32;
        else if(str[i] >= 'a'&& str[i<='z'])
            str[i] = str[i] + 32;
    }
    printf("Case changed string ]= %s",str);
} 
void comp(char str1[], char str2[])
{
    int i,c=0;
    if(strlen(str1) == strlen(str2))
    {
        for(i=0;str1[i]!='\0';i++)
        {
            if(str1[i] == str2[i])
                c++;
        }
        if(c==i)
        {
            printf("Strings are eqaul\n");
        }
        else
        {
            printf("Strings are not equal\n");
        }
    }
    else
        printf("Strings are not same\n");
}