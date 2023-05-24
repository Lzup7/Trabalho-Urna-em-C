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

int NVtPr_A = 0;//numero_voto presidente A
int NVtPr_B = 0;//numero_voto presidente B

int NVtSn_A = 0;//numero_voto Senador A
int NVtSn_B = 0;//numero_voto Senador B
int NVtSn_C = 0;//numero_voto Senador C
int NVtSn_D = 0;//numero_voto Senador D

int NVtDp_A = 0;//numero_voto Deputado A
int NVtDp_B = 0;//numero_voto Deputado B
int NVtDp_C = 0;//numero_voto Deputado C
int NVtDp_D = 0;//numero_voto Deputado D

int NVtGv_A = 0;//numero_voto Governador A
int NVtGv_B = 0;//numero_voto Governador B
int NVtGv_C = 0;//numero_voto Governador C

int NVtPf_A = 0;//numero_voto prefeito A
int NVtPf_B = 0;//numero_voto prefeito B

int NVtVr_A = 0;//numero_voto vereadorA
int NVtVr_B = 0;//numero_voto vereadorB
int NVtVr_C = 0;//numero_voto vereadorC
int NVtVr_D = 0;//numero_voto vereadorD


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

  //Esses If serviram para computar a quantidade de votos por candidato
  
  if(votos[*numVotos].VtPr == 1){
    votos[*numVotos].NVtPr_A += 1
  } else if(votos[*numVotos].VtPr == 2){
    votos[*numVotos].NVtPr_B += 1
  } else{
    printf("Erro Selecione um valor valido!\n");;
  }

  if(votos[*numVotos].VtSn == 1){
    votos[*numVotos].NVtSn_A += 1
  } else if(votos[*numVotos].VtSn == 2){
    votos[*numVotos].NVtSn_B += 1
  } else if(votos[*numVotos].VtSn == 3){
    votos[*numVotos].NVtSn_C += 1
  } else if(votos[*numVotos].VtSn == 4){
    votos[*numVotos].NVtSn_D += 1
  }
  else{
    printf("Erro Selecione um valor valido!\n");;
  }

  if(votos[*numVotos].VtDp == 1){
    votos[*numVotos].NVtDp_A += 1
  } else if(votos[*numVotos].VtDp == 2){
    votos[*numVotos].NVtDp_B += 1
  } else if(votos[*numVotos].VtDp == 3){
    votos[*numVotos].NVtDp_C += 1
  } else if(votos[*numVotos].VtDp == 4){
    votos[*numVotos].NVtDp_D += 1
  }
  else{
    printf("Erro Selecione um valor valido!\n");;
  }

   if(votos[*numVotos].VtGv == 1){
    votos[*numVotos].NVtGv_A += 1
  } else if(votos[*numVotos].VtGv == 2){
    votos[*numVotos].NVtGv_B += 1
  } else if(votos[*numVotos].VtGv == 3){
    votos[*numVotos].NVtGv_C += 1
  }
  else{
    printf("Erro Selecione um valor valido!\n");;
  }

  if(votos[*numVotos].VtPf == 1){
    votos[*numVotos].NVtPf_A += 1
  } else if(votos[*numVotos].VtPf == 2){
    votos[*numVotos].NVtPf_B += 1
  } else{
    printf("Erro Selecione um valor valido!\n");;
  }
  
  (*numVotos)++;
  printf("Voto Realizado com sucesso.\n");
}