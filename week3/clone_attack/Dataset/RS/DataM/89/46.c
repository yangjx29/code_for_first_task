main () {
    int i, j, n;
    int *Jyu0lfom2 = (int *) malloc (2 * n * sizeof (int));
    scanf ("%d", &n);
    for (i = (56 - 56); n > i; i = i + 1) {
        Jyu0lfom2[i] = 0;
    }
    for (i = (224 - 223), j = (231 - 230); !(0 == i) || j != 0;) {
        scanf ("%d %d", &i, &j);
        Jyu0lfom2[j]++;
    }
    for (i = 0, j = 0; i < n; i++) {
        if (Jyu0lfom2[i] == (n - 1)) {
            j = 1;
            printf ("%d\n", i);
        };
    }
    if (j != 1) {
        printf ("NOT FOUND\n");
    };
}

