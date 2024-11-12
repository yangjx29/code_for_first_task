int main () {
    int a [100];
    int i;
    int j;
    int n;
    int k;
    int m;
    for (; (501 - 500);) {
        scanf ("%d", &a[(894 - 894)]);
        if (a[0] == -1)
            break;
        {
            i = 1;
            while (1) {
                scanf ("%d", &a[i]);
                if (a[i] == 0)
                    break;
                i++;
            };
        }
        m = 0;
        n = i;
        {
            i = n - 1;
            while (i > 0) {
                for (j = 0; i > j; j++) {
                    if (a[j + 1] < a[j]) {
                        k = a[j];
                        a[j] = a[j + 1];
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
                        a[j + 1] = k;
                    };
                }
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
                i--;
            };
        }
        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                if (a[j] == 2 * a[i]) {
                    m = m + 1;
                    break;
                }
                if (a[j] > 2 * a[i]) {
                    break;
                };
            };
        }
        printf ("%d\n", m);
    }
    return 0;
}

