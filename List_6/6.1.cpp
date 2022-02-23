#include<stdio.h>

typedef struct P{
    char nome[100];
    char S;
    int idade;
    char Resp;
    float preco;
}pessoa;

void preenche(pessoa *V, int n)
{
    char url[]="pesquisa.txt";

    FILE *arq;

    arq=fopen(url, "w");

    if(arq==NULL)
    {
        printf("Erro ao abrir o arquivo");
        system("pause");
    }
    else
    {
        int i;
        for(i=0;i<n;i++)
        {
            fflush(stdin);
            printf("\nInsira o nome da pessoa:");
            gets(V[i].nome);
            fflush(stdin);
            fprintf(arq, "%s  ", V[i].nome);
            printf("\nInsira o sexo da pessoa (M) ou (F):");
            scanf("%c", &V[i].S);
            fflush(stdin);
            fprintf(arq, "%c  ", V[i].S);
            printf("\nInsira a idade da pessoa:");
            scanf("%d", &V[i].idade);
            fflush(stdin);
            fprintf(arq, "%d  ", V[i].idade);
            printf("\nInsira a resposta da pessoa sim(S), nao(N) ou indeciso(I):");
            scanf("%c", &V[i].Resp);
            fflush(stdin);
            fprintf(arq, "%c  ", V[i].Resp);
            printf("\nInsira o valor pago pelo produto:");
            scanf("%f", &V[i].preco);
            fprintf(arq, "%.2f\n", V[i].preco);
        }
    }
}

float mediaidade(pessoa *V, int n, char S)
{
    int i,count=0;
    float T=0;

    if(S=='F')
    {
        for(i=0;i<n;i++)
        {
            if(V[i].S=='F')
            {
                T+=V[i].idade;
                count++;
            }
        }
    }
    else if(S=='M')
    {
        for(i=0;i<n;i++)
        {
            if(V[i].S=='M')
            {
                T+=V[i].idade;
                count++;
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            T+=V[i].idade;
            count++;
        }
    }
    return (T/(float)count);
}


int maiormediaidade(pessoa *V, int n, char S)
{
    int i,c3=0;
    float T=0;
    T = mediaidade(V, n, S);
    for(i=0;i<n;i++)
    {
        if(V[i].idade>T)
        {
            c3++;
        }
    }
    return c3;
}

int igualmediaidade(pessoa *V, int n, char S)
{
    int i,c2=0;
    float T=0;
    T = mediaidade(V, n, S);
    for(i=0;i<n;i++)
    {
        if(V[i].idade>T)
        {
            c2++;
        }
    }
    return c2;
}

int menormediaidade(pessoa *V, int n, char S)
{
    int i,c1=0;
    float T=0;
    T = mediaidade(V, n, S);
    for(i=0;i<n;i++)
    {
        if(V[i].idade>T)
        {
            c1++;
        }
    }
    return c1;
}



void listaresponderam(pessoa *V, int n, char S)
{

    int i;
    char respos;
    printf("Deseja as lista e quem respondeu sim, nao ou indeciso?");
    scanf("%c", &respos);
    for(i=0;i<n;i++)
    {
        if(V[i].Resp==respos && V[i].S==S)
        {
            printf("%s\n", V[i].nome);
        }
    }
}

float mediapreco(pessoa *V, int n, char S)
{
    int i,count=0;
    float T=0;

    if(S=='F')
    {
        for(i=0;i<n;i++)
        {
            if(V[i].S=='F')
            {
                T+=V[i].preco;
                count++;
            }
        }
    }
    else if(S=='M')
    {
        for(i=0;i<n;i++)
        {
            if(V[i].S=='M')
            {
                T+=V[i].preco;
                count++;
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            T+=V[i].preco;
            count++;
        }
    }
    T=T/(float)count;
    return T;
}

int pagaramacima(pessoa *V, int n, char S)
{
    int i,c1=0;
    float T=0;
    T=mediapreco(V, n, S);
    for(i=0;i<n;i++)
    {
        if(V[i].preco>T)
        {
            c1++;
        }
    }
    return c1;
}

int pagaramabaixo(pessoa *V, int n, char S)
{
    int i,c1=0;
    float T=0;
    T=mediapreco(V, n, S);
    for(i=0;i<n;i++)
    {
        if(V[i].preco<T)
        {
            c1++;
        }
    }
    return c1;
}

void menu()
{
    printf("////////Menu//////\n");
    printf("1-Media de idade e Media de precos\n");
    printf("2-Quais responderam sim, nao ou indeciso\n");
    printf("3-Quantos entrevistados tem idade acima, igual e abaixo da media\n");
    printf("4-Quantos pagaram acima da media e quantos pagaram abaixo\n");
    printf("0-Sair\n");
    printf("Selecione uma opcao: ");
}

void seleciona(pessoa *V, int n)
{
    int num;
    char S;
    do
    {
        menu();
        scanf("%d", &num);
        switch(num)
        {
            case 1:
                fflush(stdin);
                printf("Deseja a media de homem(M), mulher(F) ou ambos(A)?\n");
                scanf("%c", &S);
                fflush(stdin);
                printf("A media de precos pagos foi: %.2f\n", mediapreco(V, n, S));
                printf("A media de idade e de: %.2f\n", mediaidade(V, n, S));
                break;
            case 2:
                fflush(stdin);
                printf("Deseja a lista de homem(M), mulher(F) ou ambos(A)?\n");
                scanf("%c", &S);
                fflush(stdin);
                listaresponderam(V, n, S);
                break;
            case 3:
                fflush(stdin);
                printf("Deseja saber a idade de homem(M), mulher(F) ou ambos(A)?\n");
                scanf("%c", &S);
                fflush(stdin);
                printf("Numero de pessoas com idade maior que a media: %d\n", maiormediaidade(V, n, S));
                printf("Numero de pessoas com idade igual que a media: %d\n", igualmediaidade(V, n, S));
                printf("Numero de pessoas com idade menor que a media: %d\n", menormediaidade(V, n, S));
                break;
            case 4:
                fflush(stdin);
                printf("Deseja saber quem pagou acima da media: homem(M), mulher(F) ou ambos(A)?\n");
                scanf("%c", &S);
                fflush(stdin);
                printf("A media de precos pagos acima foi: %d\n", pagaramacima(V, n, S));
                printf("A media de precos pagos abaixo foi: %d\n", pagaramabaixo(V, n, S));
                break;
            case 0:
                printf("Sair\n");
                break;
            default:
                printf("Digite um valor entre 0 e 4\n");
        }
    }while(num!=0);
}

int main()
{
    int n;
    printf("Insira o numero de pessoas que participaram: ");
    scanf("%d", &n);
    pessoa V[n];
    preenche(V, n);
    seleciona(V, n);
    return 0;
}
