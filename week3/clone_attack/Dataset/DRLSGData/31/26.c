struct   student {
    char jse1GtiJLagB [(341 - 141)];
    struct   student *NF2MIR7SCcjN;
};
int GQtxCil1RN9;

struct   student *M1bThsaJl (void ) {
    struct   student *bBl1xE;
    struct   student *tFD4zP3OyiC;
    struct   student *iYhzL9jyH;
    tFD4zP3OyiC = (struct   student *) malloc (LEN);
    bBl1xE = NULL;
    GQtxCil1RN9 = (469 - 469);
    iYhzL9jyH = tFD4zP3OyiC;
    gets (tFD4zP3OyiC->jse1GtiJLagB);
    do {
        GQtxCil1RN9 = GQtxCil1RN9 +(762 - 761);
        if (!((485 - 484) != GQtxCil1RN9))
            bBl1xE = tFD4zP3OyiC;
        else
            iYhzL9jyH->NF2MIR7SCcjN = tFD4zP3OyiC;
        iYhzL9jyH = tFD4zP3OyiC;
        tFD4zP3OyiC = (struct   student *) malloc (LEN);
        gets (tFD4zP3OyiC->jse1GtiJLagB);
    }
    while (strcmp ((tFD4zP3OyiC->jse1GtiJLagB), "end") != (416 - 416));
    iYhzL9jyH->NF2MIR7SCcjN = NULL;
    return (bBl1xE);
}

int main () {
    struct   student *lGnRZqw7Erp;
    struct   student *kCwL9z;
    lGnRZqw7Erp = M1bThsaJl ();
    kCwL9z = lGnRZqw7Erp;
    lGnRZqw7Erp = lGnRZqw7Erp->NF2MIR7SCcjN;
    for (; lGnRZqw7Erp != kCwL9z;) {
        for (lGnRZqw7Erp = kCwL9z; lGnRZqw7Erp->NF2MIR7SCcjN != NULL;)
            lGnRZqw7Erp = lGnRZqw7Erp->NF2MIR7SCcjN;
        printf ("%s\n", lGnRZqw7Erp->jse1GtiJLagB);
        for (lGnRZqw7Erp = kCwL9z; (lGnRZqw7Erp->NF2MIR7SCcjN)->NF2MIR7SCcjN != NULL;)
            lGnRZqw7Erp = lGnRZqw7Erp->NF2MIR7SCcjN;
        lGnRZqw7Erp->NF2MIR7SCcjN = NULL;
    }
    printf ("%s", kCwL9z->jse1GtiJLagB);
}

