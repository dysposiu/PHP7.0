#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
int num;
time_t t;
srand(time(&t));
num = rand() % 20;
printf("Content-type: text/html\n");
printf("Pragma: no-cache\n");
printf("\n");
printf("<!DOCTYPE html>");
printf("<head>");
printf("<title>Numar intimplator</title>");
printf("<meta charset='utf-8'>");
printf("</head>");
printf("<body>");
printf("<h1>Salutare!!</h1>");
printf("<p>Un numar intimplator din zona 0-20: %d</p>", num);
printf("</body>");
printf("</html>");

}
