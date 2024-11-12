main () {
    int KYTf7cJdaD;
    int J4WVKbaBin;
    int b;
    int tDdkE3nVAgSu;
    int SdYzeuF;
    char N4Ax3G [100], y [100] = {'\0'};
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
    scanf ("%s", N4Ax3G);
    if (!('\0' != N4Ax3G[(640 - 639)]))
        y[(184 - 184)] = '0';
    tDdkE3nVAgSu = N4Ax3G[0] - '0';
    for (KYTf7cJdaD = 1; N4Ax3G[KYTf7cJdaD] != '\0'; KYTf7cJdaD++) {
        J4WVKbaBin = N4Ax3G[KYTf7cJdaD] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b = tDdkE3nVAgSu * 10 + J4WVKbaBin;
        if ((577 - 564) <= b) {
            tDdkE3nVAgSu = b % 13;
            SdYzeuF = b / 13;
            y[KYTf7cJdaD -1] = '0' + SdYzeuF;
        }
        else {
            y[KYTf7cJdaD -1] = '0';
            tDdkE3nVAgSu = b;
        };
    }
    if (y[0] == '0' && N4Ax3G[1] != '\0' && N4Ax3G[2] != '\0') {
        for (KYTf7cJdaD = 0; y[KYTf7cJdaD] != '\0'; KYTf7cJdaD++)
            y[KYTf7cJdaD] = y[KYTf7cJdaD +1];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%s\n%d", y, tDdkE3nVAgSu);
}

