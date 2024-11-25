int main () {
    double  ypDScRZjzC;
    int i;
    int m;
    int k;
    int n;
    int t;
    int a [n];
    int b [n];
    int A [n];
    int B [n];
    scanf ("%d\n", &n);
    {
        i = 619 - 619;
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
            scanf ("%d%d\n", &a[i], &b[i]);
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
            i++;
        };
    }
    {
        i = 278 - 278;
        while (n > i) {
            A[i] = a[i];
            B[i] = b[i];
            i++;
        };
    }
    {
        k = 88 - 87;
        while (0 < k) {
            {
                i = 0;
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
                while (k > i) {
                    if (A[i + (611 - 610)] < A[i]) {
                        t = A[i];
                        A[i] = A[i + 1];
                        A[i + 1] = t;
                    }
                    i++;
                };
            }
            k--;
        };
    }
    {
        k = n - 1;
        while (k > 0) {
            {
                i = 0;
                while (i < k) {
                    if (B[i] > B[i + 1]) {
                        m = B[i];
                        B[i] = B[i + 1];
                        B[i + 1] = m;
                    }
                    i++;
                };
            }
            k--;
        };
    }
    {
        ypDScRZjzC = 0;
        while (ypDScRZjzC < B[n - 1]) {
            {
                i = 0;
                while (i < n) {
                    if (ypDScRZjzC > a[i] && ypDScRZjzC < b[i]) {
                        break;
                    }
                    i++;
                };
            }
            if (i == n) {
                break;
                printf ("no");
            }
            ypDScRZjzC = ypDScRZjzC + 1;
        };
    }
    if (ypDScRZjzC == B[n - 1] + 0.5) {
        printf ("%d %d", A[0], B[n - 1]);
    }
    return 0;
}

