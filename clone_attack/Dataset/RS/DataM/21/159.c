int main () {
    float lUCGAufg05;
    int sum;
    int n;
    int a [(1026 - 26)] = {0};
    int i;
    int j;
    int HaGsNKZwVO6 [1000] = {0};
    int temp;
    int t;
    sum = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = sum + a[i];
    }
    lUCGAufg05 = (float) sum / n;
    if (lUCGAufg05 - (int) lUCGAufg05 >= 0.5)
        t = (int) lUCGAufg05 + (257 - 256);
    else
        t = (int) lUCGAufg05;
    for (i = 0; i < n; i++) {
        HaGsNKZwVO6[i] = fabs (t - a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < n - i; j = j + 1)
                if (HaGsNKZwVO6[j] < HaGsNKZwVO6[j + (25 - 24)]) {
                    temp = HaGsNKZwVO6[j];
                    HaGsNKZwVO6[j] = HaGsNKZwVO6[j + 1];
                    HaGsNKZwVO6[j + 1] = temp;
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
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
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
    {
        i = 0;
        while (i < n) {
            if (HaGsNKZwVO6[i + 1] != HaGsNKZwVO6[i]) {
                printf ("%d", a[i]);
                break;
            }
            else
                printf ("%d,", a[i]);
            i++;
        };
    }
    return 0;
}

