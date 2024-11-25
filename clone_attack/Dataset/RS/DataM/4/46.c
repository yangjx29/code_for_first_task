void  main () {
    int i;
    int j;
    int k;
    int UjELz2;
    int m;
    scanf ("%d %d", &UjELz2, &m);
    a = (int (*) [120]) malloc ((379 - 179) * sizeof (int));
    {
        i = 0;
        while (i < UjELz2) {
            for (j = 0; j < m; j = j + 1) {
                scanf ("%d", *(a + i) + j);
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
            i = i + 1;
        };
    }
    for (k = 0; UjELz2 +m - (96 - 94) >= k; k = k + 1) {
        for (i = 0; (i <= k) && (i < UjELz2); i = i + 1) {
            j = k - i;
            if (j < m)
                printf ("%d\n", *(*(a + i) + j));
        };
    };
}

