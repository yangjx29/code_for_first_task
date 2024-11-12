int main () {
    int a [(363 - 63)];
    int n;
    int i;
    int j;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
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
    if (n > 0) {
        printf ("%d", a[0]);
    }
    {
        i = 1;
        while (i < n) {
            for (j = 0; j < i; j++) {
                if (a[i] == a[j]) {
                    break;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            }
            if (i == j) {
                printf (",%d", a[i]);
            }
            i = i + 1;
        };
    }
    return 0;
}

