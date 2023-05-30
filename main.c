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

  //A int aux serve como a chave para que o codigo continue. enquanto a chave continuar como 0, codigo seguira (pois sera prerequisito de um 'if' ultilizado posteriormente )
  int cpf,aux_=0;
  
  printf("\nNovo \n");
  printf("Digite seu Cpf: ");
  scanf("%d", &cpf);

//Este if foi criado com o objetivo de criar uma variavel capaz de filtrar Cpfs ja ultilizados para que eles não se sobrescrevam:           Se o numero de votos for diferente de zero, significando que algum cpf ja foi criado, se inicializara uma fiscalização ultilizando 'for' E 'numVotos'(que serve como variavel marcadora de vetores) para verificar se o cpf citado não é repetido. assim mudando a int aux pra 1 caso esteja repetido (fazendo com que o codigo não siga ) e exibindo uma msg de erro.
  
  if(numVotos!=0){
   for(int i = 0; i<numVotos;i++){
    if(votos[i].cpf == cpf){
     aux_=1;  printf("\n-----------------\n-Cpf ja ultilizado-\n-----------------\n");
    }
   }
  }

  //Caso a aux siga com o valor de 0, codigo continuara por esse if 
 if(aux_== 0 ){

  //Os valores seram registrados em um vetor alocado no respectvio dado do banco de dados criado
  votos[numVotos].cpf = cpf;   
  printf("Digite seu Nome: ");
  scanf(" %[^\n]s", votos[numVotos].nome);

   // Mais uma vez a int timer serve como um item chave que sera ultilizado em repetições futuras
  int timer;

   //While foi ultilizado para criar um sistema, ultilizando if, para qualquer numero fora do desejado fosse negado alterando o valor de timer pra 1. fazendo com que o codigo apenas avance caso o timer seja igual a 0(pois na linguagem c. 0 e equivalente a 'false' e 1 a 'true'. ou seja enquanto o valor for equivalente a true o while n parara sua repetição. a não ser que avance com o valor false que anulara a repetição )
 do{ timer = 0;
  printf("\n____________________________\nVote no seu candidato:Presidente\n1-Seu Madruga\n2-Naruto Uzumaki\n");
  scanf("%d", &votos[numVotos].VtPr);
   if (votos[numVotos].VtPr > 2 || votos[numVotos].VtPr < 1){
     printf("\nERRO: voto invalido!\n");
     timer = 1;}
   }while(timer);

  
  
do{ timer = 0;
  printf("\n____________________________\nVote no seu candidato:Senador\n1-Rambo\n2-Luffy\n3-Logan\n4-Bruce Wanne\n");
  scanf("%d", &votos[numVotos].VtSn);
  if (votos[numVotos].VtSn > 4 || votos[numVotos].VtSn < 1){
     printf("\nERRO: voto invalido!\n");
     timer = 1;}
 
 }while(timer);
   
  
 do{  timer = 0;
   printf("\n____________________________\nVote no seu candidato:Deputado\n1-Jean Gray\n2-Sonic\n3-Mario\n4-Wanda\n");
  scanf("%d", &votos[numVotos].VtDp);
  if (votos[numVotos].VtDp > 4 || votos[numVotos].VtDp < 1){
     printf("\nERRO: voto invalido!\n");
     timer = 1;}
 
 }while(timer);
  
  
 do{ timer = 0;
   printf("\n____________________________\nVote no seu candidato:Governador\n1-Kratos\n2-Ryu\n3-Rugal\n");
  scanf("%d", &votos[numVotos].VtGv);
    if (votos[numVotos].VtGv > 3 || votos[numVotos].VtGv < 1){
     printf("\nERRO: voto invalido!\n");
     timer = 1;}
 
 }while(timer);
   
  
 do{ timer = 0;
   printf("\n____________________________\nVote no seu candidato:Prefeito\n1-Leon\n2-James\n");
  scanf("%d", &votos[numVotos].VtPf);
    if (votos[numVotos].VtPf > 2 || votos[numVotos].VtPf < 1){
     printf("\nERRO: voto invalido!\n");
     timer = 1;}
 
 }while(timer);
   
  
  do{ timer = 0;
    printf("\n____________________________\nVote no seu candidato:Vereador\n1-Peter Parker\n2-Nicolas Cage-\n3-Charles chaplin-\n4-Sonya-\n");
  scanf("%d", &votos[numVotos].VtVr);
if (votos[numVotos].VtVr > 4 || votos[numVotos].VtVr < 1){
     printf("\nERRO: voto invalido!\n");
     timer = 1;
   }
   }while(timer);
 
  
  printf("Voto Realizado com sucesso.\n");
}
}


