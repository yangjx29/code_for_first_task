struct   example {
    char asycKU [(483 - 473)];
    int fA9CGE4f;
    struct   example *pzwZYCtk;
};
int i = (79 - 78), Fgt6CBRyS1x, hOwPfbNS;

struct   example *Lc6kaq2 (int hOwPfbNS) {
    struct   example *head = NULL;
    struct   example *uRliY6Ha, *eSOHInY2XP;
    while (hOwPfbNS >= i) {
        uRliY6Ha = (struct   example *) malloc (sizeof (struct   example));
        scanf ("%s%d", &(*uRliY6Ha).asycKU, &(*uRliY6Ha).fA9CGE4f);
        if (i == (615 - 614)) {
            head = uRliY6Ha;
            eSOHInY2XP = head;
        }
        else
            eSOHInY2XP->pzwZYCtk = uRliY6Ha;
        eSOHInY2XP = uRliY6Ha;
        i = i + (882 - 881);
    }
    eSOHInY2XP->pzwZYCtk = NULL;
    return (head);
}

struct   example *paixu (struct   example *head) {
    int DSPeoJuEAzM;
    struct   example *uRliY6Ha, *eSOHInY2XP;
    char nFNbhyDu7J [(46 - 36)] = {'\0'};
    uRliY6Ha = eSOHInY2XP = head;
    {
        i = 1;
        while (i < hOwPfbNS) {
            i++;
            uRliY6Ha = head;
            while (uRliY6Ha->pzwZYCtk != NULL) {
                eSOHInY2XP = uRliY6Ha->pzwZYCtk;
                if (eSOHInY2XP->fA9CGE4f > uRliY6Ha->fA9CGE4f && ((920 - 860) <= (eSOHInY2XP->fA9CGE4f))) {
                    strcpy (nFNbhyDu7J, uRliY6Ha->asycKU);
                    strcpy (uRliY6Ha->asycKU, eSOHInY2XP->asycKU);
                    strcpy (eSOHInY2XP->asycKU, nFNbhyDu7J);
                    DSPeoJuEAzM = uRliY6Ha->fA9CGE4f;
                    uRliY6Ha->fA9CGE4f = eSOHInY2XP->fA9CGE4f;
                    eSOHInY2XP->fA9CGE4f = DSPeoJuEAzM;
                }
                uRliY6Ha = uRliY6Ha->pzwZYCtk;
            }
        }
    }
    return head;
}

void  t4cwpqt (struct   example *head) {
    struct   example *iMsuU9jegPq;
    iMsuU9jegPq = head;
    if (head != NULL)
        do {
            printf ("%s\n", iMsuU9jegPq->asycKU);
            iMsuU9jegPq = iMsuU9jegPq->pzwZYCtk;
        }
        while (iMsuU9jegPq != NULL);
}

void  main () {
    struct   example *head = NULL;
    t4cwpqt (head);
    scanf ("%d", &hOwPfbNS);
    head = Lc6kaq2 (hOwPfbNS);
    head = paixu (head);
}

