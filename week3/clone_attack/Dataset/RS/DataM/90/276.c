int OG14vDZLr8mQ (int Fe6wJkvXO0Yt, int YmL1A3U) {
    int epv4ByudFi;
    if (!(1 != YmL1A3U) || !(0 != Fe6wJkvXO0Yt))
        epv4ByudFi = 1;
    else if (YmL1A3U > Fe6wJkvXO0Yt)
        epv4ByudFi = OG14vDZLr8mQ (Fe6wJkvXO0Yt, Fe6wJkvXO0Yt);
    else
        epv4ByudFi = OG14vDZLr8mQ (Fe6wJkvXO0Yt, YmL1A3U -1) + OG14vDZLr8mQ (Fe6wJkvXO0Yt -YmL1A3U, YmL1A3U);
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
    return epv4ByudFi;
}

void  main () {
    int J3EztRUYA [20];
    int oniMmA1rl3C [20];
    int bIFMqtvWYm5;
    int jcVygDb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &bIFMqtvWYm5);
    {
        jcVygDb = 0;
        while (jcVygDb < bIFMqtvWYm5) {
            scanf ("%d%d", &J3EztRUYA[jcVygDb], &oniMmA1rl3C[jcVygDb]);
            jcVygDb++;
        };
    }
    for (jcVygDb = 0; jcVygDb < bIFMqtvWYm5; jcVygDb++)
        printf ("%d\n", OG14vDZLr8mQ (J3EztRUYA[jcVygDb], oniMmA1rl3C[jcVygDb]));
}

