int main () {
    int y;
    int n;
    int x;
    int i;
    int k;
    int YyudcbWZ;
    y = 0;
    int a [1000];
    scanf ("%d%d", &n, &k);
    {
        YyudcbWZ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 0;
        while (i < n, YyudcbWZ < n) {
            YyudcbWZ = YyudcbWZ +1;
            scanf ("%d", &x);
            a[i] = x;
            i = i + 1;
        };
    }
    for (i = 0; i < n - 1; i++) {
        {
            YyudcbWZ = i + 1;
            while (YyudcbWZ < n) {
                if (a[i] + a[YyudcbWZ] == k) {
                    y = 1;
                    break;
                }
                YyudcbWZ++;
            };
        }
        if (y == 1) {
            break;
        };
    }
    if (y == 1) {
        printf ("yes");
    }
    else {
        printf ("no");
    }
    return 0;
}

