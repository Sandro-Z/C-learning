#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    char str[3][10],temp[10];
    int i,j,k,n=3;
    printf("Enter 3 strings:\n");
    for (i=0;i<n;i++){
        gets(str[i]);
    }

    //使用选择法对字符串排序
    for (i=0;i<n-1;i++){
        k=i;
        for (j=i+1;j<n;j++){
            if (strcmp(str[i],str[j])>0){
                k=j;
            }
        }
        if (k!=i){
            strcpy(temp,str[i]);
            strcpy(str[i],str[k]);
            strcpy(str[k],temp);
        }
    }
    
    fp=fopen("strings.txt","w");
    if (fp==NULL){
        printf("Error opening file.\n");
        return 1;
    }
    for (i=0;i<n;i++){
        fputs(str[i], fp);
        fputc('\n', fp);
    }
    fclose(fp);
    return 0;
}