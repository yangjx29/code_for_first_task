int main () {
    char k6KQH2G [101];
    int la;
    cin.getline (k6KQH2G, 101);
    la = strlen (k6KQH2G);
    {
        int TReGtMbvz = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TReGtMbvz < la) {
            if (!(' ' != k6KQH2G[TReGtMbvz]))
                if (!(' ' != k6KQH2G[TReGtMbvz +1])) {
                    for (int uaugh9nDe = TReGtMbvz;
                    uaugh9nDe < la; uaugh9nDe++)
                        k6KQH2G[uaugh9nDe] = k6KQH2G[uaugh9nDe + 1];
                    TReGtMbvz--;
                    la--;
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
            TReGtMbvz++;
        };
    }
    {
        int TReGtMbvz = 0;
        while (TReGtMbvz < la) {
            cout << k6KQH2G[TReGtMbvz];
            TReGtMbvz++;
        };
    }
    return 0;
}

