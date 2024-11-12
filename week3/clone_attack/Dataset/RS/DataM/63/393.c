int main () {
    int Wjr7fFiQ4yW;
    int CpjBM4em;
    int K6BLDSH;
    int ObFdBGQn5zco;
    int f1P2zmT7;
    int p;
    int QesOKB8WFVG [(447 - 346)] [(591 - 490)];
    int UF7aqxXRKA [101] [101];
    int J1abfEO2 [101] [101] = {(857 - 857)};
    int MSAQRc;
    int j2G8FtyRoedx;
    int x2;
    int y2;
    scanf ("%d %d", &MSAQRc, &j2G8FtyRoedx);
    {
        Wjr7fFiQ4yW = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Wjr7fFiQ4yW < MSAQRc) {
            for (CpjBM4em = 0; CpjBM4em < j2G8FtyRoedx; CpjBM4em = CpjBM4em +1)
                scanf ("%d", &QesOKB8WFVG[Wjr7fFiQ4yW][CpjBM4em]);
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
            Wjr7fFiQ4yW = Wjr7fFiQ4yW +1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    for (Wjr7fFiQ4yW = 0; Wjr7fFiQ4yW < x2; Wjr7fFiQ4yW = Wjr7fFiQ4yW +1) {
        CpjBM4em = 0;
        while (CpjBM4em < y2) {
            scanf ("%d", &UF7aqxXRKA[Wjr7fFiQ4yW][CpjBM4em]);
            CpjBM4em = CpjBM4em +1;
        };
    }
    for (Wjr7fFiQ4yW = 0; Wjr7fFiQ4yW < MSAQRc; Wjr7fFiQ4yW = Wjr7fFiQ4yW +1) {
        for (CpjBM4em = 0; CpjBM4em < y2 - 1; CpjBM4em = CpjBM4em +1) {
            {
                K6BLDSH = 0;
                while (K6BLDSH < x2) {
                    J1abfEO2[Wjr7fFiQ4yW][CpjBM4em] = J1abfEO2[Wjr7fFiQ4yW][CpjBM4em] + QesOKB8WFVG[Wjr7fFiQ4yW][K6BLDSH] * UF7aqxXRKA[K6BLDSH][CpjBM4em];
                    K6BLDSH = K6BLDSH +1;
                };
            }
            printf ("%d ", J1abfEO2[Wjr7fFiQ4yW][CpjBM4em]);
        }
        {
            K6BLDSH = 0;
            while (K6BLDSH < x2) {
                J1abfEO2[Wjr7fFiQ4yW][y2 - 1] = J1abfEO2[Wjr7fFiQ4yW][y2 - 1] + QesOKB8WFVG[Wjr7fFiQ4yW][K6BLDSH] * UF7aqxXRKA[K6BLDSH][y2 - 1];
                K6BLDSH = K6BLDSH +1;
            };
        }
        printf ("%d\n", J1abfEO2[Wjr7fFiQ4yW][y2 - 1]);
    }
    return 0;
}

