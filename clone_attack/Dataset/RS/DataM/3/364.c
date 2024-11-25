int main () {
    int hYuaWBjCz5;
    int s;
    int n;
    int k;
    int i;
    int j;
    int a [10000];
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
    hYuaWBjCz5 = 0;
    s = 0;
    scanf ("%d%d", &n, &k);
    {
        i = 1;
        while (n > i) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (hYuaWBjCz5 == 0) {
                j = 0;
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
                while (i > j) {
                    if (a[i] + a[j] == k) {
                        s = 1;
                        hYuaWBjCz5 = 1;
                        break;
                        printf ("yes\n");
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    if (s == 0) {
        printf ("no\n");
    }
    return 0;
}

