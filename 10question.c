// swapping strings if they are not in the lexicographical order

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
   int n, len;
   char temp[50];

   printf("Enter the number of words: ");
   scanf("%d", &n);

   char *str = (char)malloc(n * sizeof(char));

   printf("Enter %d words: \n", n);
   for (int i = 0; i < n; ++i) {
      printf("Enter word %d: ", i+1);
      scanf("%s", temp);
      len = strlen(temp) + 1;
      str[i] = (char*)malloc(len * sizeof(char));
      strcpy(str[i], temp);
   }

   for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {

         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < n; ++i) {
      printf("%s\n", str[i]);
      free(str[i]);
   }
   free(str);

   return 0;
}
