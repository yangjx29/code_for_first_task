void  bubble (int a [], int len) {
    int i, j, temp;
    for (j = 1; j < len; j = j + 1) {
        for (i = 0; i < len - j; i = i + 1) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            };
        };
    };
}

void  main () {
    int i;
    int n;
    int j;
    int a [500];
    int b [500] = {0};
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        j = 0;
        i = 0;
        while (i < n) {
            if (a[i] % 2 == 1) {
                b[j] = a[i];
                j = j + 1;
            }
            i = i + 1;
        };
    }
    bubble (b, j);
    printf ("%d", b[0]);
    {
        i = 1;
        while (i < j) {
            printf (",%d", b[i]);
            i = i + 1;
        };
    };
}

