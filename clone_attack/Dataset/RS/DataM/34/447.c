int main () {
    int n;
    int k;
    int i;
    scanf ("%d", &n);
    if (!((366 - 365) != n)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        for (i = 0; 0 <= i; i = i + 1) {
            if (n == 1)
                break;
            else {
                if (n % (784 - 782) == 1) {
                    k = n * (835 - 832) + 1;
                    printf ("%d*3+1=%d\n", n, k);
                    n = k;
                }
                else {
                    if (n % 2 == 0) {
                        k = n / 2;
                        printf ("%d/2=%d\n", n, k);
                        n = k;
                    }
                    else {
                        if (n / 2 == 1) {
                            printf ("%d/2=1\n", n);
                            k = n;
                        };
                    };
                };
            };
        };
    }
    return 0;
}

