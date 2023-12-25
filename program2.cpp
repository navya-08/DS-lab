#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Memory allocation through malloc\n");
    int *ptr=(int*)malloc(5*(sizeof(int)));
    if(ptr==NULL){
        printf("Memory allocation failed");
    }
    for(int i=0;i<5;i++){
        ptr[i]=i;
        printf("%d\t",ptr[i]);
    }
    printf("\nMemory allocation through calloc\n");
    int *ptr1=(int*)calloc(4,(sizeof(int)));
    if(ptr1==NULL){
        printf("Memory allocation failed");
    }
    for(int i=0;i<4;i++){
        ptr1[i]=i*2;
        printf("%d\t",ptr1[i]);}

    printf("\nMemory allocation through realloc\n");
    int *ptr2=(int*)realloc(ptr1,6*(sizeof(int)));
    if(ptr2==NULL){
        printf("Memory re-allocation failed");
        free(ptr1);
    }
    for(int i=4;i<6;i++){
        ptr2[i]=i*2;}

    for(int i=0;i<6;i++){
        printf("%d\t",ptr2[i]);}

    free(ptr2);
    printf("\nMemory after free\n");
    for(int i=0;i<6;i++){
        printf("%d\t",ptr2[i]);}

    printf("\nMemory allocation through calloc\n");
    ptr2=(int*)calloc(4,(sizeof(int)));
    if(ptr1==NULL){
        printf("Memory allocation failed");
    }
    for(int i=0;i<4;i++){
        ptr2[i]=i*2;
        printf("%d\t",ptr2[i]);}


    return 0;

}
