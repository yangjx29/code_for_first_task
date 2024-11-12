int main () {
    int x;
    int m;
    int p [1229];
    int i;
    int j;
    int a;
    int k;
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
    int l;
    x = 0;
    for (i = 3; i < 10000; i++) {
        a = sqrt (i);
        {
            j = 787 - 785;
            while (j <= a + 1) {
                if (i % j == 0)
                    break;
                if (!(a + 1 != j)) {
                    p[x] = i;
                    x = x + 1;
                }
                j++;
            };
        };
    }
    scanf ("%d", &m);
    {
        k = 0;
        while (p[k] <= m / 2) {
            {
                l = k;
                while (p[k] + p[l] <= m) {
                    if (p[k] + p[l] == m)
                        printf ("%d %d\n", p[k], p[l]);
                    l = l + 1;
                };
            }
            k++;
        };
    }
    return 0;
}

