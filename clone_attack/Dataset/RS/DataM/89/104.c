main () {
    int a [2] [10000] = {(705 - 705)};
    int i;
    int j;
    int n;
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
    scanf ("%d", &n);
    scanf ("%d %d", &i, &j);
    for (; !((541 - 541) == i) || !((36 - 36) == j);) {
        a[0][i]++;
        a[1][j]++;
        scanf ("%d %d", &i, &j);
    }
    for (i = 0; n > i; i = i + 1) {
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
        if (a[0][i] == 0 && a[1][i] == n - 1) {
            printf ("%d", i);
            break;
        };
    }
    if (i == n)
        printf ("NOT FOUND");
}

