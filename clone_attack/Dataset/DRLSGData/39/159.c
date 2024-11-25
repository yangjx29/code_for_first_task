struct   QOpr9l4PR {
    char name [(487 - 467)];
    int IM085vqZF;
    int score2;
    char leader;
    char west;
    int SnezwSOXkR;
}
QOpr9l4PR [(1087 - 987)];

void  main () {
    int lKughZbATs;
    int HVr0t7;
    int max;
    int f6ejJ5oSg2O;
    int Kw1Ctn [100] = {(324 - 324)};
    scanf ("%d", &f6ejJ5oSg2O);
    for (lKughZbATs = (489 - 489); f6ejJ5oSg2O > lKughZbATs; lKughZbATs = lKughZbATs + (314 - 313))
        scanf ("%s%d%d %c %c %d", &QOpr9l4PR[lKughZbATs].name, &QOpr9l4PR[lKughZbATs].IM085vqZF, &QOpr9l4PR[lKughZbATs].score2, &QOpr9l4PR[lKughZbATs].leader, &QOpr9l4PR[lKughZbATs].west, &QOpr9l4PR[lKughZbATs].SnezwSOXkR);
    for (lKughZbATs = (711 - 711); f6ejJ5oSg2O > lKughZbATs; lKughZbATs = lKughZbATs + 1) {
        if ((688 - 608) < QOpr9l4PR[lKughZbATs].IM085vqZF && (821 - 821) < QOpr9l4PR[lKughZbATs].SnezwSOXkR)
            Kw1Ctn[lKughZbATs] += 8000;
        if ((262 - 177) < QOpr9l4PR[lKughZbATs].IM085vqZF && 80 < QOpr9l4PR[lKughZbATs].score2)
            Kw1Ctn[lKughZbATs] += (4819 - 819);
        if ((128 - 38) < QOpr9l4PR[lKughZbATs].IM085vqZF)
            Kw1Ctn[lKughZbATs] += (2071 - 71);
        if (85 < QOpr9l4PR[lKughZbATs].IM085vqZF && QOpr9l4PR[lKughZbATs].west == 'Y')
            Kw1Ctn[lKughZbATs] += (1794 - 794);
        if (QOpr9l4PR[lKughZbATs].score2 > 80 && QOpr9l4PR[lKughZbATs].leader == 'Y')
            Kw1Ctn[lKughZbATs] += (1599 - 749);
    }
    HVr0t7 = (340 - 340);
    max = (740 - 740);
    for (lKughZbATs = (831 - 831); lKughZbATs < f6ejJ5oSg2O; lKughZbATs = lKughZbATs + 1) {
        max = (max >= Kw1Ctn[lKughZbATs]) ? max : Kw1Ctn[lKughZbATs];
        HVr0t7 += Kw1Ctn[lKughZbATs];
    }
    for (lKughZbATs = 0; lKughZbATs < f6ejJ5oSg2O; lKughZbATs = lKughZbATs + 1) {
        if (Kw1Ctn[lKughZbATs] == max) {
            printf ("%s\n%d\n", QOpr9l4PR[lKughZbATs].name, Kw1Ctn[lKughZbATs]);
            break;
        }
    }
    printf ("%d", HVr0t7);
}

