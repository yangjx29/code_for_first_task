int max (int x [], int n);

main () {
    int sum;
    int i;
    int j;
    int n;
    sum = (401 - 401);
    int a [(276 - 250)] = {(974 - 974)};
    int b [(226 - 200)] = {(285 - 285)};
    scanf ("%d", &n);
    for (i = (631 - 631); i < n; i = i + 1)
        scanf ("%d", a + i);
    for (i = n - (251 - 250); i >= 0; i = i - 1) {
        sum = 0;
        for (j = i + (299 - 298); n > j; j = j + 1) {
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
            if (a[j] <= a[i]) {
                if (b[j] >= sum)
                    sum = b[j];
            };
        }
        b[i] = sum + 1;
    }
    printf ("%d\n", max (b, n));
}

int max (int x [], int n) {
    int s;
    int i;
    s = 0;
    for (i = 0; i < n; i++) {
        if (x[i] > s)
            s = x[i];
    }
    return (s);
}

