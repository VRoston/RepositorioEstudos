    //Giovani Bellini dos Santos RA 22007263
//Henrique Pegorari do Nascimento  RA 22005169
//Lucca Vasconcelos Costa Oliveira  RA 22003004
//Matheus Zanon Caritá RA 22014203
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void comparador_de_palavras2( char palavraorigi[26], int acertos, int erros, char banco[31][21], char bancoAcertos[100][21], int numeroAcertosBanco);
void titulo2(int acertos, int erros);


void imprimir_banco2 (char banco[31][21]);
//=========================================Função 2: valaida se tem numero ou não 
void valida_palavras2(int acertos, int erros, char banco[31][21], char bancoAcertos[100][21], int numeroAcertosBanco)//palavra origi = palavra lida originalmente
{
//int acerto2=acertos;
//int erros2=erros;
//int acertos3, erros3;
int flag; //flag é para validar a string, se flag = 0 não possui somente letras, se flag = 1 somente letras
char  palavraorigi[26];
int tamanho=0;//feita para receber o tamanho da string
//char palavracomparada[26];//palavra do banco de palavras "palavra correta"
tamanho=0;

do{
    scanf("%[^\n]", palavraorigi);
        //fazer o if esc aqui
    tamanho = strlen(palavraorigi);
    for(int j=0;j<tamanho;j++)
    palavraorigi[j] = tolower(palavraorigi[j]);
    flag = 1;
    for (int i=0; i<tamanho; i++) {
        if (!isalpha(palavraorigi[i]))
        {
            flag = 0; 
            printf("Voce digitou um character invalido. Tente novamente.\n");
            titulo2(acertos ,erros);
        } 
        fflush(stdin);
    }
}while(flag==0);
comparador_de_palavras2(palavraorigi, acertos, erros, banco, bancoAcertos, numeroAcertosBanco);
}
//=========================================Função extra: imprimir bamco de plavras  
void imprimir_banco2 (char banco[31][21])
{
  for(int i=0;i<31;i++)
  printf("== %s ==",banco[i]);
  }
/*//=========================================Função extra: Banco de acetos ==em manutenção== 
 cahr banco_de_acertos(char palavras){
}*/
////=========================================Função 3: comparador  de palavras
void comparador_de_palavras2( char palavraorigi[26], int acertos, int erros, char banco[31][21], char bancoAcertos[100][21], int numeroAcertosBanco)
{
    int a;
    int j = 0;
    int temNoBanco = 0;
    int temNoBancoAcertos = 0;
    char sim_nao = ' ';
    
    for(a=0;a<31;a++){
      if(strcmp(banco[a],palavraorigi)==0)
        {
            temNoBanco = 1;
            break;
        }
    }
    if(temNoBanco == 1)
    {       
        //while(strcmp(bancoAcertos[j], "---") != 0)
        while(j < 100 && strcmp(bancoAcertos[j], palavraorigi)!=0) 
        {           
            j++;
        }
        if(j < 100)
        {
            temNoBancoAcertos = 1;
            printf("Palavra repetida!");
        }
        if(temNoBancoAcertos == 0)
        {
            strcpy(bancoAcertos[numeroAcertosBanco],palavraorigi);
            numeroAcertosBanco++;            
            acertos++;
             printf("\n===== Banco de acertos====\n");
            for(int idx = 0; idx < numeroAcertosBanco; idx++)
                printf("bancoAcertos[%d] = %s\n", idx,bancoAcertos[idx]);
        }
    }
    else 
        {
            erros++;
        }
    if(erros==5)
    {
        printf("Voce errou 3 vezes!\nFIM DE JOGO");
        printf("\nDeseja tentar novamente?\n(S para Sim e N para Nao ou digite B para ver o banco de palavras)\n");
        do
        {
        printf("\n[S]im\n[N]ao\n[B]anco\n");
        scanf("%c", &sim_nao);
        getchar();
        sim_nao = tolower(sim_nao);
        switch (sim_nao)
        {
        case 's': acertos=0; erros=0; numeroAcertosBanco = 0; 
                    for(int i = 0; i< 100; i++)
                     for (int j= 0; j <21; j++)
                       bancoAcertos[i][j] = ' ' ;  
                       break;
        case 'n': printf("Obrigado por jogar! :)\n");
                        exit(0);
        case 'b': imprimir_banco2(banco); exit(0);break;
        default: printf("Erro, meio termo nao existe! Pressione S para sim ou N para nao:\n"); 
        }
        }while(sim_nao != 's' && sim_nao != 'n'&& sim_nao !='b');
    }
          //if com siwtch case para ver se ja tem 30 acertos
    if(acertos==30)
    {
        printf("Voce acertou as 30 palavras!\nPARABENS");
        printf("\nDeseja tentar novamente?\n(S para Sim e N para Nao ou digite B para ver o banco de palavras)\n");
        do
        {
            printf("\n[S]im\n[N]ao\n[B]anco\n");
            scanf("%c", &sim_nao);
            getchar();
            sim_nao = tolower(sim_nao);
            switch (sim_nao)
            {
                case 's': acertos=0; erros=0; numeroAcertosBanco = 0; 
                    for(int i = 0; i< 100; i++)
                     for (int j= 0; j <21; j++)
                       bancoAcertos[i][j] = ' ' ;  
                    //titulo2(acertos, erros); 
                    break;
                case 'n': printf("Obrigado por jogar! :)\n");
                        exit(0);
                case 'b': imprimir_banco2(banco);
                        exit(0);
                        break;
                default: printf("Erro, meio termo nao existe! Pressione S para sim ou N para nao:\n"); 
            }
        } while(sim_nao != 's' && sim_nao != 'n'&& sim_nao !='b');
    }
    titulo2(acertos ,erros);
    valida_palavras2(acertos, erros, banco, bancoAcertos,numeroAcertosBanco);
}                                                                                                                                                                                                                                                                                                                                                            
                                                                                                                      
