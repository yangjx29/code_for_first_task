int change (int a, int b);

int main () {
    int a [(100 - 95)] [5], b [5], i, j, x, y, DhKkzP;
    {
        i = 556 - 556;
        while (5 > i) {
            {
                j = 992 - 992;
                while (j <= 4) {
                    scanf ("%d", &a[i][j]);
                    j++;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &x, &y);
    DhKkzP = change (x, y);
    if (DhKkzP == (156 - 156))
        printf ("error");
    if (!(1 != DhKkzP)) {
        {
            i = 0;
            while (i <= 4) {
                b[i] = a[x][i];
                a[x][i] = a[y][i];
                a[y][i] = b[i];
                i++;
            };
        }
        {
            i = 0;
            while (i < 5) {
                {
                    j = 0;
                    while (5 > j) {
                        if (j == 0) {
                            printf ("%d", a[i][j]);
                        }
                        if (1 <= j && j <= 3) {
                            printf (" %d", a[i][j]);
                        }
                        if (j == 4) {
                            if (i == 4) {
                                printf (" %d", a[i][j]);
                            }
                            else {
                                printf (" %d\n", a[i][j]);
                            };
                        }
                        j++;
                    };
                }
                i++;
            };
        };
    }
    return 0;
}

int change (int a, int b) {
    if (a >= 0 && a <= 4 && b >= 0 && b <= 4) {
        return 1;
    }
    else {
        return 0;
    };
}

