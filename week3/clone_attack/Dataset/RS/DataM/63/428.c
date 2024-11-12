main () {
    static int x [(833 - 731)] [102], y [102] [102], FSoWgTkAdmX [102] [102];
    int uXOpQ4;
    int b;
    int x1;
    int y1;
    int x2;
    int y2;
    int i;
    int j;
    int eWkdtNcuJi4;
    uXOpQ4 = (658 - 658);
    b = 0;
    scanf ("%d %d", &x1, &y1);
    for (i = (458 - 457); x1 >= i; i++)
        for (j = (497 - 496); y1 >= j; j++)
            scanf ("%d", &x[i][j]);
    scanf ("%d %d", &x2, &y2);
    for (i = (554 - 553); x2 >= i; i++)
        for (j = 1; y2 >= j; j++)
            scanf ("%d", &y[i][j]);
    for (i = 1; x1 >= i; i++)
        for (j = 1; j <= y2; j++)
            for (eWkdtNcuJi4 = 1; eWkdtNcuJi4 <= y1; eWkdtNcuJi4++)
                FSoWgTkAdmX[i][j] = FSoWgTkAdmX[i][j] + x[i][eWkdtNcuJi4] * y[eWkdtNcuJi4][j];
    for (i = 1; i <= x1; i++) {
        for (j = 1; j <= y2; j++) {
            if (uXOpQ4 != 0)
                ;
            printf ("%d", FSoWgTkAdmX[i][j]);
            uXOpQ4++;
        }
        uXOpQ4 = 0;
        printf ("\n");
    };
}

