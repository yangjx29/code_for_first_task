void  main () {
    int n, ClGtbHVp0 [10000] = {0}, cele, i, j, k, f = 0;
    scanf ("%d", &n);
    scanf ("%d%d", &i, &j);
    for (; !(0 == i) || !(0 == j);) {
        ClGtbHVp0[i] = -1;
        ClGtbHVp0[j]++;
        scanf ("%d%d", &i, &j);
    }
    {
        k = 0;
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
        while (k < n) {
            if (ClGtbHVp0[k] == n - 1) {
                f = 1;
                printf ("%d", k);
            }
            k = k + 1;
        };
    }
    if (f == 0)
        printf ("NOT FOUND");
}

