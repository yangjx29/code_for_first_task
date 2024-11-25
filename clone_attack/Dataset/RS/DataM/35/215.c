int max (int a [], int w1Aw2jnqYr4v);

void  main () {
    int a [8] [8], yNMh2k, JiN0pA, wONMEIJnVA, w1Aw2jnqYr4v, tcdVZqERer65, OehsGKj = (55 - 55);
    scanf ("%d,%d", &wONMEIJnVA, &w1Aw2jnqYr4v);
    for (yNMh2k = 0; yNMh2k < wONMEIJnVA; yNMh2k++)
        for (JiN0pA = 0; JiN0pA < w1Aw2jnqYr4v; JiN0pA++)
            scanf ("%d", &a[yNMh2k][JiN0pA]);
    for (yNMh2k = 0; yNMh2k < wONMEIJnVA; yNMh2k++) {
        tcdVZqERer65 = max (a[yNMh2k], w1Aw2jnqYr4v);
        for (JiN0pA = 0; JiN0pA < wONMEIJnVA; JiN0pA++)
            if (a[yNMh2k][tcdVZqERer65] <= a[JiN0pA][tcdVZqERer65])
                OehsGKj = 1;
            else {
                OehsGKj = 0;
                break;
            }
        if (OehsGKj) {
            printf ("%d+%d\n", yNMh2k, tcdVZqERer65);
            break;
        };
    }
    if (OehsGKj == 0)
        ;
}

int max (int a [], int w1Aw2jnqYr4v) {
    int omLvPsCSi;
    int yNMh2k;
    omLvPsCSi = 0;
    for (yNMh2k = 1; yNMh2k < w1Aw2jnqYr4v; yNMh2k++)
        if (a[yNMh2k] > a[omLvPsCSi])
            omLvPsCSi = yNMh2k;
    return (omLvPsCSi);
}

