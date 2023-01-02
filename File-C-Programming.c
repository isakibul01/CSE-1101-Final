#include <stdio.h>
int main() {
int a;
FILE *fp;
fp  = fopen ("data.txt", "w");

for (a=1; a<=100; a++) {
       fprintf(fp, "%d\n", a);
   }
   return 0;
}