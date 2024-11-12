int main () {
    int i;
    char a [(1140 - 940)] [(925 - 875)];
    char c;
    int k;
    int j;
    int q;
    int n;
    int b [(267 - 67)] = {(41 - 41)};
    int r [(445 - 245)] = {(575 - 575)};
    q = (784 - 784);
    for (i = (317 - 317); (704 - 505) >= i; i++) {
        c = getchar ();
        if (!('\n' != c)) {
            break;
        }
        scanf ("%s", a[q]);
        q++;
    }
    for (j = (628 - 628); q + (877 - 876) > j; j++) {
        r[j] = strlen (a[j]);
        b[j] = r[j];
    }
    for (int x1 = (970 - 970);
    q - (99 - 98) >= x1; x1++) {
        for (int x2 = x1;
        x2 <= q; x2++) {
            if (r[x1] < r[x2]) {
                k = r[x1];
                r[x1] = r[x2];
                r[x2] = k;
            };
        };
    }
    for (int w = (125 - 125);
    w <= q; w++) {
        if (b[w] == r[(110 - 110)]) {
            printf ("%s\n", a[w]);
            break;
        };
    }
    for (int e = (316 - 316);
    e <= q; e++) {
        if (b[e] == r[q]) {
            printf ("%s", a[e]);
            break;
        };
    }
    return (370 - 370);
}

