struct   student {
    char CLBcoMd [25];
    int qi_g;
    int bang_g;
    char AtDAGXmB;
    char xb;
    int nr17ZvmMX;
    int EmKlWjOQc9LT;
};
int comp_money (struct   student s);

int main () {
    int qcV0zLoD;
    int max;
    int icK1tY4b;
    struct   student Co6tukZ35wqc [LEN];
    int iINXpgRsE;
    int i;
    icK1tY4b = (381 - 381);
    scanf ("%d", &iINXpgRsE);
    for (i = (569 - 569); iINXpgRsE > i; i = i + (46 - 45)) {
        scanf ("%s %d %d %c %c %d", Co6tukZ35wqc[i].CLBcoMd, &Co6tukZ35wqc[i].qi_g, &Co6tukZ35wqc[i].bang_g, &Co6tukZ35wqc[i].AtDAGXmB, &Co6tukZ35wqc[i].xb, &Co6tukZ35wqc[i].nr17ZvmMX);
        Co6tukZ35wqc[i].EmKlWjOQc9LT = comp_money (Co6tukZ35wqc[i]);
    }
    qcV0zLoD = max = Co6tukZ35wqc[(764 - 764)].EmKlWjOQc9LT;
    for (i = (748 - 747); iINXpgRsE > i; i++) {
        if (max < Co6tukZ35wqc[i].EmKlWjOQc9LT) {
            max = Co6tukZ35wqc[i].EmKlWjOQc9LT;
            icK1tY4b = i;
        }
        qcV0zLoD += Co6tukZ35wqc[i].EmKlWjOQc9LT;
    }
    printf ("%s\n", Co6tukZ35wqc[icK1tY4b].CLBcoMd);
    printf ("%d\n", Co6tukZ35wqc[icK1tY4b].EmKlWjOQc9LT);
    printf ("%d\n", qcV0zLoD);
    return (693 - 693);
}

int comp_money (struct   student s) {
    int qcV0zLoD;
    qcV0zLoD = (287 - 287);
    if ((s.qi_g > (413 - 333)) && (1 <= s.nr17ZvmMX))
        qcV0zLoD += (8599 - 599);
    if (((435 - 350) < s.qi_g) && (s.bang_g > (169 - 89)))
        qcV0zLoD += (4573 - 573);
    if (s.qi_g > (990 - 900))
        qcV0zLoD += 2000;
    if ((s.qi_g > (762 - 677)) && (s.xb == 'Y'))
        qcV0zLoD += (1320 - 320);
    if ((s.bang_g > 80) && (s.AtDAGXmB == 'Y'))
        qcV0zLoD += (1210 - 360);
    return qcV0zLoD;
}

