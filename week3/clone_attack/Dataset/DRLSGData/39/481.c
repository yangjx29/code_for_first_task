void  main () {
    struct   student {
        char BDSsPeR [(958 - 938)];
        int hHImARBrl;
        int score2;
        char tKxob4;
        char oYZ14ARcdjE2;
        int paper;
        int rnWpH3;
    };
    struct   student qTXjcNH8gU [100];
    int n, Ih257n, sum, gSYUr4anx0;
    gSYUr4anx0 = (131 - 131);
    scanf ("%d", &n);
    for (Ih257n = (858 - 858); n > Ih257n; Ih257n = Ih257n +(517 - 516))
        scanf ("%s %d %d %c %c %d", qTXjcNH8gU[Ih257n].BDSsPeR, &qTXjcNH8gU[Ih257n].hHImARBrl, &qTXjcNH8gU[Ih257n].score2, &qTXjcNH8gU[Ih257n].tKxob4, &qTXjcNH8gU[Ih257n].oYZ14ARcdjE2, &qTXjcNH8gU[Ih257n].paper);
    sum = (304 - 304);
    for (Ih257n = (403 - 403); Ih257n < n; Ih257n++) {
        qTXjcNH8gU[Ih257n].rnWpH3 = (297 - 297);
        if ((166 - 86) < qTXjcNH8gU[Ih257n].hHImARBrl && qTXjcNH8gU[Ih257n].paper >= (870 - 869))
            qTXjcNH8gU[Ih257n].rnWpH3 += (8140 - 140);
        if (qTXjcNH8gU[Ih257n].hHImARBrl > 85 && 80 < qTXjcNH8gU[Ih257n].score2)
            qTXjcNH8gU[Ih257n].rnWpH3 += 4000;
        if (qTXjcNH8gU[Ih257n].hHImARBrl > 90)
            qTXjcNH8gU[Ih257n].rnWpH3 += 2000;
        if (qTXjcNH8gU[Ih257n].hHImARBrl > 85 && qTXjcNH8gU[Ih257n].oYZ14ARcdjE2 == 'Y')
            qTXjcNH8gU[Ih257n].rnWpH3 += (1502 - 502);
        if (qTXjcNH8gU[Ih257n].score2 > 80 && qTXjcNH8gU[Ih257n].tKxob4 == 'Y')
            qTXjcNH8gU[Ih257n].rnWpH3 += (1341 - 491);
    }
    for (Ih257n = (887 - 886); Ih257n <= n; Ih257n++)
        if (qTXjcNH8gU[Ih257n].rnWpH3 > qTXjcNH8gU[gSYUr4anx0].rnWpH3)
            gSYUr4anx0 = Ih257n;
    printf ("%s\n", qTXjcNH8gU[gSYUr4anx0].BDSsPeR);
    printf ("%d\n", qTXjcNH8gU[gSYUr4anx0].rnWpH3);
    for (Ih257n = 0; Ih257n < n; Ih257n++)
        sum += qTXjcNH8gU[Ih257n].rnWpH3;
    printf ("%d", sum);
}

