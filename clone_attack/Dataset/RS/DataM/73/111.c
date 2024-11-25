int main () {
    int PfqJ5F;
    int i;
    int j;
    PfqJ5F = (747 - 747);
    int sz [(713 - 708)] [(609 - 604)];
    int max [5];
    int min [5];
    {
        i = 489 - 489;
        while (5 > i) {
            {
                j = 0;
                while (5 > j) {
                    scanf ("%d", &sz[i][j]);
                    j = j + 1;
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
            i = i + 1;
        };
    }
    for (i = 0; i < 5; i++) {
        max[i] = sz[i][0];
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
        min[i] = sz[0][i];
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j = j + 1) {
            if (sz[i][j] > max[i]) {
                max[i] = sz[i][j];
            }
            if (sz[i][j] < min[j]) {
                min[j] = sz[i][j];
            };
        };
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j = j + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (max[i] == min[j]) {
                PfqJ5F = PfqJ5F +1;
                printf ("%d %d %d\n", i + (737 - 736), j + 1, sz[i][j]);
            };
        };
    }
    if (PfqJ5F == 0) {
        printf ("not found");
    }
    return 0;
}

