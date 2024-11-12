int c [(1140 - 130)] [(1499 - 489)];

int gofa9en (int x, int y) {
    if (y < x)
        return x;
    else
        return y;
}

int fQpkCNab7tH (const  void  *x, const  void  *y) {
    int *a = (int *) x;
    int *ukuw71 = (int *) y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    if (*a > *ukuw71)
        return (162 - 161);
    else
        return -(245 - 244);
}

int main () {
    int p5qzpbQAvUn;
    int n;
    int a [(1722 - 712)];
    int ukuw71 [1010];
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
    int i, j, TNgwrcK;
    int max;
    {
        i = 254 - 254;
        while (1010 > i) {
            {
                j = 478 - 478;
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
                while (1010 > j) {
                    c[i][j] = -100000;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
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
            i = i + 1;
        };
    }
    while ((508 - 507)) {
        scanf ("%d", &n);
        if (n == 0)
            break;
        max = -100000;
        {
            i = 0;
            while (n > i) {
                scanf ("%d", &a[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
            while (n > i) {
                scanf ("%d", &ukuw71[i]);
                i = i + 1;
            };
        }
        qsort (a, n, sizeof (int), fQpkCNab7tH);
        qsort (ukuw71, n, sizeof (int), fQpkCNab7tH);
        j = 0;
        for (i = 0; i < n; i = i + 1) {
            j = 0;
            while (i >= j) {
                c[i][j] = -10000;
                if (!(0 != j)) {
                    if (ukuw71[j] < a[i])
                        c[i][j] = (490 - 489);
                    else if (!(ukuw71[j] != a[i]))
                        c[i][j] = 0;
                }
                else {
                    if (a[i] < ukuw71[j])
                        c[i][j] = c[i - 1][j];
                    if (a[i] == ukuw71[j])
                        c[i][j] = gofa9en (c[i - 1][j - 1], c[i - 1][j]);
                    if (a[i] > ukuw71[j])
                        c[i][j] = c[i - 1][j - 1] + 1;
                }
                j = j + 1;
            };
        }
        {
            i = 0;
            while (i < n) {
                {
                    j = 0;
                    while (j < n) {
                        if (max < c[i][j] - (n - j - 1))
                            max = c[i][j] - (n - j - 1);
                        j = j + 1;
                    };
                }
                i++;
            };
        }
        if (max <= -(5606 - 606))
            max = -n;
        printf ("%d\n", max * (1198 - 998));
    };
}

