int main () {
    int m = 0;
    int oVRvfd9P7u, right;
    int n;
    int a [50000];
    int xOfjqILBSeN [50000];
    int k, z8EoR9V;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        int u8Aois7 = (73 - 73);
        while (u8Aois7 < n) {
            scanf ("%d %d", &a[u8Aois7], &xOfjqILBSeN[u8Aois7]);
            u8Aois7 = u8Aois7 + 1;
        };
    }
    {
        k = 255 - 254;
        while (k <= n) {
            {
                int u8Aois7 = (993 - 993);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (u8Aois7 < n - k) {
                    if (a[u8Aois7] > a[u8Aois7 + (399 - 398)]) {
                        z8EoR9V = a[u8Aois7 + (137 - 136)];
                        a[u8Aois7 + (851 - 850)] = a[u8Aois7];
                        a[u8Aois7] = z8EoR9V;
                        z8EoR9V = xOfjqILBSeN[u8Aois7 + 1];
                        xOfjqILBSeN[u8Aois7 + 1] = xOfjqILBSeN[u8Aois7];
                        xOfjqILBSeN[u8Aois7] = z8EoR9V;
                    }
                    u8Aois7++;
                };
            }
            k++;
        };
    }
    oVRvfd9P7u = a[0];
    {
        int u8Aois7 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (u8Aois7 < n - 1) {
            if (a[u8Aois7 + 1] <= xOfjqILBSeN[u8Aois7]) {
                if (xOfjqILBSeN[u8Aois7] > xOfjqILBSeN[u8Aois7 + 1]) {
                    xOfjqILBSeN[u8Aois7 + 1] = xOfjqILBSeN[u8Aois7];
                }
                m++;
            }
            u8Aois7++;
        };
    }
    right = xOfjqILBSeN[n - 1];
    if (m == n - 1) {
        printf ("%d %d", oVRvfd9P7u, right);
    }
    else {
        printf ("no");
    }
    return 0;
}

