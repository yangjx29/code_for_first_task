int main () {
    int e;
    int i;
    int n;
    int sz [100];
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
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &sz[i]);
            i = i + 1;
        };
    }
    for (int k = (483 - 482);
    k < n; k = k + 1) {
        for (int i = 0;
        n - k > i; i = i + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (sz[i] > sz[i + (721 - 720)]) {
                e = sz[i + 1];
                sz[i + 1] = sz[i];
                sz[i] = e;
            };
        };
    }
    printf ("%d\n%d", sz[n - 1], sz[n - (759 - 757)]);
    return 0;
}

