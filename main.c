#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  float 
  nota1,
  nota2,
  media,
  recuperacao;
  
  printf("Cálculo de média: \n \n");
  
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  if (media < 7) {
    printf("\t Sua media é %.2f \n", media);
    
    printf("\t Você ficou de recuperação! \n");
    
    printf("\t Digite a nota da prova de recuperação: \n");
    scanf("%f", &recuperacao);
        
    if (recuperacao < 7) 
    {
    
      printf("\t Você foi reprovado! \n");
         
    }
    else 
    {
          
      printf("\t Você foi aprovado na recuperação!/nDedique-se mais ao estudos no próximo ano! \n");
  
    }
  } 
  else {
    printf("\t Parabéns você foi aprovado!");
  }
  
  return 0;
}