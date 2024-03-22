#include <locale.h>
#include <stdio.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  float nota1, nota2, media, recuperacao, media2;

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

    if (nota1 > nota2) {
      media2 = (nota1 + recuperacao) / 2;
      
      if (media2 < 7) {
        printf("\t Você foi reprovado! \n");
      } 
        
      else {
        printf("\t Você foi aprovado na recuperação! Dedique-se mais aos estudos no próximo ano! \n");
      }
    }

    else
    {
      media2 = (nota2 + recuperacao) / 2;
      
      if (media2 < 7) {
        printf("\t Você foi reprovado! \n");
      } 
      
      else 
      {
        printf("\t Você foi aprovado na recuperação!/nDedique-se mais aos estudos no próximo ano! \n");
      }
    }
  } 
  else
  {
    printf("\t Parabéns você foi aprovado!");
  }

  return 0;
}
