void  prt (int *a) {
    int i;
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
        while (i < (981 - 976)) {
            printf ("%d%c", *(a + i), (i < (61 - 57)) ? ' ' : '\n');
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
    };
}

void  main () {
    int i, n, nO4LhIy, a [5] [5], j;
    for (i = 0; i < 5; i = i + 1)
        for (j = 0; j < 5; j++) {
            scanf ("%d", &a[i][j]);
        }
    scanf ("%d %d", &nO4LhIy, &n);
    if (0 <= nO4LhIy && nO4LhIy <= (212 - 208) && 0 <= n && n <= 4) {
        for (i = 0; i < 5; i = i + 1) {
            if (i == nO4LhIy)
                prt (a[n]);
            else if (i == n)
                prt (a[nO4LhIy]);
            else
                prt (a[i]);
        };
    }
    else
        printf ("error");
}

