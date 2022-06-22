#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>


void desenhaBorda(){
    printf("------------------------------------------------------");
}
void pulaLinha(){
    printf("\n");
}
void pausaSistema(){
    system("pause");
}

void limpaTela(){
    system("CLS");
}

//FUNCAO DE DAR ESPACO.

void espaco(){
    printf("\n****************************-----****************************\n");
}

//IDADE
/*

*/

// FUNCAO PARA IMPRIMIR O MENU.

void menu2 (){
    setlocale(LC_ALL,"");

 printf("\n###BEM VINDO###  \n");
 printf("\nescolha uma das 3 op��es !!\n");
 printf ("\n1 - Cadastrar primeiro paciente !");
 printf ("\n2 - Ver pacientes cadastrados !");
 printf ("\n3 - Adicionar paciente !");


}



//STRUCT PARA VARIAVEIS.

struct Paciente{
    char nome[100], email[50], comorbidade[20],cpf[20], telefone[20], dataDiagnostico[20],endereco[100],data[20],dia[20],convertint[10];
    int ano,anoatual;
    int idade;

};

//FUNCAO PARA CHAMAR A STRUCT ADICIONANDO UM NOME, LIMPANDO A MEMORIA DO TECLADO (FFLUSH),
//IMPRIMINDO (PRINTF), LENDO E SALVANDO NA VARIAVEL DA STRUCT (GETS).
int cadastro(){
    setlocale(LC_ALL, "");

    struct Paciente dadosPaciente;

    fflush(stdin);
    printf("Nome do paciente: ");
    gets(dadosPaciente.nome);

    fflush(stdin);
    printf("Dia e Mes de nascimento dd/mm:");
    gets(dadosPaciente.dia);


    printf("Ano de nascimento :");
    scanf("%d",&dadosPaciente.ano);
    dadosPaciente.anoatual = 2021;
    dadosPaciente.idade = dadosPaciente.anoatual - dadosPaciente.ano;
    printf("de acordo com a data de 25/11/2021 a idade do paciente � : %d\n",dadosPaciente.idade);
    if(dadosPaciente.idade >= 65){
        printf("O paciente faz parte do grupo de risco\n");
    }
    fflush(stdin);
    itoa(dadosPaciente.idade,dadosPaciente.convertint,10);

    fflush(stdin);
    printf("CPF do paciente: ");
    gets(dadosPaciente.cpf);


    fflush(stdin);
    printf("Email do paciente: ");
    gets(dadosPaciente.email);


    fflush(stdin);
    printf("Telefone do paciente: ");
    gets(dadosPaciente.telefone);

    fflush(stdin);
    printf("Endereco completo (rua,numero,bairro,cidade e CEP) \n OBS: separe todos por virgula: ");
    gets(dadosPaciente.endereco);

    fflush(stdin);
    printf("Comorbidade do paciente: ");
    gets(dadosPaciente.comorbidade);


    fflush(stdin);
    printf("Data do diagnostico: ");
    gets(dadosPaciente.dataDiagnostico);


    espaco();

    //IMPRIMINDO AS VARIAVEIS DA STRUCT.
/*
    printf("Nome do paciente: %s", dadosPaciente.nome);
    printf("Nome do paciente: %s", dadosPaciente.idade);
    printf("\nCPF do paciente: %s", dadosPaciente.cpf);
    printf("\nEmail do paciente: %s", dadosPaciente.email);
    printf("\nTelefone do paciente: %s", dadosPaciente.telefone);
    printf("\nEnderco do paciente: %s", dadosPaciente.endereco);
    printf("\nComorbidade do paciente: %s", dadosPaciente.comorbidade);
    printf("\nData do diagnostico: %s", dadosPaciente.dataDiagnostico);
*/

    // FUNCAO QUE CRIA O ARQUIVO TXT E IMPRIME NO TXT.

    FILE *filew;
    filew = fopen ("trabalho.txt", "w");
    fprintf (filew,"\nNome:");
    fprintf (filew,dadosPaciente.nome);
    fprintf (filew,"\n");

    fprintf (filew,"Cpf:");
    fprintf (filew,dadosPaciente.cpf);
    fprintf (filew,"\n");

    fprintf (filew,"Email:");
    fprintf (filew,dadosPaciente.email);
    fprintf (filew,"\n");

    fprintf (filew,"Dia e Mes de nascimento:");
    fprintf (filew,dadosPaciente.dia);
    fprintf (filew,"\n");

    fprintf (filew,"Idade:");
    fprintf (filew,dadosPaciente.convertint);
    fprintf (filew,"\n");

    fprintf (filew,"Telefone:");
    fprintf (filew,dadosPaciente.telefone);
    fprintf (filew,"\n");

    fprintf (filew,"Endereco:");
    fprintf (filew,dadosPaciente.endereco);
    fprintf (filew,"\n");

    fprintf (filew,"Comorbidade:");
    fprintf (filew,dadosPaciente.comorbidade);
    fprintf (filew,"\n");

    fprintf (filew,"Data do diagnostico:");
    fprintf (filew,dadosPaciente.dataDiagnostico);
    fprintf (filew,"\n");


    fclose(filew);

    espaco();
    printf("\n%s cadastrado com sucesso !!!! \n",dadosPaciente.nome);

    menu2();


}

