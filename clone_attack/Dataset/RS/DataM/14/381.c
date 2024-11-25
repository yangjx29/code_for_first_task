struct   student {
    int D76DtTkbJ;
    int S1SDaRzevC;
    int JHiwG2qRSQmp;
    struct   student *vBtisl;
};
int sVDROl4eE, max0;

struct   student *yZKrueEq (void ) {
    int NXVEdMI2F;
    struct   student *head, *p1, *yB7yrT;
    p1 = yB7yrT = (struct   student *) malloc (sizeof (struct   student));
    head = p1;
    for (NXVEdMI2F = (780 - 779); NXVEdMI2F < sVDROl4eE; NXVEdMI2F = NXVEdMI2F +1) {
        scanf ("%d%d%d", &p1->D76DtTkbJ, &p1->S1SDaRzevC, &p1->JHiwG2qRSQmp);
        p1 = (struct   student *) malloc (sizeof (struct   student));
        yB7yrT->vBtisl = p1;
        yB7yrT = p1;
    }
    scanf ("%d%d%d", &p1->D76DtTkbJ, &p1->S1SDaRzevC, &p1->JHiwG2qRSQmp);
    yB7yrT->vBtisl = p1;
    p1->vBtisl = NULL;
    return head;
}

void  v8qa30B (struct   student *head, int wikJ8qEh1l, int rPOhfFcsZax) {
    struct   student *p1, *qqr2aR0, *yB7yrT;
    qqr2aR0 = (struct   student *) malloc (sizeof (struct   student));
    qqr2aR0->S1SDaRzevC = qqr2aR0->JHiwG2qRSQmp = (247 - 247);
    for (yB7yrT = head; yB7yrT != NULL; yB7yrT = yB7yrT->vBtisl)
        if (yB7yrT->S1SDaRzevC + yB7yrT->JHiwG2qRSQmp == wikJ8qEh1l)
            break;
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
    for (p1 = head; p1 != NULL; p1 = p1->vBtisl)
        if ((qqr2aR0->S1SDaRzevC + qqr2aR0->JHiwG2qRSQmp < p1->S1SDaRzevC + p1->JHiwG2qRSQmp) && (p1->S1SDaRzevC + p1->JHiwG2qRSQmp != wikJ8qEh1l || p1->S1SDaRzevC + p1->JHiwG2qRSQmp == wikJ8qEh1l && p1->D76DtTkbJ != yB7yrT->D76DtTkbJ) && (p1->S1SDaRzevC + p1->JHiwG2qRSQmp != rPOhfFcsZax)) {
            qqr2aR0->S1SDaRzevC = p1->S1SDaRzevC;
            qqr2aR0->JHiwG2qRSQmp = p1->JHiwG2qRSQmp;
            qqr2aR0->D76DtTkbJ = p1->D76DtTkbJ;
        }
    max0 = qqr2aR0->S1SDaRzevC + qqr2aR0->JHiwG2qRSQmp;
    printf ("%d %d\n", qqr2aR0->D76DtTkbJ, max0);
}

main () {
    int L6cJz8Kt214, b2yJn4P;
    struct   student *head;
    head = yZKrueEq ();
    scanf ("%d", &sVDROl4eE);
    v8qa30B (head, (921 - 921), (426 - 426));
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    L6cJz8Kt214 = max0;
    v8qa30B (head, L6cJz8Kt214, (764 - 764));
    b2yJn4P = max0;
    v8qa30B (head, L6cJz8Kt214, b2yJn4P);
}

