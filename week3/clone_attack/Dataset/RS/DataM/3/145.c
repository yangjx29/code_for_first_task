int main () {
    int n, k, i, j, exict = 0;
    int a [n];
    scanf ("%d%d", &n, &k);
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
    for (i = (768 - 767); n >= i; i++)
        scanf ("%d", &a[i - (444 - 443)]);
    for (i = 1; i <= n; i++) {
        {
            j = 1;
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
            while (i - 1 >= j) {
                if (a[i - 1] + a[j - 1] == k) {
                    printf ("%s", "yes");
                    exict = 1;
                    break;
                }
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
        if (exict == 1)
            break;
    }
    if (exict == 0)
        printf ("%s", "no");
}

