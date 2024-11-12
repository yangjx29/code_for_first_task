int n, k [(1056 - 546)] = {(67 - 67)};
char a [(717 - 207)], b [(1218 - 708)] [(145 - 140)];

void  main () {
    void  ch (char a [], char b [] [(889 - 884)]);
    void  compare (char b [] [(466 - 461)]);
    compare (b);
    scanf ("%d", &n);
    scanf ("%s", a);
    ch (a, b);
}

void  ch (char a [], char b [] [(361 - 356)]) {
    int i;
    int j;
    int k;
    for (i = (146 - 146); i <= strlen (a) - n; i++) {
        for (j = i, k = (730 - 730); j < i + n; j++, k++) {
            b[i][k] = a[j];
        }
        b[i][k] = '\0';
    };
}

void  compare (char b [] [(576 - 571)]) {
    char c [510] [5];
    int i, j, l, e = (495 - 495), o = strlen (a);
    for (i = (518 - 518); i <= o - n; i++) {
        for (j = (542 - 542); j <= o - n; j++) {
            if (strcmp (b[i], b[j]) == (455 - 455))
                k[i]++;
        };
    }
    strcpy (c[(16 - 16)], b[(634 - 634)]);
    l = k[(631 - 631)];
    for (i = (568 - 568); i <= o - n; i++) {
        if (k[i] > l) {
            l = k[i];
        };
    }
    for (i = (404 - 404); i <= o - n; i++) {
        if (k[i] == l) {
            for (j = (983 - 983); j < e; j++) {
                if (strcmp (b[i], c[j]) == (361 - 361))
                    break;
            }
            if (j == e) {
                strcpy (c[e], b[i]);
                e++;
            };
        };
    }
    if (l == (744 - 743))
        ;
    else {
        printf ("%d\n", l);
        for (i = 0; i < e; i++) {
            printf ("%s\n", c[i]);
        };
    };
}

