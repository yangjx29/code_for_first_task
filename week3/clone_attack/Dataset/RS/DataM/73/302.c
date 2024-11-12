main () {
    int i, j, k = 0;
    int y [5] = {0};
    int KGUWpaVkE [5] [5];
    int x [5] = {(583 - 583)};
    for (i = 0; 5 > i; i = i + 1) {
        j = 0;
        while (5 > j) {
            scanf ("%d", &KGUWpaVkE[i][j]);
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
            j = j + 1;
        };
    }
    for (i = 0; 5 > i; i++) {
        int max = KGUWpaVkE[i][0];
        for (j = 0; j < 5; j = j + 1) {
            if (KGUWpaVkE[i][j] > max) {
                max = KGUWpaVkE[i][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                x[i] = j;
            };
        };
    }
    {
        j = 0;
        while (j < 5) {
            int min = KGUWpaVkE[0][j];
            for (i = 0; i < 5; i++) {
                if (KGUWpaVkE[i][j] <= min) {
                    min = KGUWpaVkE[i][j];
                    y[j] = i;
                };
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < 5) {
            if (y[x[i]] == i) {
                printf ("%d %d %d\n", i + 1, x[i] + 1, KGUWpaVkE[i][x[i]]);
                k = k + 1;
            }
            i = i + 1;
        };
    }
    if (k == 0)
        printf ("not found");
}