//Função conferir

void Conferir(RegistroVt votos[], int cpf, int n ){

//Essa função e bem mais simples, pois se trata do mesmo algoritimo criado para barrar cpfs repetidos. neste caso a int n recebe o valor de numVotos no menu, ao qual se trata da quantidade de vetores criados, junto a int i que serve como contador que ira aumentar ate a quantidade maxima de vetores criados, assim servindo como um ponteiro que ultilizando o if ira analizar em todos os vetores se alguma variavel cpf bate com o cpf digitado, assim imprimindo as informaçoes solicitadas.
  
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

//função resultados

void resultado(RegistroVt votos[], int n){

//Criei varias variaveis int, uma para cada candidato
int pr1 = 0, pr2 = 0, sn1 = 0, sn2 = 0, sn3 = 0, sn4 = 0, dp1 = 0, dp2=0, dp3= 0, dp4= 0, gv1 = 0, gv2= 0, gv3= 0, pf1 = 0, pf2 = 0, vr1 = 0, vr2 = 0, vr3 = 0, vr4 = 0;

  //for estrotura de repetição que sera ultilizada com os ifs para computar os votos de cada candidato em cada vetor
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

  //Essa parte foi criada para decidir qual candidato ganhou em sua respctiva concorrencia e imprimir o resultado.(com a string ocorreu empate pra caso ocorra algum empate entre os candidatos)
  printf("\n----------Eleitos----------\n");

printf("Presidente:\n");
  
  if(pr1>pr2){
    printf("-Seu Madruga-");
  }else if(pr1<pr2){
    printf("-Naruto Uzumaki-");
  }else{
   printf("-Ocorreu empate-");
  }

printf("\nSenador:\n");
  
  if(sn1>sn2 && sn1>sn3 && sn1>sn4 ){
    printf("-Rambo-");
  }else if(sn2>sn1 && sn2>sn3 && sn2>sn4){
    printf("-Luffy-");
  }else if(sn3>sn1 && sn3>sn2 && sn3>sn4){
    printf("-Logan-");
  }else if(sn4>sn1 && sn4>sn3 && sn4>sn2){
    printf("-Bruce Wanne-");
  }else{
   printf("-Ocorreu empate-");
  }
  
  printf("\nDeputado:\n");

 if(dp1>dp2 && dp1>dp3 && dp1>dp4 ){
    printf("-Jean Gray-");
  }else if(dp2>dp1 && dp2>dp3 && dp2>dp4){
    printf("-Sonic-");
  }else if(dp3>dp1 && dp3>dp2 && dp3>dp4){
    printf("-Mario-");
  }else if(dp4>dp1 && dp4>dp3 && dp4>dp2){
    printf("-Wanda-");
  }else{
   printf("-Ocorreu empate-");
  }   

printf("\nGovernador:\n"); 

   if(gv1>gv2 && gv1>gv3 ){
    printf("-Kratos-");
  }else if(gv2>gv1 && gv2>gv3){
    printf("-Ryu-");
  }else if(gv3>gv1 && gv3>gv2){
    printf("-Rugal-");
  }else{
   printf("-Ocorreu empate-");
  }   


printf("\nPrefeito:\n");
  
  if(pf1>pf2){
    printf("-Leon-");
  }else if(pf1<pf2){
    printf("-James-");
  }else{
   printf("-Ocorreu empate-");
  }

printf("\nVereador:\n");
  
 if(vr1>vr2 && vr1>vr3 && vr1>vr4 ){
    printf("-Peter Parker");
  }else if(vr2>vr1 && vr2>vr3 && vr2>vr4){
    printf("-Nicolas Cage-");
  }else if(vr3>vr1 && vr3>vr2 && vr3>vr4){
    printf("-Charles chaplin-");
  }else if(vr4>vr1 && vr4>vr3 && vr4>vr2){
    printf("-Sonya-");
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
    printf("\n\n%d Eleitores\n", numVotos);
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