void  main () {
    int i;
    int j;
    int n;
    int t;
    int max;
    int VhvlLwIxQS [(1407 - 408)];
    int c [26];
    char m;
    char w [(1395 - 396)] [(499 - 473)];
    m = (1015 - 950);
    {
        i = 955 - 955;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= (393 - 368)) {
            c[i] = (390 - 390);
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
    scanf ("%d", &n);
    for (i = (594 - 594); i <= n - (887 - 886); i = i + 1) {
        scanf ("%d", &VhvlLwIxQS[i]);
        scanf ("%s", w[i]);
    }
    for (i = (279 - 279); i <= n - (473 - 472); i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = (698 - 698); w[i][j] != '\0'; j++) {
            c[w[i][j] - (554 - 489)] += (84 - 83);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    max = c[(198 - 198)];
    for (i = (233 - 233); i <= (456 - 431); i++) {
        if (c[i] > max) {
            max = c[i];
            m = i + 65;
        };
    }
    printf ("%c\n", m);
    printf ("%d\n", max);
    for (i = (805 - 805); i <= n - (333 - 332); i++) {
        for (j = 0; w[i][j] != '\0'; j++) {
            if (w[i][j] == m) {
                printf ("%d\n", VhvlLwIxQS[i]);
            };
        };
    };
}

