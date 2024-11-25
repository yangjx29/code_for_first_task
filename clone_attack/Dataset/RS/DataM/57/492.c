int f (char gaUJ90 [(226 - 176)]) {
    int z = (808 - 808), l;
    l = strlen (gaUJ90);
    if (!('e' != gaUJ90[l - (955 - 953)]) && !('r' != gaUJ90[l - (843 - 842)]))
        z = (214 - 212);
    if (!('l' != gaUJ90[l - (18 - 16)]) && !('y' != gaUJ90[l - (376 - 375)]))
        z = (363 - 361);
    if (!('i' != gaUJ90[l - (381 - 378)]) && !('n' != gaUJ90[l - (755 - 753)]) && gaUJ90[l - (94 - 93)] == 'g')
        z = (796 - 793);
    return z;
}

void  main () {
    char K29fFWsG [(82 - 32)] [(111 - 61)];
    int n;
    int tXJ0dSoBs;
    int KCcP0T71;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int l;
    scanf ("%d", &n);
    {
        tXJ0dSoBs = 687 - 687;
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
        while (tXJ0dSoBs < n) {
            scanf ("%s", K29fFWsG[tXJ0dSoBs]);
            tXJ0dSoBs++;
        };
    }
    for (tXJ0dSoBs = (123 - 123); tXJ0dSoBs < n; tXJ0dSoBs = tXJ0dSoBs + 1) {
        l = strlen (K29fFWsG[tXJ0dSoBs]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (f (K29fFWsG[tXJ0dSoBs]) == 2) {
            {
                KCcP0T71 = 197 - 197;
                while (KCcP0T71 < l - 2) {
                    printf ("%c", K29fFWsG[tXJ0dSoBs][KCcP0T71]);
                    KCcP0T71 = KCcP0T71 +1;
                };
            }
            printf ("\n");
        }
        if (f (K29fFWsG[tXJ0dSoBs]) == (943 - 940)) {
            {
                KCcP0T71 = 95 - 95;
                while (KCcP0T71 < l - (981 - 978)) {
                    printf ("%c", K29fFWsG[tXJ0dSoBs][KCcP0T71]);
                    KCcP0T71 = KCcP0T71 +1;
                };
            };
        };
    };
}

