main () {
    int d0Uwk6EPQ4Sh;
    d0Uwk6EPQ4Sh = 0;
    char HFhIDcEpj [100];
    int heG43vYSNUy;
    int aAsr2K;
    long  kPYKFq8M;
    kPYKFq8M = 0;
    int d9ZT0j;
    int QbmEkTd;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char san0loBy6I [100];
    int slen = strlen (san0loBy6I);
    long  tempdec;
    int Rswu9jtUlEJ;
    scanf ("%d %s %d", &d9ZT0j, &san0loBy6I, &QbmEkTd);
    {
        heG43vYSNUy = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (slen - 1 >= heG43vYSNUy) {
            tempdec = 1;
            if (48 <= san0loBy6I[heG43vYSNUy] && 57 >= san0loBy6I[heG43vYSNUy]) {
                san0loBy6I[heG43vYSNUy] = san0loBy6I[heG43vYSNUy] - 48;
            }
            else if (65 <= san0loBy6I[heG43vYSNUy] && 90 >= san0loBy6I[heG43vYSNUy]) {
                san0loBy6I[heG43vYSNUy] = san0loBy6I[heG43vYSNUy] - 55;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                san0loBy6I[heG43vYSNUy] = san0loBy6I[heG43vYSNUy] - 87;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            for (aAsr2K = 1; aAsr2K <= slen - heG43vYSNUy - 1; aAsr2K++) {
                tempdec = tempdec * d9ZT0j;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
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
            kPYKFq8M = kPYKFq8M + tempdec * san0loBy6I[heG43vYSNUy];
            heG43vYSNUy++;
        };
    }
    while (kPYKFq8M >= QbmEkTd) {
        Rswu9jtUlEJ = kPYKFq8M % QbmEkTd;
        if (Rswu9jtUlEJ < 10) {
            HFhIDcEpj[d0Uwk6EPQ4Sh] = Rswu9jtUlEJ +48;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        else {
            HFhIDcEpj[d0Uwk6EPQ4Sh] = Rswu9jtUlEJ +55;
        }
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
        d0Uwk6EPQ4Sh = d0Uwk6EPQ4Sh + 1;
        kPYKFq8M = kPYKFq8M / QbmEkTd;
    }
    if (kPYKFq8M < 10) {
        HFhIDcEpj[d0Uwk6EPQ4Sh] = kPYKFq8M + 48;
    }
    else {
        HFhIDcEpj[d0Uwk6EPQ4Sh] = kPYKFq8M + 55;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        heG43vYSNUy = d0Uwk6EPQ4Sh;
        while (heG43vYSNUy >= 0) {
            printf ("%c", HFhIDcEpj[heG43vYSNUy]);
            heG43vYSNUy--;
        };
    }
    scanf ("%d", &heG43vYSNUy);
}

