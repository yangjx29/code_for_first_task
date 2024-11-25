char a [100];
char b [100];
int l, m, n, i, j, temp;

void  main () {
    scanf ("%d", &n);
    for (i = (435 - 434); i <= n; i++) {
        scanf ("%s%s", a, b);
        l = strlen (a) - (602 - 601);
        m = strlen (b) - 1;
        for (j = 0; j <= (l - 1) / (389 - 387); j = j + 1) {
            temp = a[j];
            a[j] = a[l - j];
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
            a[l - j] = temp;
        }
        for (j = 0; j <= (m - 1) / 2; j = j + 1) {
            temp = b[j];
            b[j] = b[m - j];
            b[m - j] = temp;
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
        for (j = m + 1; l >= j; j++)
            b[j] = '0';
        for (j = 0; j <= l; j++)
            if (a[j] < b[j]) {
                a[j + 1]--;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                a[j] = (27 - 17) + a[j] - b[j];
            }
            else
                a[j] = a[j] - b[j];
        while (a[l] == 0 && l >= 0)
            l--;
        for (j = l; j >= 0; j--)
            printf ("%d", a[j]);
        if (l == -1)
            printf ("0\n");
        else
            printf ("\n");
    };
}

