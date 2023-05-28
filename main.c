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


}RegistroVt;


//Função Registrar o voto:

void Votar(RegistroVt votos[], int numVotos){
  int cpf,aux_=0;
  
  printf("\nNovo \n");
  printf("Digite seu Cpf: ");
  scanf("%d", &cpf);

  if(numVotos!=0){
   for(int i = 0; i<numVotos;i++){
    if(votos[i].cpf == cpf){
     aux_=1;  printf("\n-----------------\n-Cpf ja ultilizado-\n-----------------\n");
    }
   }
  }
 if(aux_== 0 ){
  votos[numVotos].cpf = cpf;   
  printf("Digite seu Nome: ");
  scanf(" %[^\n]s", votos[numVotos].nome);
  int timer;

 do{ timer = 0;
  printf("\n____________________________\nVote no seu candidato:\n1-PresidenteA\n2-PresidenteB\n");
  scanf("%d", &votos[numVotos].VtPr);
   if (votos[numVotos].VtPr > 2 || votos[numVotos].VtPr < 1){
     printf("\nERRO: voto1 invalido!\n");
     timer = 1;}
   }while(timer);

  
  
do{ timer = 0;
  printf("\n____________________________\nVote no seu candidato:\n1-SenadorA\n2-SenadorB\n3-SenadorC\n4-SenadorD\n");
  scanf("%d", &votos[numVotos].VtSn);
  if (votos[numVotos].VtSn > 4 || votos[numVotos].VtSn < 1){
     printf("\nERRO: voto1 invalido!\n");
     timer = 1;}
 
 }while(timer);
   
  
 do{  timer = 0;
   printf("\n____________________________\nVote no seu candidato:\n1-DeputadoA\n2-DeputadoB\n3-DeputadoC\n4-DeputadoD\n");
  scanf("%d", &votos[numVotos].VtDp);
  if (votos[numVotos].VtDp > 4 || votos[numVotos].VtDp < 1){
     printf("\nERRO: voto1 invalido!\n");
     timer = 1;}
 
 }while(timer);
  
  
 do{ timer = 0;
   printf("\n____________________________\nVote no seu candidato:\n1-GovernadorA\n2-GovernadorB\n3-GovernadorC\n");
  scanf("%d", &votos[numVotos].VtGv);
    if (votos[numVotos].VtGv > 3 || votos[numVotos].VtGv < 1){
     printf("\nERRO: voto1 invalido!\n");
     timer = 1;}
 
 }while(timer);
   
  
 do{ timer = 0;
   printf("\n____________________________\nVote no seu candidato:\n1-PrefeitoA\n2-PrefeitoB\n");
  scanf("%d", &votos[numVotos].VtPf);
    if (votos[numVotos].VtPf > 2 || votos[numVotos].VtPf < 1){
     printf("\nERRO: voto1 invalido!\n");
     timer = 1;}
 
 }while(timer);
   
  
  do{ timer = 0;
    printf("\n____________________________\nVote no seu candidato:\n1-VereadorA\n2-VereadorB\n3-VereadorC\n4-VereadorD\n");
  scanf("%d", &votos[numVotos].VtVr);
if (votos[numVotos].VtVr > 4 || votos[numVotos].VtVr < 1){
     printf("\nERRO: voto1 invalido!\n");
     timer = 1;
   }
   }while(timer);
 
  
  printf("Voto Realizado com sucesso.\n");
}
}
void Conferir(RegistroVt votos[], int cpf, int n ){
  int aux = 0;
  for(int i = 0; i<n;i++){
    if(votos[i].cpf == cpf){
      printf("\n-----------------\n\nCpf: %d\nNome: %s \nPresidente: %d\nSenador: %d\nDeputado: %d\nGovernador: %d\nPrefeito: %d \nVereador: %d\n\n-----------------\n\n",votos[i].cpf,votos[i].nome, votos[i].VtPr ,votos[i].VtSn ,votos[i].VtDp ,votos[i].VtGv,votos[i].VtPf,votos[i].VtVr ); 
      aux = 1;
    }
  }
    if(aux == 0){ 
      
      printf("\n-----------------\n-Cpf não encontrado-\n-----------------\n");
      }
    
}

