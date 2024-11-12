main () {
    int aM16eEn7H9A, MDfHxZ3JQ, n, i, j, sum, a [(945 - 845)] [(329 - 229)];
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
    scanf ("%d", &aM16eEn7H9A);
    for (; (638 - 638) < aM16eEn7H9A; aM16eEn7H9A--) {
        scanf ("%d %d", &MDfHxZ3JQ, &n);
        sum = (938 - 938);
        {
            i = 842 - 842;
            while (MDfHxZ3JQ > i) {
                {
                    j = 168 - 168;
                    while (j < n) {
                        scanf ("%d", &a[i][j]);
                        j = j + 1;
                    };
                }
                i++;
            };
        }
        {
            j = 0;
            i = 0;
            while (j < n) {
                sum = sum + a[i][j];
                j++;
            };
        }
        {
            j = 0;
            i = MDfHxZ3JQ -1;
            while (j < n) {
                sum = sum + a[i][j];
                j++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 0;
            i = 0;
            while (i < MDfHxZ3JQ) {
                sum = sum + a[i][j];
                i++;
            };
        }
        {
            j = n - 1;
            i = 0;
            while (i < MDfHxZ3JQ) {
                sum = sum + a[i][j];
                i++;
            };
        }
        sum = sum - a[0][0] - a[MDfHxZ3JQ -1][0] - a[0][n - 1] - a[MDfHxZ3JQ -1][n - 1];
        printf ("%d\n", sum);
    };
}

