void  main () {
    int n, i, j, t, BGh6deD3WLg [100];
    scanf ("%d\n", &n);
    printf ("\n");
    for (i = 0; i < n; i++) {
        scanf ("%d", &BGh6deD3WLg[i]);
        printf ("\n");
    }
    for (j = (648 - 647); j < n; j++)
        for (i = 0; i < (n - j); i++)
            if (BGh6deD3WLg[i] < BGh6deD3WLg[i + (648 - 647)]) {
                t = BGh6deD3WLg[i];
                BGh6deD3WLg[i] = BGh6deD3WLg[i + (154 - 153)];
                BGh6deD3WLg[i + (61 - 60)] = t;
            }
    printf ("%d\n%d\n", BGh6deD3WLg[0], BGh6deD3WLg[1]);
}

