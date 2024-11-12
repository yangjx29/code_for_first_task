int main () {
    int n;
    int count [100] = {0};
    int QdEhO9X1 [100];
    int pxBXZT [100];
    int mkqPCnuj5cF0 [100];
    int u6THuIBRvEV;
    int max;
    int oYq409sIu;
    int Y1IwEu4aYQ;
    max = count[0];
    oYq409sIu = 0;
    Y1IwEu4aYQ = count[0];
    char g9OumAz [100] [30];
    char hdJ8Zi5Tpvm [100] [2];
    char b [100] [2];
    scanf ("%d", &n);
    for (u6THuIBRvEV = 0; u6THuIBRvEV < n; u6THuIBRvEV = u6THuIBRvEV + 1) {
        scanf ("%s%d%d%s%s%d", g9OumAz[u6THuIBRvEV], &QdEhO9X1[u6THuIBRvEV], &pxBXZT[u6THuIBRvEV], hdJ8Zi5Tpvm[u6THuIBRvEV], b[u6THuIBRvEV], &mkqPCnuj5cF0[u6THuIBRvEV]);
        if (QdEhO9X1[u6THuIBRvEV] > 80 && 1 <= mkqPCnuj5cF0[u6THuIBRvEV])
            count[u6THuIBRvEV] = count[u6THuIBRvEV] + 8000;
        if (QdEhO9X1[u6THuIBRvEV] > 85 && pxBXZT[u6THuIBRvEV] > 80)
            count[u6THuIBRvEV] = count[u6THuIBRvEV] + 4000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (QdEhO9X1[u6THuIBRvEV] > 90)
            count[u6THuIBRvEV] = count[u6THuIBRvEV] + 2000;
        if (QdEhO9X1[u6THuIBRvEV] > 85 && strcmp (b[u6THuIBRvEV], "Y") == 0)
            count[u6THuIBRvEV] += 1000;
        if (pxBXZT[u6THuIBRvEV] > 80 && strcmp (hdJ8Zi5Tpvm[u6THuIBRvEV], "Y") == 0)
            count[u6THuIBRvEV] = count[u6THuIBRvEV] + 850;
    }
    {
        u6THuIBRvEV = 1;
        while (u6THuIBRvEV < n) {
            Y1IwEu4aYQ = Y1IwEu4aYQ +count[u6THuIBRvEV];
            if (count[u6THuIBRvEV] > max) {
                max = count[u6THuIBRvEV];
                oYq409sIu = u6THuIBRvEV;
            }
            u6THuIBRvEV = u6THuIBRvEV + 1;
        };
    }
    printf ("%s\n%d\n%d", g9OumAz[oYq409sIu], count[oYq409sIu], Y1IwEu4aYQ);
    return 0;
}

