int main () {
    int c [(359 - 259)] = {0};
    int i, j, k = 1, flag = 1;
    int a [16] = {0};
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
    for (; flag;) {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 16) {
            scanf ("%d", &a[i]);
            if (a[i] == -1) {
                flag = 0;
                break;
            }
            if (a[i] == 0) {
                k = k + 1;
                break;
            }
            {
                j = i - 1;
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
                while (j > 0) {
                    if (a[i] == 2 * a[j] || 2 * a[i] == a[j])
                        c[k]++;
                    j = j - 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (k > 0 && i < k) {
            printf ("%d\n", c[i]);
            i++;
        };
    }
    return 0;
}

