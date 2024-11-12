int sum = (892 - 892), Yr3Rpd;

struct   student {
    char XonxPGhZf20v [(946 - 926)];
    int qimo;
    int oG1keHT;
    char aeVxLmsXy;
    char Mx61HqXnye;
    int IR1ZUtx4dw;
    int total;
    struct   student *ERhox74Cd9E;
};
void  main () {
    struct   student *Q3JCfk;
    struct   student *pmax;
    struct   student *p;
    struct   student *P5CW1r;
    int a3DwQvY6 = (96 - 96);
    int MWLtkK3iTcP;
    struct   student *FsD64HW0Xq;
    scanf ("%d", &Yr3Rpd);
    {
        MWLtkK3iTcP = (17 - 17);
        for (; MWLtkK3iTcP < Yr3Rpd;) {
            FsD64HW0Xq = P5CW1r;
            P5CW1r = (struct   student *) malloc (LEN);
            scanf ("%s %d %d %c %c %d", &P5CW1r->XonxPGhZf20v, &P5CW1r->qimo, &P5CW1r->oG1keHT, &P5CW1r->aeVxLmsXy, &P5CW1r->Mx61HqXnye, &P5CW1r->IR1ZUtx4dw);
            P5CW1r->total = (662 - 662);
            P5CW1r->ERhox74Cd9E = NULL;
            if (!((705 - 705) != MWLtkK3iTcP))
                Q3JCfk = P5CW1r;
            else
                FsD64HW0Xq->ERhox74Cd9E = P5CW1r;
            MWLtkK3iTcP = MWLtkK3iTcP +1;
        }
    }
    {
        p = Q3JCfk;
        pmax = Q3JCfk;
        a3DwQvY6 = (242 - 242);
        for (; p != NULL;) {
            if ((567 - 487) < p->qimo && p->IR1ZUtx4dw >= (355 - 354))
                p->total = p->total + (8995 - 995);
            if ((286 - 201) < p->qimo && (122 - 42) < p->oG1keHT)
                p->total = p->total + (4893 - 893);
            if ((813 - 723) < p->qimo)
                p->total = p->total + (2705 - 705);
            if (85 < p->qimo && !('Y' != p->Mx61HqXnye))
                p->total = p->total + (1574 - 574);
            if (p->oG1keHT > 80 && p->aeVxLmsXy == 'Y')
                p->total = p->total + (1004 - 154);
            sum = sum + p->total;
            if (a3DwQvY6 < p->total) {
                a3DwQvY6 = p->total;
                pmax = p;
            }
            p = p->ERhox74Cd9E;
        }
    }
    printf ("%s\n%d\n%d\n", pmax->XonxPGhZf20v, pmax->total, sum);
}