void resultado(RegistroVt votos[], int n){

int pr1 = 0, pr2 = 0, sn1 = 0, sn2 = 0, sn3 = 0, sn4 = 0, dp1 = 0, dp2=0, dp3= 0, dp4= 0, gv1 = 0, gv2= 0, gv3= 0, pf1 = 0, pf2 = 0, vr1 = 0, vr2 = 0, vr3 = 0, vr4 = 0;

  
   for(int i = 0; i<n;i++){
     
         if(votos[i].VtPr == 1){ 
           pr1++;
         }else{
           pr2++;
         }
        
         if(votos[i].VtSn == 1){ 
           sn1++;
         }else if(votos[i].VtSn == 2){
           sn2++;
         }else if(votos[i].VtSn == 3){
           sn3++;
         }else{ sn4++;}
             
        
        if(votos[i].VtDp == 1){ 
           dp1++;
         }else if(votos[i].VtDp == 2){
           dp2++;
         }else if(votos[i].VtDp == 3){
           dp3++;
         }else{ dp4++;}     
        
        
        if(votos[i].VtGv == 1){ 
           gv1++;
         }else if(votos[i].VtGv == 2){
           gv2++;
         }else {
           gv3++;
          }
        
        if(votos[i].VtPr == 1){ 
           pf1++;
         }else{
           pf2++;
         }
        
        if(votos[i].VtVr == 1){ 
           vr1++;
         }else if(votos[i].VtVr == 2){
           vr2++;
         }else if(votos[i].VtVr == 3){
           vr3++;
         }else{ vr4++;} 

   }
  printf("\n----------Eleitos----------\n");

printf("Presidente:\n");
  
  if(pr1>pr2){
    printf("1-Presidente A");
  }else if(pr1<pr2){
    printf("2-Presidente B");
  }else{
   printf("-Ocorreu empate-");
  }

printf("\nSenador:\n");
  
  if(sn1>sn2 && sn1>sn3 && sn1>sn4 ){
    printf("1-Senador A");
  }else if(sn2>sn1 && sn2>sn3 && sn2>sn4){
    printf("2-Senador B");
  }else if(sn3>sn1 && sn3>sn2 && sn3>sn4){
    printf("3-Senador C");
  }else if(sn4>sn1 && sn4>sn3 && sn4>sn2){
    printf("4-Senador D");
  }else{
   printf("-Ocorreu empate-");
  }
  
  printf("\nDeputado:\n");

 if(dp1>dp2 && dp1>dp3 && dp1>dp4 ){
    printf("1-Deputado A");
  }else if(dp2>dp1 && dp2>dp3 && dp2>dp4){
    printf("2-Deputado B");
  }else if(dp3>dp1 && dp3>dp2 && dp3>dp4){
    printf("3-Deputado C");
  }else if(dp4>dp1 && dp4>dp3 && dp4>dp2){
    printf("4-Deputado D");
  }else{
   printf("-Ocorreu empate-");
  }   

printf("\nGovernador:\n"); 

   if(gv1>gv2 && gv1>gv3 ){
    printf("1-Governador A");
  }else if(gv2>gv1 && gv2>gv3){
    printf("2-Governador B");
  }else if(gv3>gv1 && gv3>gv2){
    printf("3-Governador C");
  }else{
   printf("-Ocorreu empate-");
  }   


printf("\nPrefeito:\n");
  
  if(pf1>pf2){
    printf("1-Prefeito A");
  }else if(pf1<pf2){
    printf("2-Prefeito B");
  }else{
   printf("-Ocorreu empate-");
  }

printf("\nVereador:\n");
  
 if(vr1>vr2 && vr1>vr3 && vr1>vr4 ){
    printf("1-Vereador A");
  }else if(vr2>vr1 && vr2>vr3 && vr2>vr4){
    printf("2-Vereador B");
  }else if(vr3>vr1 && vr3>vr2 && vr3>vr4){
    printf("3-Vereador C");
  }else if(vr4>vr1 && vr4>vr3 && vr4>vr2){
    printf("4-Vereador D");
  }else{
    printf("-Ocorreu empate-");
  }   

  
}



int main(void){
RegistroVt votos[100];
int numVotos = 0;
int op_menu ;
int cpf;

do{
printf("\n---------Urna---------\n\n1-Votar\n2-Conferir Voto\n3-Resultados\n0-Encerrar\n");
scanf("%d",&op_menu);

  switch (op_menu){

  case 1 : 
    Votar(votos, numVotos);
    numVotos++;
    break;
  case 2:
    printf("Digite seu Cpf:");
    scanf("%d",&cpf);
    Conferir(votos,cpf,numVotos);
    break;

  case 3:
    resultado(votos, numVotos);
    printf("\n%d Eleitores\n", numVotos);
    break;
    
  case 0:
    printf("\n-Programa encerrado-\n");
    break;
    
default:
    printf("\n-Opção invalida-\nDigite novamente\n");
    break;
  }
  
}while(op_menu);



  return 0;
}