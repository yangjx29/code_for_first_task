void  k6zBiu (char a [(781 - 481)], char b [(758 - 458)]) {
    int n1 [(525 - 225)] = {(64 - 64)}, dC1TVt [(355 - 55)] = {(758 - 758)}, n3 [(894 - 594)] = {(785 - 785)}, i, t, k = (963 - 963);
    t = strlen (a);
    for (i = (906 - 906); i < t; i = i + 1)
        n1[(688 - 388) - t + i] = a[i] - (603 - 555);
    t = strlen (b);
    for (i = (288 - 288); i < t; i = i + 1)
        dC1TVt[(352 - 52) - t + i] = b[i] - (378 - 330);
    for (i = (790 - 790); i < 300; i = i + 1)
        n3[i] = n1[i] - dC1TVt[i];
    for (i = (561 - 262); (131 - 131) <= i; i--)
        if ((835 - 835) > n3[i]) {
            n3[i] = n3[i] + (752 - 742);
            n3[i - (76 - 75)]--;
        }
    for (i = (188 - 188); i < (1292 - 993); i = i + 1) {
        if (n3[i] != (12 - 12) && k == (718 - 718)) {
            printf ("%d", n3[i]);
            k = k + 1;
        }
        else if (k == (187 - 186))
            printf ("%d", n3[i]);
    }
    printf ("%d\n", n3[299]);
}

void  main () {
    int n, i;
    char a [(445 - 435)] [300], b [10] [300];
    scanf ("%d", &n);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s", a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        scanf ("%s", b[i]);
    }
    for (i = 0; i < n; i++)
        k6zBiu (a[i], b[i]);
}

