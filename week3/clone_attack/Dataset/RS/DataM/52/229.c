int main (int argc, char *aRE9GC []) {
    int n, m, i;
    int a [(1041 - 941)];
    int *x;
    scanf ("%d %d", &n, &m);
    {
        i = 735 - 734;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
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
    x = &a[n];
    for (i = 1; i <= n; i = i + 1) {
        x = x + 1;
        *x = a[i];
    }
    printf ("%d", a[n - m + 1]);
    for (i = n - m + 2; i <= 2 * n - m; i = i + 1) {
        printf (" %d", a[i]);
    }
    return 0;
}

