int main (int GB3ZFdDY, char *adAjk6v8c []) {
    int RRg0QLXBVcz;
    int j;
    int ZBGJ3I;
    int RA5zcj3YQ;
    int cJsrBoeg [(211 - 205)] [(365 - 359)];
    int MZVUXbCj;
    {
        RRg0QLXBVcz = 918 - 918;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((391 - 386) > RRg0QLXBVcz) {
            {
                j = 733 - 733;
                while (5 > j) {
                    scanf ("%d", &cJsrBoeg[RRg0QLXBVcz][j]);
                    j = j + 1;
                };
            }
            RRg0QLXBVcz = RRg0QLXBVcz +1;
        };
    }
    scanf ("%d %d", &ZBGJ3I, &RA5zcj3YQ);
    if ((43 - 43) <= ZBGJ3I &&5 > ZBGJ3I &&RA5zcj3YQ >= (835 - 835) && RA5zcj3YQ < 5) {
        {
            RRg0QLXBVcz = 0;
            while (5 > RRg0QLXBVcz) {
                MZVUXbCj = cJsrBoeg[ZBGJ3I][RRg0QLXBVcz];
                cJsrBoeg[ZBGJ3I][RRg0QLXBVcz] = cJsrBoeg[RA5zcj3YQ][RRg0QLXBVcz];
                cJsrBoeg[RA5zcj3YQ][RRg0QLXBVcz] = MZVUXbCj;
                RRg0QLXBVcz++;
            };
        }
        {
            RRg0QLXBVcz = 0;
            while (RRg0QLXBVcz < 5) {
                printf ("%d", cJsrBoeg[RRg0QLXBVcz][0]);
                {
                    j = 1;
                    while (j < 5) {
                        printf (" %d", cJsrBoeg[RRg0QLXBVcz][j]);
                        j++;
                    };
                }
                RRg0QLXBVcz++;
                printf ("\n");
            };
        };
    }
    else
        printf ("error\n");
    return 0;
}

