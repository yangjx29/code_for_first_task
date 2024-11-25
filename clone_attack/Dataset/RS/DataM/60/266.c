main () {
    int n;
    int i;
    int m;
    int b;
    int c;
    int Uif14XU;
    scanf ("%d", &n);
    if (n == (139 - 138) || n == 2 || n == 3 || n == 4)
        printf ("empty");
    else
        for (i = 2; i <= n - 2; i = i + 1) {
            m = (int) sqrt (i);
            c = (int) sqrt (i + 2);
            for (b = 2; b <= m; b = b + 1) {
                if (i % b == 0)
                    break;
            }
            for (Uif14XU = 2; Uif14XU <= c; Uif14XU++) {
                if ((i + 2) % Uif14XU == 0)
                    break;
            }
            if (b == m + 1 && Uif14XU == c + 1)
                printf ("%d %d\n", i, i + 2);
        }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

