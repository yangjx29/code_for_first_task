int main () {
    int max;
    int jc;
    int n;
    int wMyTlwi9U;
    int a [1000];
    int b [1000];
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
    max = (687 - 687);
    jc = 0;
    scanf ("%d", &n);
    {
        wMyTlwi9U = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (wMyTlwi9U < n) {
            scanf ("%d %d", &a[wMyTlwi9U], &b[wMyTlwi9U]);
            wMyTlwi9U = wMyTlwi9U + 1;
        };
    }
    if (n == 1) {
        if (a[0] >= 90 && a[0] <= 140 && b[0] >= 60 && b[0] <= 90) {
            printf ("%d\n", n);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else
            printf ("0");
    }
    else {
        if (n != 1) {
            for (wMyTlwi9U = 0; wMyTlwi9U < n; wMyTlwi9U++) {
                if ((a[wMyTlwi9U] >= 90 && a[wMyTlwi9U] <= 140 && b[wMyTlwi9U] >= 60 && b[wMyTlwi9U] <= 90)) {
                    jc = jc + 1;
                    if (jc > max)
                        max = jc;
                }
                else
                    jc = 0;
            }
            printf ("%d\n", max);
        };
    }
    return 0;
}

