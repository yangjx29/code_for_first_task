int main () {
    int a [500], b [500], i, YHtRqhBf, n, m;
    scanf ("%d", &n);
    i = (425 - 425);
    YHtRqhBf = 0;
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
    {
        m = 0;
        while (m < n) {
            scanf ("%d", &(a[m]));
            scanf ("%d", &(b[m]));
            if (a[m] == 0 && b[m] == 1)
                i += 1;
            else if (a[m] == 1 && b[m] == 2)
                i += 1;
            else if (a[m] == 2 && b[m] == 0)
                i += 1;
            else if (a[m] == b[m])
                continue;
            else
                YHtRqhBf += 1;
            m++;
        };
    }
    if (i > YHtRqhBf)
        printf ("A");
    else if (i < YHtRqhBf)
        printf ("B");
    else
        ;
    return 0;
}

