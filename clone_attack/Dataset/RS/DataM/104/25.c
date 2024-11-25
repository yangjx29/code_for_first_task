void  main () {
    int ogLh1aHn, ME4OXp621e, yYeAGsFm [(1256 - 256)], S3jmGaz6i2K [(1578 - 578)], kJWkhbiKZzf, z2iW7t63A, mx, RMPyDHmgf0Aj, flag = (622 - 622);
    scanf ("%d %d", &ogLh1aHn, &ME4OXp621e);
    *yYeAGsFm = ogLh1aHn;
    for (mx = (713 - 712); 1000 > mx; mx++) {
        *(yYeAGsFm + mx) = *(yYeAGsFm + mx - (779 - 778)) / 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*(yYeAGsFm + mx) == 0)
            break;
    }
    {
        RMPyDHmgf0Aj = 884 - 883;
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
        while (RMPyDHmgf0Aj < 1000) {
            *(S3jmGaz6i2K +RMPyDHmgf0Aj) = *(S3jmGaz6i2K +RMPyDHmgf0Aj-1) / 2;
            if (*(S3jmGaz6i2K +RMPyDHmgf0Aj) == 0)
                break;
            RMPyDHmgf0Aj = RMPyDHmgf0Aj +1;
        };
    }
    {
        kJWkhbiKZzf = 0;
        while (mx >= kJWkhbiKZzf) {
            {
                z2iW7t63A = 0;
                while (z2iW7t63A <= RMPyDHmgf0Aj) {
                    if (*(yYeAGsFm + kJWkhbiKZzf) == *(S3jmGaz6i2K +z2iW7t63A)) {
                        flag = 1;
                        break;
                    }
                    z2iW7t63A++;
                };
            }
            if (flag == 1)
                break;
            kJWkhbiKZzf++;
        };
    }
    printf ("%d", *(yYeAGsFm + kJWkhbiKZzf));
    *S3jmGaz6i2K = ME4OXp621e;
}