//=========================================Função 1: titulo 
void titulo2(int acertos, int erros){

  printf("==========================\n");
  printf("\t\tJOGO ANAGRAMA\n");
  printf("<<Regras do jogo>>\n");
  printf("->O jogador deve formar palavras especificas com as letras do quadro\n");
  printf("->Desconsidere os acentos\n");
  printf("->Existem 30 palavras no total\n");
  printf("->Maximo de Erros: 5\n");
  printf("\tBOA SORTE!!!!\n =========================================\n");
  printf("\t==== B A N C O  D E  L E T R A S ====\n\n \t\t\t   A V B U C Q D\n \t\t\t   P F S T E H R\n \t\t\t   M I O N L G E\n \t\t\t   I L T V A R A\n \t\t\t   O B C R O O N\n");
  printf("==você acertou %d palvras de 30==\n",acertos);
  printf("==você errou %d palvras de 5==\n",erros);
printf("Agora Tente adivinhar as palavras com as letras do quadro acima>>>");
} 
////==============================================main
int main(){
    char banco[31][21] = {"amora","angola","armenia","arte","algebra","aritmetica","banco","banana","brasil","britanico","borboleta","castelo","croacia","pequeno","viver","morrer","lar","uva","odontologia","oftalmologista","ave","lima","hemorragia","linha","rato","malha","dieta","musica","feminino","masculino"};
    char bancoAcertos[100][21];
    int numeroAcertosBanco = 0;
    int acertos=0, erros=0;
    int dificuldade;

    for(int i = 0; i< 100; i++)
      for (int j= 0; j <21; j++)
         bancoAcertos[i][j] = ' ';

    printf("Bem-vindo(a) a Odisseia das palavras!");
    do
    {     
        printf("\nSelecione a dificuldade pressionando a tecla indicada:");
        printf("\nNormal [ 1 ]\nCHÂTEAU DE LA FOLIE [ 2 ]\n");

        scanf("%d", &dificuldade);
        getchar();
        switch (dificuldade)
        {
        case 1: titulo2(acertos, erros); 
            valida_palavras2(acertos, erros, banco, bancoAcertos,numeroAcertosBanco);
            break; 
        case 2: 
            printf("Nao foi possivel terminar (faltou verba)");
            break;
        default: printf("Essa dificuldade nao existe! (Aguarde a DLC)\n\n");
        }
    }while(dificuldade != 1 && dificuldade != 2);
    //int acertos=0, erros=0;
    //titulo();
    //valida_palavras(acertos, erros);
    return 0;
}
 // fazer imprimir as palavras acertadas
// não contar as palavras que ja foram