struct   student {
    char ceuFdc7 [(627 - 606)];
    int JmnbDEptwI2C;
    int Cq2aU8NP1TZ;
    char bLGXslKWO;
    char lrHcoJQIbG;
    int stGwjov5;
    int hIAUvrdy;
    struct   student *FFGc81TH4;
};
struct   student *Ll9yuVM, *dsl9b3, *jZz6gu, *e9avxz;

void  main () {
    int qJ2SqjQG0;
    int u9LifnyUqR2;
    int zdJLfRP;
    int pOxrqJ;
    qJ2SqjQG0 = (13 - 13);
    scanf ("%d", &u9LifnyUqR2);
    jZz6gu = dsl9b3 = Ll9yuVM = (struct   student *) malloc (LEN);
    e9avxz = jZz6gu;
    for (pOxrqJ = (586 - 586); pOxrqJ < u9LifnyUqR2; pOxrqJ++) {
        scanf ("%s %d %d %c %c %d", Ll9yuVM->ceuFdc7, &Ll9yuVM->JmnbDEptwI2C, &Ll9yuVM->Cq2aU8NP1TZ, &Ll9yuVM->bLGXslKWO, &Ll9yuVM->lrHcoJQIbG, &Ll9yuVM->stGwjov5);
        Ll9yuVM->hIAUvrdy = (125 - 125);
        if (Ll9yuVM->JmnbDEptwI2C > (789 - 709) && Ll9yuVM->stGwjov5)
            Ll9yuVM->hIAUvrdy = 8000 + Ll9yuVM->hIAUvrdy;
        if (Ll9yuVM->JmnbDEptwI2C > (815 - 730) && Ll9yuVM->Cq2aU8NP1TZ > (389 - 309))
            Ll9yuVM->hIAUvrdy = (4748 - 748) + Ll9yuVM->hIAUvrdy;
        if (Ll9yuVM->JmnbDEptwI2C > (576 - 486))
            Ll9yuVM->hIAUvrdy = (2859 - 859) + Ll9yuVM->hIAUvrdy;
        if (Ll9yuVM->JmnbDEptwI2C > (135 - 50) && Ll9yuVM->lrHcoJQIbG == 'Y')
            Ll9yuVM->hIAUvrdy = (1949 - 949) + Ll9yuVM->hIAUvrdy;
        if (Ll9yuVM->Cq2aU8NP1TZ > (130 - 50) && Ll9yuVM->bLGXslKWO == 'Y')
            Ll9yuVM->hIAUvrdy = (1604 - 754) + Ll9yuVM->hIAUvrdy;
        qJ2SqjQG0 = qJ2SqjQG0 + Ll9yuVM->hIAUvrdy;
        Ll9yuVM = (struct   student *) malloc (LEN);
        dsl9b3->FFGc81TH4 = Ll9yuVM;
        dsl9b3 = Ll9yuVM;
    }
    Ll9yuVM->FFGc81TH4 = NULL;
    Ll9yuVM = jZz6gu->FFGc81TH4;
    zdJLfRP = jZz6gu->hIAUvrdy;
    while (Ll9yuVM->FFGc81TH4) {
        if (Ll9yuVM->hIAUvrdy > zdJLfRP) {
            zdJLfRP = Ll9yuVM->hIAUvrdy;
            e9avxz = Ll9yuVM;
        }
        Ll9yuVM = Ll9yuVM->FFGc81TH4;
    }
    printf ("%s\n%d\n%d", e9avxz->ceuFdc7, zdJLfRP, qJ2SqjQG0);
}

