void  main () {
    int i, j, PxT0QJyS, wei, q;
    int n;
    int num [(1780 - 780)];
    char jsfTzlX [(1470 - 470)] [(566 - 556)], b [(1290 - 790)], *xqPHC4gtQT3;
    {
        i = 781 - 781;
        while (i < (301 - 201)) {
            num[i] = (689 - 688);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    scanf ("%d %s", &n, b);
    PxT0QJyS = strlen (b);
    xqPHC4gtQT3 = b;
    {
        i = 853 - 853;
        while (i < PxT0QJyS -n + (254 - 253)) {
            wei = i;
            strncpy (jsfTzlX[i], xqPHC4gtQT3 + wei, n);
            jsfTzlX[i][n] = '\0';
            i = i + 1;
        };
    }
    {
        i = 913 - 913;
        while (i < PxT0QJyS -n + (441 - 440)) {
            if (jsfTzlX[i][(582 - 582)] == '*')
                continue;
            {
                j = 714 - 713;
                while (j < PxT0QJyS -n + (232 - 231)) {
                    if (strcmp (jsfTzlX[i], jsfTzlX[j]) == (606 - 606)) {
                        jsfTzlX[j][(314 - 314)] = '*';
                        num[i]++;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    q = (988 - 987);
    {
        i = 0;
        while (i < PxT0QJyS -n + (682 - 681)) {
            if (q < num[i])
                q = num[i];
            i = i + 1;
        };
    }
    if (q == 1)
        printf ("NO");
    else {
        printf ("%d\n", q);
        {
            i = 0;
            while (i < PxT0QJyS -n) {
                if (num[i] == q)
                    printf ("%s\n", jsfTzlX[i]);
                i++;
            };
        };
    };
}