// FUNCAO PARA LER O CADASTRO.
int Read (void){

    setlocale(LC_ALL,"");

    char texto[255];

    FILE *file2;
    file2 = fopen ("trabalho.txt", "r");

    if (file2 == NULL){
        printf("\nArquivo nao encontrado !!");
        system("pause");
        return 0;
    }

    //WHILE PARA LER TODOS OS TEXTOS QUE EXISTIR.
    while (fgets(texto,255,file2)!= NULL){
        printf("%s",texto);
    }
    fclose (file2);
    espaco();
    system("pause");
    menu2();

}

//FUNCAO PARA ANEXAR NOVO REGISTRO

int anexar (void){

    setlocale(LC_ALL,"");

    struct Paciente dadosPaciente;

    fflush(stdin);
    printf("Nome do paciente: ");
    gets(dadosPaciente.nome);

    fflush(stdin);
    printf("Dia e Mes de nascimento dd/mm:");
    gets(dadosPaciente.dia);


    printf("Ano de nascimento :");
    scanf("%d",&dadosPaciente.ano);
    dadosPaciente.anoatual = 2021;
    dadosPaciente.idade = dadosPaciente.anoatual - dadosPaciente.ano;
    printf("de acordo com a data de 25/11/2021 a idade do paciente � : %d\n",dadosPaciente.idade);
    if(dadosPaciente.idade >= 65){
        printf("O paciente faz parte do grupo de risco\n");
    }
    fflush(stdin);
    itoa(dadosPaciente.idade,dadosPaciente.convertint,10);

    fflush(stdin);
    printf("CPF do paciente: ");
    gets(dadosPaciente.cpf);


    fflush(stdin);
    printf("Email do paciente: ");
    gets(dadosPaciente.email);


    fflush(stdin);
    printf("Telefone do paciente: ");
    gets(dadosPaciente.telefone);

    fflush(stdin);
    printf("Endereco completo (rua,numero,bairro,cidade e CEP) \n OBS: separe todos por virgula: ");
    gets(dadosPaciente.endereco);

    fflush(stdin);
    printf("Comorbidade do paciente: ");
    gets(dadosPaciente.comorbidade);


    fflush(stdin);
    printf("Data do diagnostico: ");
    gets(dadosPaciente.dataDiagnostico);


    espaco();

/*
    printf("Nome do paciente: %s", dadosPaciente.nome);
    printf("\nCPF do paciente: %s", dadosPaciente.cpf);
    printf("\nEmail do paciente: %s", dadosPaciente.email);
    printf("\nTelefone do paciente: %s", dadosPaciente.telefone);
    printf("\nEndereco do paciente: %s", dadosPaciente.endereco);
    printf("\nComorbidade do paciente: %s", dadosPaciente.comorbidade);
    printf("\nData do diagnostico: %s", dadosPaciente.dataDiagnostico);
    */

    // FUNCAO QUE CRIA O ARQUIVO TXT E IMPRIME NO TXT.

    FILE *filea;
    filea = fopen ("trabalho.txt", "a");

    if (filea == NULL){
        printf("\nArquivo nao encontrado !!");
    }
    fprintf (filea,"\nNome:");
    fprintf (filea,dadosPaciente.nome);
    fprintf (filea,"\n");

    fprintf (filea,"Cpf:");
    fprintf (filea,dadosPaciente.cpf);
    fprintf (filea,"\n");

    fprintf (filea,"Email:");
    fprintf (filea,dadosPaciente.email);
    fprintf (filea,"\n");

    fprintf (filea,"Dia e Mes de nascimento:");
    fprintf (filea,dadosPaciente.dia);
    fprintf (filea,"\n");

    fprintf (filea,"Idade:");
    fprintf (filea,dadosPaciente.convertint);
    fprintf (filea,"\n");

    fprintf (filea,"Telefone:");
    fprintf (filea,dadosPaciente.telefone);
    fprintf (filea,"\n");

    fprintf (filea,"Endereao:");
    fprintf (filea,dadosPaciente.endereco);
    fprintf (filea,"\n");

    fprintf (filea,"Comorbidade:");
    fprintf (filea,dadosPaciente.comorbidade);
    fprintf (filea,"\n");

    fprintf (filea,"Data do diagnostico:");
    fprintf (filea,dadosPaciente.dataDiagnostico);
    fprintf (filea,"\n");


    fclose(filea);

    espaco();
    printf("\n%s cadastrado com sucesso !!!! \n",dadosPaciente.nome);

    menu2();


}



