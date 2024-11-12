main () {
    int IzaUeObd;
    int ljFhspovS6WR;
    int FKMwQVh;
    double  feTPdf7XJcq6 [2011];
    double  VFDimkQ1YUn [2011];
    double  LqeB0Gxhav;
    double  yfjJdtXPMsUK;
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
    double  aUw5aNbV;
    scanf ("%d", &IzaUeObd);
    for (FKMwQVh = (228 - 228); FKMwQVh < IzaUeObd; FKMwQVh = FKMwQVh +1) {
        scanf ("%lf", &feTPdf7XJcq6[FKMwQVh]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%lf", &VFDimkQ1YUn[FKMwQVh]);
    }
    aUw5aNbV = 0;
    for (FKMwQVh = 0; IzaUeObd -1 > FKMwQVh; FKMwQVh++) {
        ljFhspovS6WR = FKMwQVh +1;
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
        while (IzaUeObd > ljFhspovS6WR) {
            LqeB0Gxhav = feTPdf7XJcq6[FKMwQVh] - feTPdf7XJcq6[ljFhspovS6WR];
            yfjJdtXPMsUK = VFDimkQ1YUn[FKMwQVh] - VFDimkQ1YUn[ljFhspovS6WR];
            ljFhspovS6WR++;
            LqeB0Gxhav = sqrt (LqeB0Gxhav *LqeB0Gxhav+yfjJdtXPMsUK * yfjJdtXPMsUK);
            if (LqeB0Gxhav > aUw5aNbV)
                aUw5aNbV = LqeB0Gxhav;
        };
    }
    printf ("%.4lf\n", aUw5aNbV);
}

