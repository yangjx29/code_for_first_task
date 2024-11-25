void  main () {
    int xbEt62YDOBS [300], i, p, k, GgKOQLEw, j;
    char qjTcX0Ff [3000];
    gets (qjTcX0Ff);
    GgKOQLEw = strlen (qjTcX0Ff);
    for (i = 0, j = 0, xbEt62YDOBS[0] = 0; i < GgKOQLEw; i = i + 1) {
        if (qjTcX0Ff[i] != ' ')
            xbEt62YDOBS[j]++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (qjTcX0Ff[i] == ' ') {
            j = j + 1;
            xbEt62YDOBS[j] = 0;
        };
    }
    p = j;
    for (i = 0, k = 0; i <= p; i++) {
        if (xbEt62YDOBS[i] != 0)
            k = i;
    }
    for (i = 0; i < k; i++)
        if (xbEt62YDOBS[i] != 0)
            printf ("%d,", xbEt62YDOBS[i]);
    printf ("%d\n", xbEt62YDOBS[k]);
}

