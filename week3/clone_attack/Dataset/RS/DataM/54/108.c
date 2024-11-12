int main () {
    int n, KnbGWsj8oc, DgcrEIBQ, m;
    int j;
    scanf ("%d%d", &n, &DgcrEIBQ);
    {
        KnbGWsj8oc = 7;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (KnbGWsj8oc % n == DgcrEIBQ) {
                m = KnbGWsj8oc;
                for (j = 1; j <= n; j++) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (j < n) {
                        m = m - DgcrEIBQ;
                        if (!(m % n)) {
                            m = m - m / n;
                        }
                        else {
                            break;
                        };
                    }
                    else {
                        m -= DgcrEIBQ;
                        if (!(m % n)) {
                            printf ("%d", KnbGWsj8oc);
                            return 0;
                        };
                    };
                };
            }
            KnbGWsj8oc++;
        };
    };
}

