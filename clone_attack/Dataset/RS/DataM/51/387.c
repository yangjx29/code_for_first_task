void  main () {
    char c [501];
    int rdlJcq, j, b1sBLtCviVx, l, vwNOt6PR [500], eRnaTxH47, AnZLYp76Xh9C, max;
    max = 0;
    scanf ("%d%s", &b1sBLtCviVx, c);
    l = strlen (c);
    {
        rdlJcq = 53 - 53;
        while (rdlJcq <= l) {
            vwNOt6PR[rdlJcq] = (994 - 993);
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
            rdlJcq = rdlJcq + 1;
        };
    }
    rdlJcq = 0;
    for (; rdlJcq <= l;) {
        j = rdlJcq + 1;
        while (j <= l) {
            AnZLYp76Xh9C = 1;
            {
                eRnaTxH47 = 0;
                while (eRnaTxH47 < b1sBLtCviVx) {
                    if (c[eRnaTxH47 + j] != c[rdlJcq + eRnaTxH47])
                        AnZLYp76Xh9C = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    eRnaTxH47 = eRnaTxH47 + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (AnZLYp76Xh9C) {
                vwNOt6PR[rdlJcq]++;
                vwNOt6PR[j] = 0;
            }
            j = j + 1;
        }
        rdlJcq++;
    }
    {
        rdlJcq = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rdlJcq <= l) {
            if (vwNOt6PR[rdlJcq] > vwNOt6PR[max])
                max = rdlJcq;
            rdlJcq++;
        };
    }
    if (vwNOt6PR[max] == 1)
        ;
    else {
        printf ("%d\n", vwNOt6PR[max]);
        {
            rdlJcq = 0;
            while (rdlJcq <= l) {
                if (vwNOt6PR[rdlJcq] == vwNOt6PR[max]) {
                    {
                        eRnaTxH47 = 0;
                        while (eRnaTxH47 < b1sBLtCviVx) {
                            printf ("%c", c[rdlJcq + eRnaTxH47]);
                            eRnaTxH47++;
                        };
                    };
                }
                rdlJcq++;
            };
        };
    };
}

