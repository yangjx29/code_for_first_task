int main () {
    double  qlsE5S [40];
    char Tp1TYOWFeku [40] [7];
    int j;
    int k;
    int n;
    int RcpPFZO;
    int wJBHhTcO9t;
    int Pq2AryYn;
    int p;
    j = (639 - 639);
    k = 0;
    double  hm [40];
    double  P47WM9c5vS [40];
    double  ONYGTd;
    scanf ("%d", &n);
    for (RcpPFZO = 0; RcpPFZO < n; RcpPFZO++) {
        scanf ("%s %lf", &Tp1TYOWFeku[RcpPFZO], &qlsE5S[RcpPFZO]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strlen (Tp1TYOWFeku[RcpPFZO]) == 4) {
            hm[j] = qlsE5S[RcpPFZO];
            j = j + 1;
            wJBHhTcO9t = j;
        }
        else {
            P47WM9c5vS[k] = qlsE5S[RcpPFZO];
            k = k + 1;
            Pq2AryYn = k;
        };
    }
    {
        p = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (p <= wJBHhTcO9t) {
            p = p + 1;
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (wJBHhTcO9t - 1 > j) {
                    if (hm[j + 1] < hm[j]) {
                        ONYGTd = hm[j + 1];
                        hm[j + 1] = hm[j];
                        hm[j] = ONYGTd;
                    }
                    j++;
                };
            };
        };
    }
    {
        j = 0;
        while (wJBHhTcO9t > j) {
            printf ("%.2lf ", hm[j]);
            j++;
        };
    }
    {
        p = 1;
        while (p <= Pq2AryYn) {
            p++;
            {
                k = 0;
                while (k < Pq2AryYn -1) {
                    if (P47WM9c5vS[k] < P47WM9c5vS[k + 1]) {
                        ONYGTd = P47WM9c5vS[k + 1];
                        P47WM9c5vS[k + 1] = P47WM9c5vS[k];
                        P47WM9c5vS[k] = ONYGTd;
                    }
                    k++;
                };
            };
        };
    }
    for (k = 0; k < Pq2AryYn -1; k = k + 1) {
        printf ("%.2lf ", P47WM9c5vS[k]);
    }
    printf ("%.2lf", P47WM9c5vS[Pq2AryYn -1]);
    return 0;
}

