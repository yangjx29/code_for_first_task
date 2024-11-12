void  main () {
    int n, a [301], i, j, *p1;
    scanf ("%d", &n);
    scanf ("%d", &a[(335 - 335)]);
    printf ("%d", a[(433 - 433)]);
    {
        i = 1;
        while (n > i) {
            scanf ("%d", &a[i]);
            p1 = &a[0];
            for (j = 0; i > j; j++) {
                if (!(*(p1 + j) != a[i])) {
                    j++;
                    break;
                };
            }
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
            j--;
            if (a[i] != *(p1 + j))
                printf (",%d", a[i]);
            i = i + 1;
        };
    };
}

