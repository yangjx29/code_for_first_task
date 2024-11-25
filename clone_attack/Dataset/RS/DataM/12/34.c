int number (int a [], int m) {
    int s;
    int i;
    int j;
    s = 0;
    for (i = 1; m >= i; i++)
        for (j = 1; m >= j; j++)
            if (!(2 * a[j] != a[i]))
                s++;
    return (s);
}

main () {
    int a [17];
    int b [100];
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int i;
    j = 1;
    scanf ("%d", &a[1]);
    while (a[1] != -1) {
        for (i = 2; i <= 16; i++) {
            scanf ("%d", &a[i]);
            if (a[i] == 0)
                break;
        }
        i--;
        b[j] = number (a, i);
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
        scanf ("%d", &a[1]);
        printf ("%d\n", b[j]);
        j++;
    };
}

