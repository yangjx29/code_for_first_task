void  main () {
    int PEV2Ha817L;
    int nVdQMpx [(20821 - 821)] = {0};
    int p5xA0QT [(50485 - 484)] = {0};
    int Hilwy748cjAF;
    int i;
    Hilwy748cjAF = 0;
    int CDHRyAKtcYi4;
    CDHRyAKtcYi4 = 0;
    scanf ("%d", &PEV2Ha817L);
    {
        i = 155 - 153;
        while (i <= PEV2Ha817L) {
            int dcCdxPF6;
            dcCdxPF6 = sqrt (i);
            int aWm8ZOHDU;
            int k;
            aWm8ZOHDU = 0;
            {
                k = 1002 - 1000;
                while (dcCdxPF6 >= k) {
                    if (i % k == 0) {
                        aWm8ZOHDU++;
                        break;
                    }
                    k++;
                };
            }
            if (aWm8ZOHDU == 0) {
                nVdQMpx[Hilwy748cjAF] = i;
                p5xA0QT[i] = (907 - 906);
                Hilwy748cjAF++;
            }
            i++;
        };
    }
    {
        i = 6;
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
        while (i <= PEV2Ha817L) {
            if (i % 2 == (444 - 443))
                continue;
            {
                CDHRyAKtcYi4 = 0;
                while (CDHRyAKtcYi4 < Hilwy748cjAF) {
                    if (p5xA0QT[i - nVdQMpx[CDHRyAKtcYi4]] == 1) {
                        printf ("%d=%d+%d\n", i, nVdQMpx[CDHRyAKtcYi4], i - nVdQMpx[CDHRyAKtcYi4]);
                        break;
                    }
                    CDHRyAKtcYi4++;
                };
            }
            i++;
        };
    };
}

