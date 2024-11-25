int main () {
    unsigned  int n;
    int k;
    int j;
    int a [N];
    int c [N];
    int kIHWz4Dst1;
    int temp;
    k = 0;
    float sum;
    float d;
    float ave;
    float vInvGohOA0E [N];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    sum = 0;
    d = 0;
    scanf ("%d", &n);
    {
        kIHWz4Dst1 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kIHWz4Dst1 < n) {
            scanf ("%d", &a[kIHWz4Dst1]);
            sum = sum + a[kIHWz4Dst1];
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
            }
            kIHWz4Dst1 = kIHWz4Dst1 + 1;
        };
    }
    {
        kIHWz4Dst1 = 0;
        while (kIHWz4Dst1 < n - 1) {
            {
                j = 0;
                while (j < n - kIHWz4Dst1 - 1) {
                    if (a[j + 1] < a[j]) {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            kIHWz4Dst1 = kIHWz4Dst1 + 1;
        };
    }
    ave = sum / n;
    for (kIHWz4Dst1 = 0; kIHWz4Dst1 < n; kIHWz4Dst1 = kIHWz4Dst1 + 1) {
        vInvGohOA0E[kIHWz4Dst1] = fabs (a[kIHWz4Dst1] - ave);
        if (d < vInvGohOA0E[kIHWz4Dst1])
            d = vInvGohOA0E[kIHWz4Dst1];
    }
    {
        kIHWz4Dst1 = 0;
        while (kIHWz4Dst1 < n) {
            if (vInvGohOA0E[kIHWz4Dst1] == d) {
                c[k] = a[kIHWz4Dst1];
                k = k + 1;
            }
            kIHWz4Dst1 = kIHWz4Dst1 + 1;
        };
    }
    printf ("%d", c[0]);
    if (k > 1) {
        kIHWz4Dst1 = 1;
        while (kIHWz4Dst1 < k) {
            printf (",%d", c[kIHWz4Dst1]);
            kIHWz4Dst1++;
        };
    }
    return 0;
}

