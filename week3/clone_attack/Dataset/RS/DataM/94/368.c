int a6M3l5EeINdL (const  void  *Tq3YaLCkn8, const  void  *U04Kwnv8Zh1) {
    int *a = NULL, *Zqo0Xzb = NULL;
    a = (int *) Tq3YaLCkn8;
    Zqo0Xzb = (int *) U04Kwnv8Zh1;
    return (*a - *Zqo0Xzb);
}

main () {
    int D7bKo1FtS, B912gRxOCli0, B4p9cvV = 0, kSXOJrINxRK = 0, ZWBwgtKN31b = 0;
    int a [D7bKo1FtS];
    int Zqo0Xzb [D7bKo1FtS];
    scanf ("%d", &D7bKo1FtS);
    for (B912gRxOCli0 = 0; D7bKo1FtS > B912gRxOCli0; B912gRxOCli0 = B912gRxOCli0 +1)
        scanf ("%d", &a[B912gRxOCli0]);
    {
        B912gRxOCli0 = 0;
        while (D7bKo1FtS > B912gRxOCli0) {
            Zqo0Xzb[B912gRxOCli0] = 0;
            B912gRxOCli0 = B912gRxOCli0 +1;
        };
    }
    {
        B912gRxOCli0 = 0;
        while (D7bKo1FtS > B912gRxOCli0) {
            if (a[B912gRxOCli0] % 2 == 1) {
                Zqo0Xzb[B4p9cvV] = a[B912gRxOCli0];
                B4p9cvV = B4p9cvV +1;
            }
            B912gRxOCli0 = B912gRxOCli0 +1;
        };
    }
    qsort (Zqo0Xzb, D7bKo1FtS, sizeof (int), a6M3l5EeINdL);
    for (B912gRxOCli0 = 0; B912gRxOCli0 < D7bKo1FtS; B912gRxOCli0 = B912gRxOCli0 +1) {
        if (Zqo0Xzb[B912gRxOCli0] > 0 && ZWBwgtKN31b == 0) {
            ZWBwgtKN31b = 1;
            printf ("%d", Zqo0Xzb[B912gRxOCli0]);
        }
        else {
            if (Zqo0Xzb[B912gRxOCli0] != 0)
                printf (",%d", Zqo0Xzb[B912gRxOCli0]);
        };
    };
}

