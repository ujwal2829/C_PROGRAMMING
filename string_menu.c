#include<stdio.h>
int main(){
    int var= 767;
    int *ptr1;
    int **ptr2;
    ptr2 = &var;
    ptr1 = &ptr2;
    printf("value of var = %d\n ",var);
    printf("value of using first pointer =%d\n",*ptr1);
    printf("value of using double pointer =%d\n ",**ptr2);
    return 0;

}