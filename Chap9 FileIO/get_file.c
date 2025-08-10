#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fp;
    char str[3][10];
    fp=fopen("strings.txt", "r");
    int i=0;
    while (fgets(str[i],sizeof(str[0]),fp)!=NULL){
        printf("%s",str[i]);
        i++;
    }
    fclose(fp);
    return 0;
}