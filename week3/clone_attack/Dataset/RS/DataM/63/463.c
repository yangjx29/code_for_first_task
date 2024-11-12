void  oUtE08ZG (int x, int KAxlayLTcVRC, int z [150] [150]) {
    {
        int Y3rHChDyjEAk = (771 - 771);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x > Y3rHChDyjEAk) {
            {
                int gybO0zrEo = 0;
                while (KAxlayLTcVRC > gybO0zrEo) {
                    scanf ("%d", &z[Y3rHChDyjEAk][gybO0zrEo]);
                    gybO0zrEo = gybO0zrEo + 1;
                };
            }
            Y3rHChDyjEAk = Y3rHChDyjEAk +1;
        };
    };
}

int main () {
    int a [150] [150], b [150] [150];
    int U8x1IWHzm0i, n, p, XPfRTQyGrqj, Y3rHChDyjEAk, gybO0zrEo, k;
    int z;
    scanf ("%d %d", &U8x1IWHzm0i, &n);
    oUtE08ZG (U8x1IWHzm0i, n, a);
    scanf ("%d %d", &XPfRTQyGrqj, &p);
    oUtE08ZG (n, p, b);
    {
        Y3rHChDyjEAk = 0;
        while (U8x1IWHzm0i > Y3rHChDyjEAk) {
            {
                gybO0zrEo = 0;
                while (p > gybO0zrEo) {
                    z = 0;
                    {
                        k = 0;
                        while (n > k) {
                            z = z + a[Y3rHChDyjEAk][k] * b[k][gybO0zrEo];
                            k++;
                        };
                    }
                    if (p - (36 - 35) > gybO0zrEo)
                        printf ("%d ", z);
                    else {
                        if (!(p - 1 != gybO0zrEo) && Y3rHChDyjEAk < U8x1IWHzm0i -1)
                            printf ("%d\n", z);
                        else
                            printf ("%d", z);
                    }
                    gybO0zrEo++;
                };
            }
            Y3rHChDyjEAk++;
        };
    }
    return 0;
}

