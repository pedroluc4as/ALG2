#include <stdio.h> 
#include <stdlib.h> 
int main(void) { 
int *p_num; 
p_num = malloc(sizeof(int)); 
if (p_num == NULL) { 
printf("Erro ao alocar memória! \n"); 
return 1; 
} 
*p_num = 42; 
printf("0 valor é: %d \n", *p_num); 
printf("Endereço de memória: %p\n", (void *)p_num); 
free(p_num); 
return 0; 
}