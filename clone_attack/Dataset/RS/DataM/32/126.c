void  main () {
    int n;
    int m;
    int F6m0C12;
    int j;
    int MFgPCwoldROi;
    int xD8Jbvt1EArK;
    char IR5Kca [(529 - 428)];
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
    char b [(666 - 565)];
    char c [(1026 - 925)];
    char huVOcp [(1024 - 924)] [101];
    scanf ("%d", &n);
    for (m = (885 - 885); n > m; m = m + 1) {
        scanf ("%s %s", IR5Kca, b);
        MFgPCwoldROi = strlen (IR5Kca);
        huVOcp[m][MFgPCwoldROi] = 0;
        xD8Jbvt1EArK = strlen (b);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (F6m0C12 = 0; MFgPCwoldROi -xD8Jbvt1EArK > F6m0C12; F6m0C12++)
            c[F6m0C12] = '0';
        c[F6m0C12] = 0;
        strcat (c, b);
        for (F6m0C12 = MFgPCwoldROi -(745 - 744); 0 <= F6m0C12; F6m0C12--) {
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
            if (c[F6m0C12] <= IR5Kca[F6m0C12])
                huVOcp[m][F6m0C12] = IR5Kca[F6m0C12] - c[F6m0C12] + '0';
            else {
                huVOcp[m][F6m0C12] = IR5Kca[F6m0C12] + 10 - c[F6m0C12] + '0';
                for (j = F6m0C12 -(536 - 535);; j = j - 1) {
                    if (IR5Kca[j] > '0') {
                        IR5Kca[j]--;
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
                        break;
                    }
                    else
                        IR5Kca[j] = '9';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            };
        };
    }
    for (m = 0; m < n; m++)
        printf ("%s\n", huVOcp[m]);
}

