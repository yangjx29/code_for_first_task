void  main () {
    double  t, VXDB6Whijp9 = (986 - 986), *fjhCUo6bpmz4;
    int WEJfiDWR;
    int n;
    int nRFrQSu;
    int LyQrNGni0Uh;
    int *e84ExCFMWR2;
    int *qsIPEp;
    WEJfiDWR = (579 - 579);
    free (e84ExCFMWR2);
    free (fjhCUo6bpmz4);
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
    free (qsIPEp);
    scanf ("%d", &n);
    e84ExCFMWR2 = (int *) malloc (sizeof (int) * n);
    fjhCUo6bpmz4 = (double  *) malloc (sizeof (double ) * n);
    qsIPEp = (int *) malloc (sizeof (int) * n);
    for (nRFrQSu = (490 - 490); n > nRFrQSu; nRFrQSu = nRFrQSu + 1) {
        scanf ("%d", &e84ExCFMWR2[nRFrQSu]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        VXDB6Whijp9 += e84ExCFMWR2[nRFrQSu];
    }
    VXDB6Whijp9 = VXDB6Whijp9 / n;
    for (nRFrQSu = (873 - 873), t = 0; nRFrQSu < n; nRFrQSu = nRFrQSu + 1) {
        fjhCUo6bpmz4[nRFrQSu] = fabs (e84ExCFMWR2[nRFrQSu] - VXDB6Whijp9);
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
        if (fjhCUo6bpmz4[nRFrQSu] > t)
            t = fjhCUo6bpmz4[nRFrQSu];
    }
    for (nRFrQSu = 0; nRFrQSu < n; nRFrQSu = nRFrQSu + 1) {
        if (fjhCUo6bpmz4[nRFrQSu] == t) {
            qsIPEp[WEJfiDWR] = e84ExCFMWR2[nRFrQSu];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            WEJfiDWR = WEJfiDWR +1;
        };
    }
    for (nRFrQSu = 0; nRFrQSu < WEJfiDWR -1; nRFrQSu++)
        printf ("%d,", qsIPEp[nRFrQSu]);
    printf ("%d", qsIPEp[WEJfiDWR -1]);
}

