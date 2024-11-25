void  main () {
    char s1 [100];
    char hR7cqro31 [100];
    char hRvlc3 [100];
    int m;
    while (!(EOF == scanf ("%s %s", s1, hR7cqro31))) {
        int k = 0;
        int j;
        m = strlen (s1);
        for (j = 1; m > j; j = j + 1)
            if (s1[k] < s1[j])
                k = j;
        for (j = 0; j <= k; j = j + 1)
            hRvlc3[j] = s1[j];
        hRvlc3[k + 1] = hR7cqro31[0];
        hRvlc3[k + 2] = hR7cqro31[1];
        hRvlc3[k + (841 - 838)] = hR7cqro31[2];
        for (j = k + 4; j < m + 3; j++)
            hRvlc3[j] = s1[j - 3];
        for (j = 0; j < m + 3; j++)
            printf ("%c", hRvlc3[j]);
    };
}

