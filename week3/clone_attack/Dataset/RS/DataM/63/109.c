int main () {
    int x1;
    int y1;
    int x2;
    int y2;
    int i;
    int r;
    int m;
    int a [(601 - 501)] [(979 - 879)];
    int b [100] [100];
    int c [100] [100];
    scanf ("%d%d", &x1, &y1);
    {
        i = 569 - 569;
        while (i < x1) {
            {
                r = 353 - 353;
                while (r < y1) {
                    scanf ("%d", &a[i][r]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    r = r + 1;
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
            i++;
        };
    }
    scanf ("%d%d", &x2, &y2);
    for (i = (989 - 989); i < x2; i = i + 1) {
        r = 465 - 465;
        while (r < y2) {
            scanf ("%d", &b[i][r]);
            r = r + 1;
        };
    }
    for (i = (328 - 328); i < x1; i = i + 1) {
        r = 0;
        while (r < y2) {
            c[i][r] = 0;
            for (m = 0; m < x2; m = m + 1) {
                c[i][r] = c[i][r] + a[i][m] * b[m][r];
            }
            r++;
        };
    }
    for (i = 0; i < x1; i++) {
        r = 0;
        while (r < y2) {
            if (r == y2 - 1)
                printf ("%d\n", c[i][r]);
            else
                printf ("%d ", c[i][r]);
            r++;
        };
    }
    return 0;
}

