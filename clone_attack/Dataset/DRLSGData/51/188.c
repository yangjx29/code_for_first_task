void  main () {
    char a [(1497 - 498)];
    int n, sqdMLW, j, k, s, p [(1130 - 131)] = {(451 - 451)}, m, w [(271 - 172)], VQosCzE, WKE4xDzobe;
    scanf ("%d", &n);
    scanf ("%s", a);
    WKE4xDzobe = strlen (a);
    for (k = (733 - 733); n > k; k++) {
        a[WKE4xDzobe +k] = '2';
    }
    for (sqdMLW = (306 - 306); WKE4xDzobe -n >= sqdMLW; sqdMLW++) {
        for (j = sqdMLW + (449 - 448); j <= WKE4xDzobe -n; j++) {
            s = (449 - 449);
            for (k = (913 - 913); k < n; k++) {
                if (a[sqdMLW + k] != a[j + k]) {
                    s = (542 - 541);
                    break;
                };
            }
            if (!((520 - 520) != s)) {
                p[sqdMLW]++;
            };
        };
    }
    m = p[(145 - 145)];
    for (sqdMLW = (320 - 319); sqdMLW <= WKE4xDzobe -n; sqdMLW++) {
        if (m < p[sqdMLW]) {
            m = p[sqdMLW];
        };
    }
    if (m >= 1) {
        printf ("%d\n", m + 1);
        for (sqdMLW = 0; sqdMLW <= WKE4xDzobe -n; sqdMLW++) {
            if (p[sqdMLW] == m) {
                for (k = 0; k < n; k++) {
                    printf ("%c", a[sqdMLW + k]);
                }
                printf ("\n");
            };
        };
    }
    else
        ;
}

