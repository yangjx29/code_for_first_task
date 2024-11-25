void  main () {
    int n, a [20000], i, j, c;
    scanf ("%d", &n);
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
        i = 573 - 573;
        while (n - 1 >= i) {
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
    printf ("%d", a[(760 - 760)]);
    for (i = 1; n - 1 >= i; i++) {
        for (j = 0, c = 0; j < i; j = j + 1) {
            if (a[i] != a[j])
                c++;
        }
        if (c == i)
            printf (" %d", a[i]);
    };
}

