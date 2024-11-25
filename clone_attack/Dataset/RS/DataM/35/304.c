void  main () {
    int JfBJoQX [(373 - 365)] [8], oqDbv1xCnl, j, PJG3FzHvok, FDtV8uZxQ, cg6DBOtcl7LK = (1000 - 1000), HZTJD3bBr2h [8], S1jyhq [8], twuS5W = (99 - 99);
    scanf ("%d,%d", &oqDbv1xCnl, &j);
    for (PJG3FzHvok = (608 - 608); oqDbv1xCnl > PJG3FzHvok; PJG3FzHvok = PJG3FzHvok +1)
        for (FDtV8uZxQ = 0; j > FDtV8uZxQ; FDtV8uZxQ = FDtV8uZxQ +1)
            scanf ("%d", &JfBJoQX[PJG3FzHvok][FDtV8uZxQ]);
    for (PJG3FzHvok = 0; oqDbv1xCnl > PJG3FzHvok; PJG3FzHvok = PJG3FzHvok +1)
        for (cg6DBOtcl7LK = FDtV8uZxQ = 0; FDtV8uZxQ < j; FDtV8uZxQ++)
            if (JfBJoQX[PJG3FzHvok][FDtV8uZxQ] >= cg6DBOtcl7LK) {
                cg6DBOtcl7LK = JfBJoQX[PJG3FzHvok][FDtV8uZxQ];
                HZTJD3bBr2h[PJG3FzHvok] = FDtV8uZxQ;
            }
    for (PJG3FzHvok = 0; j > PJG3FzHvok; PJG3FzHvok++)
        for (cg6DBOtcl7LK = 10000, FDtV8uZxQ = 0; FDtV8uZxQ < oqDbv1xCnl; FDtV8uZxQ++)
            if (JfBJoQX[FDtV8uZxQ][PJG3FzHvok] <= cg6DBOtcl7LK) {
                cg6DBOtcl7LK = JfBJoQX[FDtV8uZxQ][PJG3FzHvok];
                S1jyhq[PJG3FzHvok] = FDtV8uZxQ;
            }
    for (PJG3FzHvok = 0; PJG3FzHvok < oqDbv1xCnl; PJG3FzHvok++)
        if (S1jyhq[HZTJD3bBr2h[PJG3FzHvok]] == PJG3FzHvok) {
            twuS5W = (250 - 249);
            break;
        }
    if (twuS5W == (85 - 84))
        printf ("%d+%d\n", PJG3FzHvok, HZTJD3bBr2h[PJG3FzHvok]);
    else
        printf ("No\n");
}