int MENU_CADASTRO (){

setlocale(LC_ALL,"");

menu2();

int opcao,valido = 0;


while (valido == 0 ){
scanf("%d", &opcao);

 switch (opcao){
 case 1:
     printf("Cadastro selecionado\n\n ");
     cadastro();
     valido == 1;
      break;
 case 2:
     printf("\nLeitura selecionado\n\n ");
     Read();
     break;
 case 3:
    printf("\nNovo cadastro\n\n ");
    anexar();
    break;


 default:
     espaco();
    printf("{{{(>_<)}}} OPCAO INVALIDA !!");
    espaco();
    menu2();
}
}
}


int main(){
    inicio:
    setlocale(LC_ALL, "");

    //OPCAO - LOGIN/CADASTRO
    int opcao;

    //LOGIN/CADASTRO/CONF. SENHA
    char login1[255], login2[255];
    char senha1[255], senha2[255], senhaconf[255];

    //CONTADORES
    int i = 0, j = 0, k = 0;

    //MEM.SET LOGIN/CADASTRO/CONF.SENHA
    memset(login1, 0x00, sizeof(login1));
    memset(login2, 0x00, sizeof(login2));
    memset(senha1, 0x00, sizeof(senha1));
    memset(senha2, 0x00, sizeof(senha2));
    memset(senhaconf, 0x00, sizeof(senhaconf));

    //MENU - LOGIN/CADASTRO
    menuinicial:
    desenhaBorda();
    pulaLinha();
    printf("1 - LOGIN");
    printf("\t\t|\t\t");
    printf("2 - CADASTRO");
    pulaLinha();
    desenhaBorda();
    pulaLinha();
    printf("OPCAO DESEJADA N�: ");
    scanf("%d", &opcao);
    limpaTela();

    //LOGIN/SENHA
    switch(opcao){
    case 1:
        desenhaBorda();
        pulaLinha();
        printf("\t\t       LOGIN");
        pulaLinha();
        desenhaBorda();
        pulaLinha();
        printf("NOME DE USUARIO: ");
        scanf("%s", &login1);
        printf("SENHA: ");
        fflush(stdin);

         //MASCARA DE SENHA LOGIN
        do{
        senha1[i] = getch();

        if(senha1[i] == 0x08 && i > 0){
            printf("\b \b");
            senha1[i] = 0x00;
            i--;

        }

        else if(senha1[i] == 13){
            senha1[i] = 0x00;
            break;

        }

        else if(senha1[i] != 0x08){
            putchar('*');
            i++;

        }

        }while(i < 255);

        limpaTela();

        //MENSAGEM DE LOGIN
        if(strcmp(login1, login2) == 0 && strcmp(senha1, senha2) == 0){
            desenhaBorda();
            pulaLinha();
            printf("LOGIN REALIZADO COM SUCESSO!");
            pulaLinha();
            desenhaBorda();
            pulaLinha();
            pausaSistema();
            limpaTela();
            MENU_CADASTRO();


        }

        else{
            desenhaBorda();
            pulaLinha();
            printf("NOME DE USUARIO E/OU SENHA INVALIDOS!");
            pulaLinha();
            desenhaBorda();
            pulaLinha();
            pausaSistema();
            limpaTela();
            goto menuinicial;
        }

        break;

         case 2:
        //CADASTRO
        desenhaBorda();
        pulaLinha();
        printf("\t\t     CADASTRO");
        pulaLinha();
        desenhaBorda();
        pulaLinha();
        printf("NOME DE USUARIO: ");
        scanf("%s", &login2);
        printf("SENHA: ");
        fflush(stdin);

        //MASCARA DE SENHA CADASTRO
        do{
        senha2[j] = getch();

        if(senha2[j] == 0x08 && j > 0){
            printf("\b \b");
            senha2[j] = 0x00;
            j--;

        }

        else if(senha2[j] == 13){
            senha2[j] = 0x00;
            break;

        }

        else if(senha2[j] != 0x08){
            putchar('*');
            j++;

        }

        }while(j < 255);

        pulaLinha();
        printf("CONFIRME A SENHA: ");
        fflush(stdin);

        //MASCARA DE SENHA CADASTRO/CONFIRMACAO
        do{
        senhaconf[k] = getch();

        if(senhaconf[k] == 0x08 && k > 0){
            printf("\b \b");
            senhaconf[k] = 0x00;
            k--;

        }

        else if(senhaconf[k] == 13){
            senhaconf[k] = 0x00;
            break;

        }

        else if(senhaconf[k] != 0x08){
            putchar('*');
            k++;

        }

        }while(k < 255);

        limpaTela();

        //MENSAGEM DE CADASTRO
        if(strcmp(senha2, senhaconf) == 0){
            desenhaBorda();
            pulaLinha();
            printf("CADASTRO REALIZADO COM SUCESSO!");
            pulaLinha();
            desenhaBorda();
            pulaLinha();
            pausaSistema();
            limpaTela();
            goto menuinicial;

        }

        else{
            desenhaBorda();
            pulaLinha();
            printf("AS SENHAS NAO COINCIDEM, TENTE NOVAMENTE!");
            pulaLinha();
            desenhaBorda();
            pulaLinha();
            pausaSistema();
            limpaTela();
            goto inicio;

        }

        break;
    }
}


