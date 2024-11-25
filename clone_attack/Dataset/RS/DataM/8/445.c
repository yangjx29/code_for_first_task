main () {
    static int uTDF7ugCG3 [(922 - 822)], b [100];
    int GX1kK04Jiwy;
    int PUq1fFwNsM;
    int qRt4pDLk3;
    int dIA19JZqM;
    scanf ("%d %d\n", &GX1kK04Jiwy, &PUq1fFwNsM);
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
    for (qRt4pDLk3 = (871 - 871); qRt4pDLk3 < GX1kK04Jiwy; qRt4pDLk3 = qRt4pDLk3 + 1)
        scanf ("%d", &uTDF7ugCG3[qRt4pDLk3]);
    for (qRt4pDLk3 = 0; PUq1fFwNsM > qRt4pDLk3; qRt4pDLk3 = qRt4pDLk3 + 1)
        scanf ("%d", &b[qRt4pDLk3]);
    for (qRt4pDLk3 = 0; GX1kK04Jiwy -(316 - 315) > qRt4pDLk3; qRt4pDLk3 = qRt4pDLk3 + 1) {
        dIA19JZqM = qRt4pDLk3 + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (dIA19JZqM < GX1kK04Jiwy) {
            if (uTDF7ugCG3[qRt4pDLk3] > uTDF7ugCG3[dIA19JZqM]) {
                uTDF7ugCG3[dIA19JZqM] = uTDF7ugCG3[dIA19JZqM] + uTDF7ugCG3[qRt4pDLk3];
                uTDF7ugCG3[qRt4pDLk3] = uTDF7ugCG3[dIA19JZqM] - uTDF7ugCG3[qRt4pDLk3];
                uTDF7ugCG3[dIA19JZqM] = uTDF7ugCG3[dIA19JZqM] - uTDF7ugCG3[qRt4pDLk3];
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
            dIA19JZqM = dIA19JZqM + 1;
        };
    }
    {
        qRt4pDLk3 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (qRt4pDLk3 < PUq1fFwNsM -1) {
            for (dIA19JZqM = qRt4pDLk3 + 1; dIA19JZqM < PUq1fFwNsM; dIA19JZqM = dIA19JZqM + 1)
                if (b[dIA19JZqM] < b[qRt4pDLk3]) {
                    b[dIA19JZqM] = b[dIA19JZqM] + b[qRt4pDLk3];
                    b[qRt4pDLk3] = b[dIA19JZqM] - b[qRt4pDLk3];
                    b[dIA19JZqM] = b[dIA19JZqM] - b[qRt4pDLk3];
                }
            qRt4pDLk3 = qRt4pDLk3 + 1;
        };
    }
    for (qRt4pDLk3 = GX1kK04Jiwy; GX1kK04Jiwy +PUq1fFwNsM > qRt4pDLk3; qRt4pDLk3 = qRt4pDLk3 + 1)
        uTDF7ugCG3[qRt4pDLk3] = b[qRt4pDLk3 - GX1kK04Jiwy];
    {
        qRt4pDLk3 = 0;
        while (qRt4pDLk3 < GX1kK04Jiwy +PUq1fFwNsM-1) {
            printf ("%d ", uTDF7ugCG3[qRt4pDLk3]);
            qRt4pDLk3 = qRt4pDLk3 + 1;
        };
    }
    printf ("%d", uTDF7ugCG3[GX1kK04Jiwy +PUq1fFwNsM-1]);
}

