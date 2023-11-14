#include <stdio.h>
#include <string.h>
int alike(char *word1, char *word2){
    int diff=0;
    if(strlen(word1)<=strlen(word2)){
        int i;
        for(i=0;i<strlen(word2);i++){
            if(*(word1+i)!=*(word2+i)){
                diff ++;
            }
        }
        return (strlen(word1)-diff)*100/strlen(word2);
    }
}
int main(){
    char a[100], b[100];
    printf("plz anter a, b: ");
    gets(a);
    gets(b);
    printf("%d", alike(a,b));
    return 0;
}
