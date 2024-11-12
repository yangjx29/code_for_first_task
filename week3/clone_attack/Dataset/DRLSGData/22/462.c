void  main () {
    int Y97P6LftX;
    int cWuklmcwTJyB [100];
    int i;
    int Yudtlr;
    scanf ("%d", &cWuklmcwTJyB[0]);
    i = 0;
    Y97P6LftX = cWuklmcwTJyB[0];
    for (; getchar () != 10;)
        scanf ("%d", &cWuklmcwTJyB[++i]);
    {
        Yudtlr = 0;
        for (; Yudtlr <= i;) {
            if (Y97P6LftX < cWuklmcwTJyB[Yudtlr])
                Y97P6LftX = cWuklmcwTJyB[Yudtlr];
            Yudtlr++;
        }
    }
    {
        Yudtlr = 0;
        for (; i >= Yudtlr;) {
            if (!(cWuklmcwTJyB[Yudtlr] != Y97P6LftX))
                cWuklmcwTJyB[Yudtlr] = 0;
            Yudtlr++;
        }
    }
    Y97P6LftX = cWuklmcwTJyB[0];
    {
        Yudtlr = 0;
        for (; Yudtlr <= i;) {
            if (cWuklmcwTJyB[Yudtlr] > Y97P6LftX)
                Y97P6LftX = cWuklmcwTJyB[Yudtlr];
            Yudtlr++;
        }
    }
    if (Y97P6LftX == 0)
        ;
    else
        printf ("%d", Y97P6LftX);
}

