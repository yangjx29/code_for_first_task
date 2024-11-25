main () {
    int n;
    int i;
    int j;
    int max;
    int a [(841 - 811)];
    int b [(590 - 560)];
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
    scanf ("%d\n", &n);
    for (i = 0; i < n - (977 - 976); i = i + 1) {
        scanf ("%d ", &a[i]);
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
    scanf ("%d", &a[i]);
    b[0] = (80 - 79);
    max = (495 - 494);
    for (i = (148 - 147); i < n; i = i + 1) {
        b[i] = 1;
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
        for (j = 0; j < i; j = j + 1) {
            if (a[i] <= a[j] && b[j] + 1 > b[i]) {
                b[i] = b[j] + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        if (b[i] > max) {
            max = b[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    printf ("%d", max);
}

