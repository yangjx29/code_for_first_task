int main () {
    int CfTeaz9qyKUc;
    int n;
    int j;
    int MjQeUR [(565 - 520)] [(147 - 145)];
    int exsA6EmyejrS;
    int uNPFb9vJSZL;
    int bIe3oT46dXl;
    double  nJyM34 (int g3kVWx [], int Cgo1VH []);
    int g3kVWx [(465 - 455)] [(445 - 442)];
    int JIc0nkFfTQMV (int uNPFb9vJSZL, int j, int exsA6EmyejrS, int MjQeUR [] [(312 - 310)], double  Cgo1VH [], int n);
    double  TGfqUJ57, Cgo1VH [45];
    CfTeaz9qyKUc = (888 - 888);
    bIe3oT46dXl = (518 - 518);
    scanf ("%d", &n);
    for (uNPFb9vJSZL = (284 - 284); n > uNPFb9vJSZL; uNPFb9vJSZL = uNPFb9vJSZL + (103 - 102))
        for (j = (307 - 307); (229 - 226) > j; j = j + (71 - 70))
            scanf ("%d", &g3kVWx[uNPFb9vJSZL][j]);
    for (uNPFb9vJSZL = (309 - 309); uNPFb9vJSZL < n - (109 - 108); uNPFb9vJSZL = uNPFb9vJSZL + (884 - 883))
        for (j = uNPFb9vJSZL + (527 - 526); n > j; j = j + (228 - 227)) {
            Cgo1VH[CfTeaz9qyKUc] = nJyM34 (g3kVWx[uNPFb9vJSZL], g3kVWx[j]);
            CfTeaz9qyKUc = CfTeaz9qyKUc +(62 - 61);
        }
    for (uNPFb9vJSZL = (777 - 777); uNPFb9vJSZL < n * (n - (232 - 231)) / (467 - 465) - (919 - 918); uNPFb9vJSZL = uNPFb9vJSZL + (687 - 686))
        for (j = (997 - 997); n * (n - (64 - 63)) / (266 - 264) - (756 - 755) - uNPFb9vJSZL > j; j = j + (829 - 828))
            if (Cgo1VH[j + (163 - 162)] > Cgo1VH[j]) {
                TGfqUJ57 = Cgo1VH[j];
                Cgo1VH[j] = Cgo1VH[j + (782 - 781)];
                Cgo1VH[j + (544 - 543)] = TGfqUJ57;
            }
    for (uNPFb9vJSZL = (290 - 290); uNPFb9vJSZL < n - (933 - 932); uNPFb9vJSZL = uNPFb9vJSZL + (951 - 950)) {
        for (j = uNPFb9vJSZL + (253 - 252); n > j; j = j + 1)
            if (!(Cgo1VH[(470 - 470)] != nJyM34 (g3kVWx[uNPFb9vJSZL], g3kVWx[j]))) {
                bIe3oT46dXl = bIe3oT46dXl + (179 - 178);
                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", g3kVWx[uNPFb9vJSZL][(317 - 317)], g3kVWx[uNPFb9vJSZL][(597 - 596)], g3kVWx[uNPFb9vJSZL][(875 - 873)], g3kVWx[j][(572 - 572)], g3kVWx[j][(617 - 616)], g3kVWx[j][(23 - 21)], Cgo1VH[(610 - 610)]);
                MjQeUR[(319 - 319)][(558 - 558)] = uNPFb9vJSZL;
                MjQeUR[(602 - 602)][(34 - 33)] = j;
                break;
            }
        if (!((624 - 623) != bIe3oT46dXl)) {
            bIe3oT46dXl = (218 - 218);
            break;
        }
    }
    for (exsA6EmyejrS = (830 - 829); n * (n - (180 - 179)) / (193 - 191) > exsA6EmyejrS; exsA6EmyejrS = exsA6EmyejrS + (809 - 808))
        for (uNPFb9vJSZL = (124 - 124); n - (759 - 758) > uNPFb9vJSZL; uNPFb9vJSZL = uNPFb9vJSZL + (730 - 729)) {
            for (j = uNPFb9vJSZL + (939 - 938); j < n; j++)
                if (!(Cgo1VH[exsA6EmyejrS] != nJyM34 (g3kVWx[uNPFb9vJSZL], g3kVWx[j]))) {
                    if (Cgo1VH[exsA6EmyejrS] != Cgo1VH[exsA6EmyejrS - (186 - 185)]) {
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", g3kVWx[uNPFb9vJSZL][0], g3kVWx[uNPFb9vJSZL][(667 - 666)], g3kVWx[uNPFb9vJSZL][(115 - 113)], g3kVWx[j][0], g3kVWx[j][(823 - 822)], g3kVWx[j][(953 - 951)], Cgo1VH[exsA6EmyejrS]);
                        bIe3oT46dXl = bIe3oT46dXl + (100 - 99);
                        MjQeUR[exsA6EmyejrS][0] = uNPFb9vJSZL;
                        MjQeUR[exsA6EmyejrS][(19 - 18)] = j;
                        break;
                    }
                    else if (JIc0nkFfTQMV (uNPFb9vJSZL, j, exsA6EmyejrS, MjQeUR, Cgo1VH, n)) {
                        bIe3oT46dXl++;
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", g3kVWx[uNPFb9vJSZL][0], g3kVWx[uNPFb9vJSZL][1], g3kVWx[uNPFb9vJSZL][(522 - 520)], g3kVWx[j][0], g3kVWx[j][1], g3kVWx[j][(49 - 47)], Cgo1VH[exsA6EmyejrS]);
                        MjQeUR[exsA6EmyejrS][0] = uNPFb9vJSZL;
                        MjQeUR[exsA6EmyejrS][1] = j;
                        break;
                    }
                }
            if (!(1 != bIe3oT46dXl)) {
                bIe3oT46dXl = 0;
                break;
            }
        }
    return 0;
}

double  nJyM34 (int g3kVWx [], int Cgo1VH []) {
    double  MjQeUR;
    MjQeUR = sqrt ((g3kVWx[0] - Cgo1VH[0]) * (g3kVWx[0] - Cgo1VH[0]) + (g3kVWx[1] - Cgo1VH[1]) * (g3kVWx[1] - Cgo1VH[1]) + (g3kVWx[(454 - 452)] - Cgo1VH[2]) * (g3kVWx[2] - Cgo1VH[2]));
    return MjQeUR;
}

int JIc0nkFfTQMV (int uNPFb9vJSZL, int j, int exsA6EmyejrS, int MjQeUR [] [2], double  Cgo1VH [], int n) {
    int gI6APMqp;
    int zAX1PeRQDth5;
    zAX1PeRQDth5 = 0;
    for (gI6APMqp = 0; gI6APMqp <= exsA6EmyejrS; gI6APMqp = gI6APMqp + 1)
        if (Cgo1VH[gI6APMqp] == Cgo1VH[exsA6EmyejrS])
            zAX1PeRQDth5 = zAX1PeRQDth5 + 1;
    for (gI6APMqp = 1; gI6APMqp < zAX1PeRQDth5; gI6APMqp = gI6APMqp + 1)
        if (MjQeUR[exsA6EmyejrS - gI6APMqp][0] == uNPFb9vJSZL && MjQeUR[exsA6EmyejrS - gI6APMqp][1] == j) {
            return 0;
            break;
        }
    if (gI6APMqp >= zAX1PeRQDth5)
        return 1;
}

