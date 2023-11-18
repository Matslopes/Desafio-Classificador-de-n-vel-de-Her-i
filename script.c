#include<stdio.h>

int main()
{
    char nome[22];
    int xp=0;
    printf("Digite o nome do Herói: ");
     scanf("%s",& nome);
    
    printf("Quantidade de Experiência -xp- recebida  do Herói: ");
     scanf("%d",& xp);
   
    if( xp<=1000){
       printf("O Herói de nome %s está no nível de Ferro",nome);
     }
    else if( xp>=1001 && xp <=2000){
       printf("O Herói de nome %s está no nível de Bronze",nome);
     }
    else if( xp>=2001 && xp <=5000){
       printf("O Herói de nome %s está no nível de Prata",nome);
     } 
    else if( xp>=5001 && xp <=7000){
       printf("O Herói de nome %s está no nível de Ouro",nome);
       // Corrigi a lacuna de experiência entre o nível de prata até ouro
     }
    else if( xp>=7001 && xp <=8000){
       printf("O Herói de nome %s está no nível de Platina",nome);
     }
    else if( xp>=8001 && xp <=9000){
       printf("O Herói de nome %s está no nível de Ascendente",nome);
     }
    else if( xp>=9001 && xp <=10000){
       printf("O Herói de nome %s está no nível de Imortal",nome);
      }
    else if( xp>=10001){
       printf("O Herói de nome %s está no nível de Radiante",nome);
     }
   return 0;  
}