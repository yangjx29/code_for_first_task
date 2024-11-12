void  main () {
    int n;
    int P8EYaqV6;
    int SGdj1RJ0276T;
    int nHbiwOuI9PE [1000];
    scanf ("%d %d", &n, &P8EYaqV6);
    SGdj1RJ0276T = (630 - 629);
    for (; SGdj1RJ0276T <= n;) {
        scanf ("%d", &nHbiwOuI9PE[SGdj1RJ0276T]);
        SGdj1RJ0276T = SGdj1RJ0276T +1;
    }
    SGdj1RJ0276T = 1;
    while (SGdj1RJ0276T <= n - P8EYaqV6) {
        nHbiwOuI9PE[n + SGdj1RJ0276T] = nHbiwOuI9PE[SGdj1RJ0276T];
        SGdj1RJ0276T = SGdj1RJ0276T +1;
    }
    SGdj1RJ0276T = (n - P8EYaqV6) + 1;
    while (SGdj1RJ0276T <= n + (n - P8EYaqV6)) {
        nHbiwOuI9PE[SGdj1RJ0276T -(n - P8EYaqV6)] = nHbiwOuI9PE[SGdj1RJ0276T];
        SGdj1RJ0276T = SGdj1RJ0276T +1;
    }
    printf ("%d", nHbiwOuI9PE[1]);
    SGdj1RJ0276T = 2;
    for (; SGdj1RJ0276T <= n;) {
        printf (" %d", nHbiwOuI9PE[SGdj1RJ0276T]);
        SGdj1RJ0276T = SGdj1RJ0276T +1;
    };
}

