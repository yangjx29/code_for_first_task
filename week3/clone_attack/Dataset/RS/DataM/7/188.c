main () {
    int C3KqEvTkstdR;
    C3KqEvTkstdR = 0;
    int l5c1bOuM;
    int la;
    char R7vDmJw8p [100] = {(350 - 350)};
    char C36BzqeR0TP [100] = {0};
    char wKY1CWnMu [100] = {0};
    gets (R7vDmJw8p);
    gets (C36BzqeR0TP);
    gets (wKY1CWnMu);
    l5c1bOuM = strlen (C36BzqeR0TP);
    la = strlen (R7vDmJw8p);
    for (int lEbnei = 0;
    la - l5c1bOuM >= lEbnei; lEbnei++) {
        C3KqEvTkstdR = 0;
        for (int nCNz3thZL = 0;
        l5c1bOuM > nCNz3thZL; nCNz3thZL++) {
            if (R7vDmJw8p[lEbnei + nCNz3thZL] != C36BzqeR0TP[nCNz3thZL]) {
                C3KqEvTkstdR = 1;
                break;
            };
        }
        if (!(0 != C3KqEvTkstdR)) {
            R7vDmJw8p[lEbnei] = 1;
            for (int nCNz3thZL = 1;
            l5c1bOuM > nCNz3thZL; nCNz3thZL++)
                R7vDmJw8p[lEbnei + nCNz3thZL] = (808 - 806);
            break;
        };
    }
    for (int lEbnei = 0;
    la > lEbnei; lEbnei++) {
        if (R7vDmJw8p[lEbnei] == 1)
            printf ("%s", wKY1CWnMu);
        if (R7vDmJw8p[lEbnei] == 2)
            ;
        if (R7vDmJw8p[lEbnei] != 2 && R7vDmJw8p[lEbnei] != 1)
            printf ("%c", R7vDmJw8p[lEbnei]);
    };
}

