void  main () {
    char tIojiCXxwA [101] [20] = {0}, B2AkrsF3Nbe [101] [20] = {0}, pwrIzx [101] [20] = {0};
    int L4vOEzPxQXLu;
    int I2tKxnemVd [100] = {0};
    int i;
    int zcaq9t8zWs3;
    int ckVmKZaO1Qfc;
    int siA4Pt8 [101] = {0};
    int xCQ26K;
    int tIdgrCjPi;
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
    scanf ("%d", &L4vOEzPxQXLu);
    {
        i = 290 - 289;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (L4vOEzPxQXLu >= i) {
            scanf ("%s%d", tIojiCXxwA[i], &I2tKxnemVd[i]);
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
            i = i + 1;
        };
    }
    {
        ckVmKZaO1Qfc = 1;
        zcaq9t8zWs3 = 1;
        i = 1;
        while (i <= L4vOEzPxQXLu) {
            if (I2tKxnemVd[i] >= 60) {
                siA4Pt8[zcaq9t8zWs3] = I2tKxnemVd[i];
                strcpy (B2AkrsF3Nbe[zcaq9t8zWs3], tIojiCXxwA[i]);
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
                zcaq9t8zWs3 = zcaq9t8zWs3 + 1;
            }
            else {
                strcpy (pwrIzx[ckVmKZaO1Qfc], tIojiCXxwA[i]);
                ckVmKZaO1Qfc++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    tIdgrCjPi = ckVmKZaO1Qfc;
    xCQ26K = zcaq9t8zWs3;
    {
        i = 1;
        while (xCQ26K >= i) {
            {
                zcaq9t8zWs3 = 1;
                while (zcaq9t8zWs3 <= xCQ26K - i) {
                    if (siA4Pt8[zcaq9t8zWs3] < siA4Pt8[zcaq9t8zWs3 + 1]) {
                        siA4Pt8[100] = siA4Pt8[zcaq9t8zWs3];
                        siA4Pt8[zcaq9t8zWs3] = siA4Pt8[zcaq9t8zWs3 + 1];
                        siA4Pt8[zcaq9t8zWs3 + 1] = siA4Pt8[100];
                        strcpy (B2AkrsF3Nbe[101], B2AkrsF3Nbe[zcaq9t8zWs3]);
                        strcpy (B2AkrsF3Nbe[zcaq9t8zWs3], B2AkrsF3Nbe[zcaq9t8zWs3 + 1]);
                        strcpy (B2AkrsF3Nbe[zcaq9t8zWs3 + 1], B2AkrsF3Nbe[101]);
                    }
                    zcaq9t8zWs3++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < xCQ26K) {
            printf ("%s\n", B2AkrsF3Nbe[i]);
            i++;
        };
    }
    {
        ckVmKZaO1Qfc = 1;
        while (ckVmKZaO1Qfc < tIdgrCjPi) {
            printf ("%s\n", pwrIzx[ckVmKZaO1Qfc]);
            ckVmKZaO1Qfc++;
        };
    };
}

