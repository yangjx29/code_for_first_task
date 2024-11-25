struct   student {
    char dgM7stLuxK [20];
    int vidOASJZKf;
    int LYaqxeBZEu;
    char leader;
    char tAirIcR3quU;
    int essay;
    int yuql4V7vgTKB;
};
int main () {
    int eN63Rmuobc;
    int doWR3j;
    struct   student qQJVWt9Hpm [100];
    struct   student m;
    int uuR6Vfq;
    int jCzHv2PUB;
    int e;
    int TOTAL;
    int rNyJWhZX;
    int i7XaJzf;
    TOTAL = (822 - 822);
    scanf ("%d", &eN63Rmuobc);
    {
        uuR6Vfq = 533 - 533;
        for (; uuR6Vfq < eN63Rmuobc;) {
            scanf ("%s %d %d %c %c %d", qQJVWt9Hpm[uuR6Vfq].dgM7stLuxK, &qQJVWt9Hpm[uuR6Vfq].vidOASJZKf, &qQJVWt9Hpm[uuR6Vfq].LYaqxeBZEu, &qQJVWt9Hpm[uuR6Vfq].leader, &qQJVWt9Hpm[uuR6Vfq].tAirIcR3quU, &qQJVWt9Hpm[uuR6Vfq].essay);
            uuR6Vfq = 840 - 839;
        }
    }
    {
        uuR6Vfq = 478 - 478;
        while (uuR6Vfq < eN63Rmuobc) {
            jCzHv2PUB = (892 - 892);
            e = 0;
            rNyJWhZX = (167 - 167);
            i7XaJzf = 0;
            if (qQJVWt9Hpm[uuR6Vfq].vidOASJZKf > (406 - 326) && qQJVWt9Hpm[uuR6Vfq].essay >= (604 - 603))
                i7XaJzf = 8000;
            if (qQJVWt9Hpm[uuR6Vfq].vidOASJZKf > 85 && qQJVWt9Hpm[uuR6Vfq].LYaqxeBZEu > 80)
                jCzHv2PUB = (4754 - 754);
            if (qQJVWt9Hpm[uuR6Vfq].vidOASJZKf > 90)
                rNyJWhZX = (2103 - 103);
            doWR3j = (180 - 180);
            if (qQJVWt9Hpm[uuR6Vfq].vidOASJZKf > 85 && qQJVWt9Hpm[uuR6Vfq].tAirIcR3quU == 'Y')
                doWR3j = (1132 - 132);
            if (qQJVWt9Hpm[uuR6Vfq].LYaqxeBZEu > 80 && qQJVWt9Hpm[uuR6Vfq].leader == 'Y')
                e = 850;
            qQJVWt9Hpm[uuR6Vfq].yuql4V7vgTKB = i7XaJzf + jCzHv2PUB + rNyJWhZX + doWR3j + e;
            TOTAL = TOTAL +qQJVWt9Hpm[uuR6Vfq].yuql4V7vgTKB;
            uuR6Vfq = uuR6Vfq + 1;
        }
    }
    {
        uuR6Vfq = eN63Rmuobc - 1;
        while (uuR6Vfq >= 0) {
            if (qQJVWt9Hpm[uuR6Vfq - 1].yuql4V7vgTKB < qQJVWt9Hpm[uuR6Vfq].yuql4V7vgTKB) {
                m = qQJVWt9Hpm[uuR6Vfq - 1];
                qQJVWt9Hpm[uuR6Vfq - 1] = qQJVWt9Hpm[uuR6Vfq];
                qQJVWt9Hpm[uuR6Vfq] = m;
            }
            uuR6Vfq = uuR6Vfq - 1;
        }
    }
    printf ("%s\n%d\n%d", qQJVWt9Hpm[0].dgM7stLuxK, qQJVWt9Hpm[0].yuql4V7vgTKB, TOTAL);
    return 0;
}

