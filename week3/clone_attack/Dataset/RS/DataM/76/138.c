int main () {
    double  q;
    int a;
    int f1dXMcoUh;
    int cdi6ygZ1;
    int y;
    int HoBptyz4HlQi;
    int dS7Z36kNsr;
    int XksrE6 [50000];
    int n;
    int m [50000];
    int z;
    a = (222 - 222);
    f1dXMcoUh = (38 - 38);
    cdi6ygZ1 = 0;
    y = 10000;
    scanf ("%d", &n);
    {
        HoBptyz4HlQi = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HoBptyz4HlQi < n) {
            scanf ("%d ", &XksrE6[HoBptyz4HlQi]);
            scanf ("%d", &m[HoBptyz4HlQi]);
            HoBptyz4HlQi = HoBptyz4HlQi +1;
        };
    }
    {
        HoBptyz4HlQi = 0;
        while (HoBptyz4HlQi < n) {
            if (y >= XksrE6[HoBptyz4HlQi])
                y = XksrE6[HoBptyz4HlQi];
            if (m[HoBptyz4HlQi] >= cdi6ygZ1)
                cdi6ygZ1 = m[HoBptyz4HlQi];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            HoBptyz4HlQi = HoBptyz4HlQi +1;
        };
    }
    {
        HoBptyz4HlQi = y;
        while (HoBptyz4HlQi < cdi6ygZ1) {
            {
                dS7Z36kNsr = 0;
                while (dS7Z36kNsr < n) {
                    if (HoBptyz4HlQi +0.5 >= XksrE6[dS7Z36kNsr] && HoBptyz4HlQi +0.5 <= m[dS7Z36kNsr])
                        break;
                    dS7Z36kNsr = dS7Z36kNsr + 1;
                };
            }
            if (dS7Z36kNsr == n)
                break;
            HoBptyz4HlQi = HoBptyz4HlQi +1;
        };
    }
    if (HoBptyz4HlQi == cdi6ygZ1)
        printf ("%d %d", y, cdi6ygZ1);
    else
        printf ("no");
    return 0;
}

