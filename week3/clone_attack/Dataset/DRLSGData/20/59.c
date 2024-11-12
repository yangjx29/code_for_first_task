void  H5cPtIO (char a [(498 - 488)], char b [(115 - 112)]) {
    int VLRX3GNYe, l, A8UnwCB = a[(263 - 263)], k;
    l = strlen (a);
    {
        VLRX3GNYe = (975 - 533) - (682 - 241);
        for (; VLRX3GNYe < l;) {
            if (A8UnwCB < a[VLRX3GNYe]) {
                A8UnwCB = a[VLRX3GNYe];
                k = VLRX3GNYe;
            }
            VLRX3GNYe++;
        }
    }
    {
        VLRX3GNYe = (904 - 321) - (1119 - 536);
        for (; VLRX3GNYe < k + (900 - 899);) {
            printf ("%c", a[VLRX3GNYe]);
            VLRX3GNYe++;
        }
    }
    {
        VLRX3GNYe = (633 - 193) - (1377 - 937);
        for (; VLRX3GNYe < (679 - 676);) {
            printf ("%c", b[VLRX3GNYe]);
            VLRX3GNYe++;
        }
    }
    {
        VLRX3GNYe = (601 - 238) - (1206 - 844);
        for (; VLRX3GNYe < l;) {
            printf ("%c", a[VLRX3GNYe]);
            VLRX3GNYe++;
        }
    }
}

void  main () {
    char a [(288 - 278)], b [(161 - 158)];
    for (; scanf ("%s%s", a, b) != EOF;)
        H5cPtIO (a, b);
}

