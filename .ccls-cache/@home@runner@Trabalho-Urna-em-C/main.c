#include <stdio.h>
#include <stdlib.h>

//Estrotura pra armazenar dados do voto:
typedef struct{
int cpf;
char nome[50];
int VtPr;//voto presidente
int VtSn;//voto Senador
int VtDp;//voto Deputado
int VtGv;//voto Governador
int VtPf;//voto prefeito
int VtVr;//voto vereador

int NVtPr_A;//numero_voto presidente A
int NVtPr_B;//numero_voto presidente B

int NVtSn_A;//numero_voto Senador A
int NVtSn_B;//numero_voto Senador B
int NVtSn_C;//numero_voto Senador C
int NVtSn_D;//numero_voto Senador D

int NVtDp_A;//numero_voto Deputado A
int NVtDp_B;//numero_voto Deputado B
int NVtDp_C;//numero_voto Deputado C
int NVtDp_D;//numero_voto Deputado D

int NVtGv_A;//numero_voto Governador A
int NVtGv_B;//numero_voto Governador B
int NVtGv_C;//numero_voto Governador C

int NVtPf_A;//numero_voto prefeito A
int NVtPf_B;//numero_voto prefeito B

int NVtVr_A;//numero_voto vereadorA
int NVtVr_B;//numero_voto vereadorB
int NVtVr_C;//numero_voto vereadorC
int NVtVr_D;//numero_voto vereadorD


}RegistroVt;

//Função Registrar o voto:

void Votar(RegistroVt votos[], int *numVotos) {
 
  printf("\nNovo Produto\n");
  printf("Digite seu Cpf: ");
  scanf("%d", &votos[*numVotos].cpf);
  printf("Digite seu Nome: ");
  scanf(" %[^\n]s", votos[*numVotos].nome);
  printf("\n____________________________\nVote no seu candidato:\n1-PresidenteA\n2-PresidenteB\n");
  scanf("%d", &votos[*numVotos].VtPr);
  printf("\n____________________________\nVote no seu candidato:\n1-SenadorA\n2-SenadorB\n3-SenadorC\n4-SenadorD\n");
  scanf("%d", &votos[*numVotos].VtSn);
  printf("\n____________________________\nVote no seu candidato:\n1-DeputadoA\n2-DeputadoB\n3-DeputadoC\n4-DeputadoD\n");
  scanf("%d", &votos[*numVotos].VtDp);
  printf("\n____________________________\nVote no seu candidato:\n1-GovernadorA\n2-GovernadorB\n3-GovernadorC\n");
  scanf("%d", &votos[*numVotos].VtGv);
  printf("\n____________________________\nVote no seu candidato:\n1-PrefeitoA\n2-PrefeitoB\n");
  scanf("%d", &votos[*numVotos].VtPf);
  printf("\n____________________________\nVote no seu candidato:\n1-VereadorA\n2-VereadorB\n3-VereadorC\n4-VereadorD\n");
  scanf("%d", &votos[*numVotos].VtVr);

  if(votos[*numVotos].VtPr == 1)

  (*numVotos)++;
  printf("Produto adicionado ao votos.\n");
}