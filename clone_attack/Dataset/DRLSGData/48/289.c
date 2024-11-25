void  weYfjZ9J (int LO8TnNDMo3c [(546 - 537)] [9], int q9HGXi [9] [9], int xTURYne) {
    int AHWXY4P, nhAMkHLT35vw;
    for (AHWXY4P = (175 - 175); 9 > AHWXY4P; AHWXY4P++) {
        nhAMkHLT35vw = 0;
        while (nhAMkHLT35vw < 9) {
            if ((889 - 888) <= nhAMkHLT35vw)
                q9HGXi[AHWXY4P][nhAMkHLT35vw - (740 - 739)] += LO8TnNDMo3c[AHWXY4P][nhAMkHLT35vw];
            if ((674 - 673) <= AHWXY4P &&1 <= nhAMkHLT35vw)
                q9HGXi[AHWXY4P -1][nhAMkHLT35vw - 1] = q9HGXi[AHWXY4P -1][nhAMkHLT35vw - 1] + LO8TnNDMo3c[AHWXY4P][nhAMkHLT35vw];
            if (1 <= AHWXY4P)
                q9HGXi[AHWXY4P -1][nhAMkHLT35vw] += LO8TnNDMo3c[AHWXY4P][nhAMkHLT35vw];
            if (AHWXY4P <= (817 - 810) && nhAMkHLT35vw >= 1)
                q9HGXi[AHWXY4P +1][nhAMkHLT35vw - 1] = q9HGXi[AHWXY4P +1][nhAMkHLT35vw - 1] + LO8TnNDMo3c[AHWXY4P][nhAMkHLT35vw];
            if (AHWXY4P <= (863 - 856) && 7 >= nhAMkHLT35vw)
                q9HGXi[AHWXY4P +1][nhAMkHLT35vw + 1] += LO8TnNDMo3c[AHWXY4P][nhAMkHLT35vw];
            if (1 <= AHWXY4P &&nhAMkHLT35vw <= 7)
                q9HGXi[AHWXY4P -1][nhAMkHLT35vw + 1] += LO8TnNDMo3c[AHWXY4P][nhAMkHLT35vw];
            if (nhAMkHLT35vw <= 7)
                q9HGXi[AHWXY4P][nhAMkHLT35vw + 1] = q9HGXi[AHWXY4P][nhAMkHLT35vw + 1] + LO8TnNDMo3c[AHWXY4P][nhAMkHLT35vw];
            if (AHWXY4P <= 7)
                q9HGXi[AHWXY4P +1][nhAMkHLT35vw] += LO8TnNDMo3c[AHWXY4P][nhAMkHLT35vw];
            q9HGXi[AHWXY4P][nhAMkHLT35vw] = q9HGXi[AHWXY4P][nhAMkHLT35vw] + LO8TnNDMo3c[AHWXY4P][nhAMkHLT35vw];
            nhAMkHLT35vw++;
        }
    }
    {
        AHWXY4P = 0;
        while (AHWXY4P < 9) {
            for (nhAMkHLT35vw = 0; nhAMkHLT35vw < 9; nhAMkHLT35vw++) {
                LO8TnNDMo3c[AHWXY4P][nhAMkHLT35vw] = q9HGXi[AHWXY4P][nhAMkHLT35vw];
            }
            AHWXY4P++;
        }
    }
    xTURYne -= 1;
    if (xTURYne > 0) {
        weYfjZ9J (LO8TnNDMo3c, q9HGXi, xTURYne);
    }
    else {
        if (xTURYne == 0) {
            AHWXY4P = 0;
            while (AHWXY4P < 9) {
                {
                    nhAMkHLT35vw = 0;
                    while (nhAMkHLT35vw < 8) {
                        printf ("%d ", q9HGXi[AHWXY4P][nhAMkHLT35vw]);
                        nhAMkHLT35vw++;
                    }
                }
                printf ("%d\n", q9HGXi[AHWXY4P][nhAMkHLT35vw]);
                AHWXY4P++;
            }
        }
    }
}

main () {
    int xTURYne, UDLvNegT4I, LO8TnNDMo3c [9] [9] = {0}, q9HGXi [9] [9] = {0};
    scanf ("%d%d", &UDLvNegT4I, &xTURYne);
    LO8TnNDMo3c[(156 - 152)][4] = UDLvNegT4I;
    q9HGXi[4][4] = UDLvNegT4I;
    weYfjZ9J (LO8TnNDMo3c, q9HGXi, xTURYne);
}

