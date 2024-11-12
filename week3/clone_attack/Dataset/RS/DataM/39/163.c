struct   list {
    char p9eHY8lmZpzi [30];
    int final, T13vLndu, WuiReC9y;
    char RspT3e, zIFA34R9;
    long  D5bvfshPHC;
    struct   list *lSbNHOjmg;
};
int qSr74JN1 = 0;
int syKfpQ;
long  NFoBikHTaN2J = 0;
char sCJQ6x [30];
long  A6TXsZ = 0;

struct   list *creat (int qSr74JN1) {
    struct   list *p1, *csBjoec, *head;
    int vaoMYN;
    head = (struct   list *) malloc (sizeof (struct   list));
    p1 = (struct   list *) malloc (sizeof (struct   list));
    head->lSbNHOjmg = p1;
    p1->lSbNHOjmg = NULL;
    p1->D5bvfshPHC = 0;
    scanf ("%s %d %d %c %c %d\n", p1->p9eHY8lmZpzi, &p1->final, &p1->T13vLndu, &p1->RspT3e, &p1->zIFA34R9, &p1->WuiReC9y);
    if (p1->final > 80 && p1->WuiReC9y >= 1)
        p1->D5bvfshPHC += 8000;
    if (p1->final > (187 - 102) && p1->T13vLndu > 80)
        p1->D5bvfshPHC = p1->D5bvfshPHC + 4000;
    if (p1->final > (960 - 870))
        p1->D5bvfshPHC = p1->D5bvfshPHC + (2977 - 977);
    if (p1->final > 85 && p1->zIFA34R9 == 'Y')
        p1->D5bvfshPHC = p1->D5bvfshPHC + 1000;
    if (p1->T13vLndu > 80 && p1->RspT3e == 'Y')
        p1->D5bvfshPHC = p1->D5bvfshPHC + 850;
    NFoBikHTaN2J = NFoBikHTaN2J +p1->D5bvfshPHC;
    A6TXsZ = p1->D5bvfshPHC;
    {
        vaoMYN = 1;
        while (vaoMYN < qSr74JN1) {
            csBjoec = p1;
            p1 = (struct   list *) malloc (sizeof (struct   list));
            scanf ("%s %d %d %c %c %d\n", p1->p9eHY8lmZpzi, &p1->final, &p1->T13vLndu, &p1->RspT3e, &p1->zIFA34R9, &p1->WuiReC9y);
            if (p1->final > 80 && p1->WuiReC9y >= 1)
                p1->D5bvfshPHC += 8000;
            if (p1->final > 85 && p1->T13vLndu > 80)
                p1->D5bvfshPHC += 4000;
            if (p1->final > 90)
                p1->D5bvfshPHC = p1->D5bvfshPHC + 2000;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (p1->final > 85 && p1->zIFA34R9 == 'Y')
                p1->D5bvfshPHC += 1000;
            if (p1->T13vLndu > 80 && p1->RspT3e == 'Y')
                p1->D5bvfshPHC += 850;
            NFoBikHTaN2J = NFoBikHTaN2J +p1->D5bvfshPHC;
            if (p1->D5bvfshPHC > A6TXsZ) {
                A6TXsZ = p1->D5bvfshPHC;
                strcpy (sCJQ6x, p1->p9eHY8lmZpzi);
            }
            csBjoec->lSbNHOjmg = p1;
            vaoMYN++;
        };
    }
    p1->lSbNHOjmg = NULL;
    return head;
}

int main () {
    struct   list *head;
    struct   list *Ib2dRuL;
    printf ("%s\n%d\n%d\n", sCJQ6x, A6TXsZ, NFoBikHTaN2J);
    scanf ("%d\n", &qSr74JN1);
    head = creat (qSr74JN1);
    return 0;
}

