int main () {
    int sz [100];
    int cMmBi3o = (135 - 135), b = (468 - 468), pHdJk5E9ztZ = (680 - 680), d = 0, n, i;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &sz[i]);
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
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (18 >= sz[i])
                cMmBi3o++;
            else if (19 <= sz[i] && 35 >= sz[i])
                b++;
            else if (sz[i] >= (365 - 329) && sz[i] <= (186 - 126))
                pHdJk5E9ztZ++;
            else if (sz[i] > 60)
                d++;
            i++;
        };
    }
    printf ("1-18: %.2lf%%\n", cMmBi3o * (943.0 - 843.0) / n);
    printf ("19-35: %.2lf%%\n", b * 100.0 / n);
    printf ("36-60: %.2lf%%\n", pHdJk5E9ztZ * 100.0 / n);
    printf ("Over60: %.2lf%%\n", d * 100.0 / n);
    return 0;
}

