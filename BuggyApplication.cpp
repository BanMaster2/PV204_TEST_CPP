#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define SZ 1
void k(char* l) {
    char m[2];
    strcpy(m, l);
}
int main(int argc, char* argv[]){
    char a[1];
    printf("test");
    scanf("%s",a);
    char b[SZ];
    strcpy(b,argv[1]);
    char* c;
    c=(char*)malloc(sizeof(char)*SZ);
    strcpy(c,argv[1]);
    char d,e;
    *(&d+1)=0;
    if(1){
        free(c);
    }
    free(c);
    c[0]='0';
    int f;
    if(0){
        f=0;
    }
    printf("%i",f);
    unsigned x=0;
    a[1000]='x';
    int* g=0;
    char* h=(char*)(g+1);
    char* i=NULL;
    free(i);
    int j=5;
    if (j=6) {
        printf("j");
    }
    for (x;x>0;x--){
        printf("%u",x);
    }
    return 0;
}

