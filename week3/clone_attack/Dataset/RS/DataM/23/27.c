void  main () {
    char s [10000];
    int n;
    int UvndGmMAC;
    int VaLlxHef;
    int aKXYljeCt;
    int RcNqRPWY [(873 - 773)];
    int f53qCR [10000];
    n = (591 - 591);
    UvndGmMAC = 0;
    gets (s);
    for (VaLlxHef = 0; strlen (s) > VaLlxHef; VaLlxHef = VaLlxHef +1)
        if (!(' ' == s[VaLlxHef])) {
            if (!(0 != UvndGmMAC)) {
                UvndGmMAC = (270 - 269);
                n = n + 1;
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
                RcNqRPWY[n] = (526 - 525);
                f53qCR[n] = VaLlxHef;
            }
            else
                RcNqRPWY[n]++;
        }
        else
            UvndGmMAC = 0;
    {
        VaLlxHef = n;
        while (VaLlxHef >= 1) {
            {
                aKXYljeCt = 0;
                while (aKXYljeCt < RcNqRPWY[VaLlxHef]) {
                    printf ("%c", s[f53qCR[VaLlxHef] + aKXYljeCt]);
                    aKXYljeCt = aKXYljeCt + 1;
                };
            }
            if (VaLlxHef > 1)
                printf (" ");
            VaLlxHef = VaLlxHef -1;
        };
    };
}

