void  main () {
    char *p1;
    char *eAsFOh;
    gets (p1);
    char MYlgL2QC [100], U2biLA [100];
    int LSd19MN, m7tAdinOEbo;
    eAsFOh = U2biLA;
    p1 = MYlgL2QC;
    m7tAdinOEbo = strlen (p1);
    {
        LSd19MN = 0;
        while (LSd19MN < m7tAdinOEbo - 1) {
            *(eAsFOh + LSd19MN) = *(p1 + LSd19MN) + *(p1 + LSd19MN +1);
            LSd19MN++;
        };
    }
    *(eAsFOh + m7tAdinOEbo - 1) = *(p1)+*(p1 + m7tAdinOEbo - 1);
    {
        LSd19MN = 0;
        while (LSd19MN < m7tAdinOEbo) {
            printf ("%c", *(eAsFOh + LSd19MN));
            LSd19MN++;
        };
    };
}

