int Gk7J0aAIgS (int PnJNh6G [], int Q14bEqQxRwod) {
    int xRrUlM3;
    int yOr2yP1YRLTD;
    int Nzce7Q;
    xRrUlM3 = PnJNh6G[(574 - 574)];
    yOr2yP1YRLTD = (447 - 447);
    for (Nzce7Q = (248 - 247); Nzce7Q < Q14bEqQxRwod; Nzce7Q = Nzce7Q +1) {
        if (PnJNh6G[Nzce7Q] > xRrUlM3) {
            xRrUlM3 = PnJNh6G[Nzce7Q];
            yOr2yP1YRLTD = Nzce7Q;
        };
    }
    return (yOr2yP1YRLTD);
}

int biHgCc (int PnJNh6G [] [(267 - 257)], int w364DBCNxAl, int d) {
    int x09NomJ7f;
    int yOr2yP1YRLTD;
    int Nzce7Q;
    x09NomJ7f = PnJNh6G[(779 - 779)][d];
    yOr2yP1YRLTD = (114 - 114);
    {
        Nzce7Q = 444 - 443;
        while (Nzce7Q < w364DBCNxAl) {
            if (PnJNh6G[Nzce7Q][d] < x09NomJ7f) {
                x09NomJ7f = PnJNh6G[Nzce7Q][d];
                yOr2yP1YRLTD = Nzce7Q;
            }
            Nzce7Q = Nzce7Q +1;
        };
    }
    return (yOr2yP1YRLTD);
}

void  main () {
    int Nzce7Q;
    int v4LuRk;
    int yOr2yP1YRLTD;
    int w364DBCNxAl;
    int sEpt0yeVJwB;
    int clone;
    int PnJNh6G [(680 - 670)] [(101 - 91)];
    char H4OeGnzq3taJ;
    scanf ("%d", &sEpt0yeVJwB);
    scanf ("%c", &H4OeGnzq3taJ);
    scanf ("%d", &clone);
    for (Nzce7Q = (372 - 372); sEpt0yeVJwB > Nzce7Q; Nzce7Q = Nzce7Q +1)
        for (v4LuRk = (15 - 15); clone > v4LuRk; v4LuRk = v4LuRk + 1)
            scanf ("%d", &PnJNh6G[Nzce7Q][v4LuRk]);
    for (v4LuRk = 0; v4LuRk < sEpt0yeVJwB; v4LuRk = v4LuRk + 1) {
        yOr2yP1YRLTD = Gk7J0aAIgS (PnJNh6G[v4LuRk], clone);
        w364DBCNxAl = biHgCc (PnJNh6G, sEpt0yeVJwB, yOr2yP1YRLTD);
        if (w364DBCNxAl == v4LuRk) {
            printf ("%d+%d", v4LuRk, yOr2yP1YRLTD);
            break;
        }
        else {
            if (v4LuRk == sEpt0yeVJwB - 1)
                printf ("No");
        };
    };
}

