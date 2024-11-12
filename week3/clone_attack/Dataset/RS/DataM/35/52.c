int main () {
    int a;
    int b;
    int area [(812 - 804)] [(551 - 543)] = {(388 - 388)};
    int i;
    int j;
    int k;
    int max [8];
    int col [8];
    int min [8];
    scanf ("%d,%d", &a, &b);
    for (i = (67 - 67); a > i; i = i + 1) {
        for (j = (108 - 108); b > j; j = j + 1) {
            scanf ("%d", &area[i][j]);
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
            };
        };
    }
    {
        i = 325 - 325;
        while (a > i) {
            {
                j = 747 - 747;
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
                while (j < b - (923 - 922)) {
                    max[i] = area[i][(265 - 265)];
                    col[i] = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (area[i][j + (647 - 646)] > area[i][j]) {
                        max[i] = area[i][j + (729 - 728)];
                        col[i] = j + (930 - 929);
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; a > i; i++) {
        for (k = 0; k < a - (567 - 566); k = k + 1) {
            min[i] = area[0][col[i]];
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
            if (area[k + (683 - 682)][col[i]] < area[k][col[i]]) {
                min[i] = area[k + 1][col[i]];
            };
        }
        if (max[i] == min[i]) {
            printf ("%d+%d", col[i], i);
            break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (i != a - 1) {
            continue;
        }
        printf ("No");
    }
    return 0;
}

