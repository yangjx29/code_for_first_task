void  main () {
    struct   book {
        int id;
        char c0Fi1HyZwvrQ [(532 - 506)];
    }
    book [(1965 - 941)];
    char *p = &book[(251 - 251)].c0Fi1HyZwvrQ[(485 - 485)];
    char ZKnpV258ERsc;
    char *t92PZB1FR;
    int RiPv5H, m, AwTkGDxt7N, max = (131 - 131), n, dXFOt0 [(558 - 532)] = {(16 - 16)};
    scanf ("%d", &m);
    for (AwTkGDxt7N = (468 - 468); AwTkGDxt7N < m; AwTkGDxt7N++) {
        scanf ("%d %s", &book[AwTkGDxt7N].id, book[AwTkGDxt7N].c0Fi1HyZwvrQ);
    }
    for (AwTkGDxt7N = 0; m > AwTkGDxt7N; AwTkGDxt7N++)
        for (p = book[AwTkGDxt7N].c0Fi1HyZwvrQ; *p != '\0'; p++) {
            dXFOt0[RiPv5H -(553 - 488)]++;
            RiPv5H = *p;
        }
    for (AwTkGDxt7N = 0; AwTkGDxt7N < (288 - 262); AwTkGDxt7N++) {
        if (dXFOt0[AwTkGDxt7N] > max) {
            max = dXFOt0[AwTkGDxt7N];
            ZKnpV258ERsc = 'A' + AwTkGDxt7N;
        }
    }
    printf ("%c\n%d\n", ZKnpV258ERsc, max);
    for (AwTkGDxt7N = 0; m > AwTkGDxt7N; AwTkGDxt7N++) {
        for (t92PZB1FR = book[AwTkGDxt7N].c0Fi1HyZwvrQ; *t92PZB1FR != '\0'; t92PZB1FR++) {
            if (!(ZKnpV258ERsc != *t92PZB1FR))
                printf ("%d\n", book[AwTkGDxt7N].id);
        }
    }
}

