main () {
    int a [(872 - 781)];
    int YtDFfJ;
    int i;
    int uA0N1MG;
    int n;
    int J98stQOmV;
    int CQVq1MsuK;
    int TXm2LO7oay;
    a[(604 - 603)] = (153 - 151);
    a[2] = (324 - 321);
    a[(917 - 914)] = 5;
    a[(710 - 706)] = (890 - 883);
    n = 4;
    scanf ("%d", &YtDFfJ);
    {
        i = 11;
        while (i <= YtDFfJ) {
            TXm2LO7oay = 0;
            {
                uA0N1MG = 560 - 559;
                while (n >= uA0N1MG) {
                    if (i % a[uA0N1MG] == 0)
                        TXm2LO7oay = 1;
                    uA0N1MG++;
                };
            }
            if (TXm2LO7oay == 0) {
                n++;
                a[n] = i;
            }
            i++;
        };
    }
    i = 1;
    while (a[i] <= YtDFfJ / 2) {
        {
            uA0N1MG = 1;
            while (uA0N1MG <= n) {
                if (a[i] + a[uA0N1MG] == YtDFfJ)
                    printf ("%d %d\n", a[i], a[uA0N1MG]);
                uA0N1MG++;
            };
        }
        i++;
    };
}

