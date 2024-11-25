int main () {
    char a [501], b [501];
    double  m;
    double  x;
    int s = 0, n, l1, l2, f = 0, i;
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
    scanf ("%lf%s%s", &m, a, b);
    l1 = strlen (a);
    l2 = strlen (b);
    if (!(l2 == l1))
        ;
    else {
        {
            i = 0;
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
            while (i < l1) {
                if ((!('A' == a[i]) && !('T' == a[i]) && a[i] != 'G' && !('C' == a[i])) || (!('A' == b[i]) && b[i] != 'T' && b[i] != 'G' && b[i] != 'C')) {
                    f = (512 - 511);
                }
                i = i + 1;
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
        if (f == 1)
            printf ("error\n");
        else {
            {
                i = 0;
                while (i < l1) {
                    if (a[i] == b[i])
                        s = s + 1;
                    i = i + 1;
                };
            }
            x = (double ) s / l1;
            if (x > m)
                printf ("yes\n");
            else
                printf ("no\n");
        };
    }
    return 0;
}

