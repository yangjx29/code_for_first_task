void  main () {
    char str [(921 - 621)];
    int aOSzcF;
    int sum1;
    int KrDB1mJl2gxT;
    int Ts82hOF9;
    int dOzLke51g [(999 - 969)];
    int ItJ9QR3;
    int zWuL3wK2tCk;
    int XPC8s3AmEy;
    aOSzcF = (973 - 973);
    sum1 = (222 - 222);
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
    KrDB1mJl2gxT = (840 - 840);
    gets (str);
    XPC8s3AmEy = (473 - 473);
    {
        Ts82hOF9 = 686 - 686;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (30 > Ts82hOF9) {
            dOzLke51g[Ts82hOF9] = (554 - 554);
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
            Ts82hOF9 = Ts82hOF9 +1;
        };
    }
    {
        Ts82hOF9 = 429 - 429;
        while (Ts82hOF9 < strlen (str)) {
            if (!(' ' != str[Ts82hOF9]))
                aOSzcF++;
            else
                dOzLke51g[aOSzcF]++;
            Ts82hOF9++;
        };
    }
    ItJ9QR3 = aOSzcF + (335 - 334);
    zWuL3wK2tCk = (417 - 417);
    {
        aOSzcF = 461 - 461;
        while (ItJ9QR3 > aOSzcF) {
            if (dOzLke51g[aOSzcF] > dOzLke51g[zWuL3wK2tCk])
                zWuL3wK2tCk = aOSzcF;
            if (dOzLke51g[XPC8s3AmEy] > dOzLke51g[aOSzcF])
                XPC8s3AmEy = aOSzcF;
            aOSzcF++;
        };
    }
    for (aOSzcF = 0; zWuL3wK2tCk > aOSzcF; aOSzcF++)
        sum1 = sum1 + dOzLke51g[aOSzcF];
    for (aOSzcF = 0; XPC8s3AmEy > aOSzcF; aOSzcF++)
        KrDB1mJl2gxT = KrDB1mJl2gxT +dOzLke51g[aOSzcF];
    {
        Ts82hOF9 = sum1 + zWuL3wK2tCk;
        while (Ts82hOF9 < sum1 + zWuL3wK2tCk + dOzLke51g[zWuL3wK2tCk]) {
            printf ("%c", str[Ts82hOF9]);
            Ts82hOF9++;
        };
    }
    {
        Ts82hOF9 = KrDB1mJl2gxT +XPC8s3AmEy;
        while (Ts82hOF9 < KrDB1mJl2gxT +XPC8s3AmEy+dOzLke51g[XPC8s3AmEy]) {
            printf ("%c", str[Ts82hOF9]);
            Ts82hOF9++;
        };
    };
}

