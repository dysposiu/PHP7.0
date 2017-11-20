#include <stdio.h> // Activam f-a de IN/OUT
#include <stdlib.h> // Activam f-a getenv()

int main(void){
//pimim variaba de mediu REMOTE_ADDR
	char *remote_addr = getenv("REMOTE_ADDR");
//... si QUERY_STRING
	char *query_string = getenv("QUERY_STRING");
//imprimam titlul
printf("Content-type: tct/html\n\n");
//imprimam documentul
printf("<!DOCTYPE html>");
printf("<head>");
printf("<title>Lucru cu variabila de mediu</title>");
printf("<meta charset='utf-8'>");
printf("</head>");
printf("<body>");
printf("<h1>Salut. Noi stim tot despre d-a!</h1>");
printf("<p>IP-adresa dvstr este: %s</p>", remote_addr);
printf("</p>Poftim parametrii care d-a i-ati mentionat: %s</p>", query_string);
printf("</body></html>");
}
