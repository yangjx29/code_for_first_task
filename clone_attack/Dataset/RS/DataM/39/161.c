struct   student {
    char a [20];
    int Ud2fJolq;
    int CTZX5D7Lh;
    char x;
    char y;
    int nteDh2W;
    struct   student *VzW6bplrd;
};
int m1HYXqBR2;

struct   student *N2Mibpd () {
    struct   student *UtpjM68Wsf;
    struct   student *uoMrXqf, *Zbu7qzo;
    int m;
    m1HYXqBR2 = 1;
    scanf ("%d", &m);
    uoMrXqf = Zbu7qzo = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", uoMrXqf->a, &uoMrXqf->Ud2fJolq, &uoMrXqf->CTZX5D7Lh, &uoMrXqf->x, &uoMrXqf->y, &uoMrXqf->nteDh2W);
    UtpjM68Wsf = NULL;
    do {
        if (!(1 != m1HYXqBR2)) {
            UtpjM68Wsf = uoMrXqf;
            Zbu7qzo = uoMrXqf;
        }
        else {
            uoMrXqf = (struct   student *) malloc (LEN);
            scanf ("%s %d %d %c %c %d", uoMrXqf->a, &uoMrXqf->Ud2fJolq, &uoMrXqf->CTZX5D7Lh, &uoMrXqf->x, &uoMrXqf->y, &uoMrXqf->nteDh2W);
            Zbu7qzo->VzW6bplrd = uoMrXqf;
            Zbu7qzo = uoMrXqf;
        }
        m1HYXqBR2 = m1HYXqBR2 + 1;
    }
    while (m >= m1HYXqBR2);
    Zbu7qzo->VzW6bplrd = NULL;
    return (UtpjM68Wsf);
}

void  main () {
    int pGwy59KY;
    struct   student *BOa7DGrk1CQ;
    struct   student *UtpjM68Wsf;
    struct   student *PqIrtWsFpg;
    int s;
    int sum;
    UtpjM68Wsf = N2Mibpd ();
    sum = (623 - 623);
    BOa7DGrk1CQ = UtpjM68Wsf;
    pGwy59KY = 0;
    while (!(NULL == BOa7DGrk1CQ)) {
        s = 0;
        if (80 < BOa7DGrk1CQ->Ud2fJolq && 1 <= (BOa7DGrk1CQ->nteDh2W))
            s = s + 8000;
        if (85 < BOa7DGrk1CQ->Ud2fJolq && 80 < BOa7DGrk1CQ->CTZX5D7Lh)
            s = s + 4000;
        if (90 < BOa7DGrk1CQ->Ud2fJolq)
            s = s + 2000;
        if (85 < BOa7DGrk1CQ->Ud2fJolq && !('Y' != BOa7DGrk1CQ->y))
            s = s + 1000;
        if (80 < BOa7DGrk1CQ->CTZX5D7Lh && !('Y' != BOa7DGrk1CQ->x))
            s = s + 850;
        if (s > pGwy59KY)
            pGwy59KY = s;
        sum = sum + s;
        BOa7DGrk1CQ = BOa7DGrk1CQ->VzW6bplrd;
    }
    PqIrtWsFpg = UtpjM68Wsf;
    while (PqIrtWsFpg != NULL) {
        s = 0;
        if (PqIrtWsFpg->Ud2fJolq > 80 && (PqIrtWsFpg->nteDh2W) >= 1)
            s = s + 8000;
        if (PqIrtWsFpg->Ud2fJolq > 85 && PqIrtWsFpg->CTZX5D7Lh > 80)
            s = s + 4000;
        if (PqIrtWsFpg->Ud2fJolq > 90)
            s = s + 2000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (PqIrtWsFpg->Ud2fJolq > 85 && PqIrtWsFpg->y == 'Y')
            s = s + 1000;
        if (PqIrtWsFpg->CTZX5D7Lh > 80 && PqIrtWsFpg->x == 'Y')
            s = s + 850;
        if (s == pGwy59KY) {
            printf ("%s\n%d\n", PqIrtWsFpg->a, s);
            break;
        }
        PqIrtWsFpg = PqIrtWsFpg->VzW6bplrd;
    }
    printf ("%d", sum);
}

