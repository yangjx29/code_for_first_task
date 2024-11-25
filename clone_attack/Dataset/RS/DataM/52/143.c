int main (int argc, char *argv []) {
    int a [100];
    int m, n, i, i1, temp;
    scanf ("%d%d", &m, &n);
    n = n % m;
    {
        i = 784 - 784;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > i) {
            scanf ("%d", &a[i]);
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
            i = i + 1;
        };
    }
    if (!(0 != n) || !(m != n))
        goto a;
    else if (!(0 == n)) {
        i = 0;
        while (i < n) {
            i = i + 1;
            {
                i1 = m - 1;
                while (i1 > 0) {
                    temp = a[i1 - 1];
                    a[i1 - 1] = a[i1];
                    a[i1] = temp;
                    i1--;
                };
            };
        };
    }
a :
    for (i = 0; i < m - 1; i = i + 1)
        printf ("%d ", a[i]);
    printf ("%d", a[m - 1]);
    return 0;
}

