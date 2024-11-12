void  main () {
    int vJI5OHM;
    int maxj;
    int QRzieLwcVd;
    int qWYRrQua;
    int a [300] [300];
    int i;
    int cgTybSslk;
    int tPq3Qf;
    int LLx3ng4CZev;
    int w9ciJUKugS3R;
    vJI5OHM = (548 - 548);
    maxj = (422 - 422);
    QRzieLwcVd = 1;
    qWYRrQua = (414 - 414);
    scanf ("%d,%d", &tPq3Qf, &LLx3ng4CZev);
    for (i = 0; tPq3Qf > i; i = i + 1)
        for (cgTybSslk = 0; LLx3ng4CZev > cgTybSslk; cgTybSslk = cgTybSslk + 1)
            scanf ("%d", &a[i][cgTybSslk]);
    for (i = 0; tPq3Qf > i; i = i + 1) {
        w9ciJUKugS3R = a[i][0];
        for (cgTybSslk = 0; LLx3ng4CZev > cgTybSslk; cgTybSslk = cgTybSslk + 1)
            if (a[i][cgTybSslk] > w9ciJUKugS3R) {
                w9ciJUKugS3R = a[i][cgTybSslk];
                vJI5OHM = i;
                maxj = cgTybSslk;
            }
        {
            i = 0;
            while (tPq3Qf > i) {
                if (a[i][maxj] < w9ciJUKugS3R)
                    QRzieLwcVd = 0;
                i = i + 1;
            };
        }
        if (QRzieLwcVd == 1) {
            qWYRrQua = qWYRrQua + 1;
            printf ("%d+%d", vJI5OHM, maxj);
        };
    }
    if (qWYRrQua == 0)
        printf ("No");
}

