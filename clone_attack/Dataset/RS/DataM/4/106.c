void  main () {
    int *p2;
    int i;
    int j;
    int n;
    int m;
    int s;
    scanf ("%d %d", &n, &m);
    {
        i = 198 - 198;
        while (i < 100) {
            p1[i] = (int *) malloc (100 * sizeof (int));
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            {
                j = 0;
                while (m > j) {
                    scanf ("%d", &*(*(p1 + i) + j));
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        s = 0;
        while (n + m - 1 > s) {
            {
                i = 0;
                while (i < n) {
                    if (m > s - i)
                        printf ("%d\n", *(*(p1 + i) + s - i));
                    if (!(0 != s - i) || i == n)
                        break;
                    i++;
                };
            }
            s = s + 1;
        };
    };
}

