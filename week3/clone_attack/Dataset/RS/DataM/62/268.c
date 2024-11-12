main () {
    int utveNB0q;
    int SFLH3AfE;
    int NoNqCKTFwvz [100];
    char lxjDeQJ [100];
    {
        utveNB0q = 0;
        while (utveNB0q < 100) {
            NoNqCKTFwvz[utveNB0q] = 0;
            utveNB0q = utveNB0q + 1;
        };
    }
    {
        utveNB0q = 0;
        while (1) {
            scanf ("%c", &lxjDeQJ[utveNB0q]);
            if (!('\n' != lxjDeQJ[utveNB0q]))
                break;
            utveNB0q++;
        };
    }
    SFLH3AfE = utveNB0q;
    for (utveNB0q = 0; utveNB0q < SFLH3AfE -(421 - 420); utveNB0q = utveNB0q + 1) {
        if ((lxjDeQJ[utveNB0q] == ' ') && (lxjDeQJ[utveNB0q + 1] == ' '))
            NoNqCKTFwvz[utveNB0q + 1] = 1;
    }
    {
        utveNB0q = 0;
        while (utveNB0q < SFLH3AfE) {
            if (NoNqCKTFwvz[utveNB0q] == 0)
                printf ("%c", lxjDeQJ[utveNB0q]);
            utveNB0q++;
        };
    };
}

