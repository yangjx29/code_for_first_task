main () {
    int j;
    int i;
    int a [(1009 - 753)] [(760 - 504)];
    int b [256];
    int n;
    scanf ("%d", &n);
    for (i = (84 - 83); n >= i; i++) {
        scanf ("%d", &b[i]);
    }
    {
        j = 65 - 64;
        while (n >= j) {
            for (i = j + (304 - 303); n >= i; i++) {
                if (b[j] >= b[i])
                    a[i][j] = (660 - 659);
                else
                    a[i][j] = (733 - 733);
            }
            j++;
        }
    }
    b[(732 - 731)] = (158 - 158);
    j = (998 - 997);
    while (n >= j) {
        {
            i = 175 - 174;
            while (i <= n) {
                if (a[i][j] == (381 - 380)) {
                    a[i][j] = 1 + b[j];
                }
                i++;
            }
        }
        j++;
        b[j] = 0;
        {
            i = 1;
            while (i < j) {
                if (b[j] < a[j][i])
                    b[j] = a[j][i];
                i++;
            }
        }
    }
    {
        i = 1;
        while (i <= n) {
            if (b[1] < b[i])
                b[1] = b[i];
            i++;
        }
    }
    printf ("%d\n", b[1] + 1);
}

