/*
#Sample Input 
-->a11472o5t6
#Sample Output 
-->0 2 1 0 1 1 1 1 0 0 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[500];
    scanf("%[^\n]%*c",s); 
     int n=strlen(s);
     int arr[10];
     int count=0;
for(int i=0;i<=9;i++){
    count=0;
    for(int j=0;j<n;j++){
        if(s[j]-'0'==i){ 
            count++;
                       }

                        }
            arr[i]=count;
}
 for(int i=0;i<=9;i++){ 
     printf("%d ",arr[i]); }  
    
    return 0;
}
