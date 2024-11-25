void  main () {
    int NTxFQ51VovX;
    int a [30];
    int b [30];
    int qc5oeS;
    int OBALDsjwe;
    int l6WcPrioafNh;
    int n;
    NTxFQ51VovX = 1;
    scanf ("%d", &n);
    {
        qc5oeS = 1;
        while (n >= qc5oeS) {
            scanf ("%d", &a[qc5oeS]);
            b[qc5oeS] = 1;
            qc5oeS++;
        };
    }
    for (qc5oeS = n - 1; 1 <= qc5oeS; qc5oeS--) {
        {
            OBALDsjwe = qc5oeS + 1;
            while (OBALDsjwe <= n) {
                if (a[qc5oeS] >= a[OBALDsjwe] && b[qc5oeS] < b[OBALDsjwe] + 1)
                    b[qc5oeS] = b[OBALDsjwe] + 1;
                OBALDsjwe++;
            };
        }
        if (b[qc5oeS] > NTxFQ51VovX)
            NTxFQ51VovX = b[qc5oeS];
    }
    printf ("%d", NTxFQ51VovX);
}

