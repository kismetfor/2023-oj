#include "stdio.h"

int main(){
   char input[100] = {0};
   while(scanf("%s", input) != EOF){
      char max = input[0];
      for(int i = 1; input[i] != '\0'; i++){
         if(max < input[i]){
            max = input[i];
         }
      }
      for(int i = 0; input[i] != '\0'; i++){
         printf("%c", input[i]);
         if(max == input[i]){
            printf("(max)");
         }
      }
   }
   return 0;
}
//38856899   2023-08-31 23:44:26   Accepted   2025   31MS   1696K   419 B   C   HanRain一遍过
