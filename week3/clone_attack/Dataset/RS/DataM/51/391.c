void  main () {
    int k;
    int max;
    int f;
    int i;
    int j;
    int oey2rPZS3sV;
    int m;
    int OKChYT2;
    int c [500] = {(581 - 581)};
    k = (285 - 285);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    max = (516 - 515);
    f = (988 - 988);
    char S3pzTK [502], S6XIdnwbU [(796 - 296)] [(1006 - 1000)];
    scanf ("%d", &OKChYT2);
    scanf ("%s", S3pzTK);
    oey2rPZS3sV = strlen (S3pzTK);
    m = oey2rPZS3sV - OKChYT2 +1;
    for (i = (545 - 545); m > i; i = i + 1) {
        for (j = 0; OKChYT2 > j; j = j + 1)
            S6XIdnwbU[i][j] = S3pzTK[i + j];
        S6XIdnwbU[i][j] = '\0';
    }
    for (i = 0; m > i; i = i + 1) {
        for (j = 0; m > j; j = j + 1) {
            for (k = 0; OKChYT2 > k; k = k + 1)
                if (!(S6XIdnwbU[i][k] == S3pzTK[j + k]))
                    break;
            if (k == OKChYT2)
                c[i]++;
        };
    }
    for (i = 0; m > i; i++)
        for (j = 0; m > j; j++) {
            if (!(i != j))
                continue;
            if (!(0 != strcmp (S6XIdnwbU[i], S6XIdnwbU[j]))) {
                S6XIdnwbU[j][0] = '\0';
                c[j] = 0;
            };
        }
    for (i = 0; m > i; i++) {
        if (c[i] >= max)
            max = c[i];
    }
    if (max == 1)
        printf ("NO");
    else {
        printf ("%d\n", max);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        for (i = 0; i < m; i++)
            if (c[i] == max)
                printf ("%s\n", S6XIdnwbU[i]);
    };
}

