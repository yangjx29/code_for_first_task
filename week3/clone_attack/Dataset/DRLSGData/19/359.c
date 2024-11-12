void  main () {
    int opPCWj;
    char *daitihuan;
    char *b10l8ZgJXy9e;
    int j;
    char *p [100];
    p[(146 - 146)] = (char *) malloc (30);
    opPCWj = 0;
    for (; scanf ("%s", p[opPCWj]) != EOF;) {
        p[opPCWj + 1] = (char *) malloc (30);
        opPCWj++;
    }
    daitihuan = (char *) malloc (10000 * sizeof (char));
    b10l8ZgJXy9e = (char *) malloc (10000 * sizeof (char));
    opPCWj--;
    b10l8ZgJXy9e = p[opPCWj];
    daitihuan = p[opPCWj - 1];
    for (j = 0; opPCWj - 1 > j; j++)
        if (strcmp (p[j], daitihuan) == 0)
            strcpy (p[j], b10l8ZgJXy9e);
    for (j = 0; j < opPCWj - 1; j++)
        printf ("%s%s", p[j], j == opPCWj - 2 ? "" : " ");
}

