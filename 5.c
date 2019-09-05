#include <stdio.h>
int main()
{
int n1,n2;
    printf("Diga-me o Valor I\n");
    scanf("%i", &n1);
    printf("Diga-me o Valor II\n");
    scanf("%i", &n2);
if (n1>n2)
{
printf("valor I e maior que valor II");
}else{
if (n1<n2)
{
printf("valor I menor que valor II");
}else{
printf("Valores Iguais");
}
}
return 0;
}
