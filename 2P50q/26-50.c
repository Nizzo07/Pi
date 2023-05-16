#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

//1
int lenght(LInt l)
{
    int count = 0;

    while(l != NULL)
    {
        count++;
        l = l->prox;
    }
    return count;
}

//2
void freeL(LInt)
{
    LInt list;

    while (l != NULL)
    {
        list = l->prox;
        free(l);
        l = list;
    }
}

//3
void printL(LInt l)
{
    while (l != NULL)
    {
        printf("%d", l->valor);
        l = l->prox;
    }
    
}

//4
LInt reverseL(LInt l)
{
    LInt front, back = NULL;

    while (1)
    {
        front = l->prox;
        l->prox = back;
        back = l;
        l = front;
    }
    return back;
}

//5
void insertOrd(LInt *l, int x)
{
    LInt nova;

    nova = malloc(sizeof(struct lligada));
    nova->valor = x;
    nova->prox = NULL;

    while (*l != NULL && (*l)->valor < x)
    {
        l = &((*l)->prox);
    }
    nova->prox = (*l);
    *l = nova;
}

//6
int removeOneOrd(LInt *l, int x)
{
    int ans = 1;
    for(; *l && (*l)->valor < x; l = &(*l)->prox);
    if(*l && (*l)->valor == x)
    {
        ans = 0;
        LInt temp = *l;
        *l = (*l)->prox;
        free(temp);
    }
    return ans;
}

//7
void merge(LInt *r, LInt a, LInt b)
{
    while (a != NULL || b != NULL)
    {
        if(a != NULL && b != NULL && a->valor < b->valor || b == NULL)
    {
        *r = a;
        a = a->prox;
    } else {
        *r = b;
        b = b->prox;
    }
    r = &((*r)->prox);
    }
    *r = NULL;
}

//8
void splitQS(LInt l, int x, LInt *mx, LInt *Mx)
{
    while (l != NULL)
    {
        if (l -> valor < x)
        {
            *mx = l;
            mx = &((*mx)->prox);
        } else {
            *Mx = l;
            Mx = &((*Mx)->prox);
        }
        l = l->prox;
        
    }
    *mx = NULL;
    *Mx = NULL;
}

//9
LInt parteAmeio(LInt *l)
{
    int meio = lenght(*l)/2;
    if(meio == 0)
    {
        return NULL;
    } else {
        LInt y = (*l);
        LInt prev = NULL;
        for(int i = 0; i < meio; i++)
        {
            prev = (*l);
            (*l) = (*l)->prox;
        }
            prev->prox = NULL;
    return y;
    }
}
//10
int verifica(LInt *l, int x)
{
    int r = 1;

    while ((*l)->prox != NULL)
    {
        if((*l)->valor == x)
        {
            r = 0;
            break;
        }
    }
    return r;
}

int removeAll(LInt *l, int x)
{
    LInt aux = *l;
    int count = 0;

    while (verifica(l, x) == 1)
    {
        removeOneOrd(l, x);
        count++;
    }
    return count;
}