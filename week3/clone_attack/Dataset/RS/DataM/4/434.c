int main () {
    int i, n0UzbX, col, qKJ3Qt1fV, array [100] [100];
    int cxx = 0, csx, rxx = 0, rsx;
    int t;
    scanf ("%d %d", &qKJ3Qt1fV, &col);
    {
        i = 0;
        while (i < qKJ3Qt1fV) {
            {
                n0UzbX = 0;
                while (col > n0UzbX) {
                    scanf ("%d", &array[i][n0UzbX]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    n0UzbX = n0UzbX + 1;
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
    scanf ("%d", &t);
    for (i = 0; col > i; i = i + 1) {
        rxx = 0;
        csx = i;
        while (csx >= 0 && csx < col && rxx >= 0 && rxx < qKJ3Qt1fV) {
            printf ("%d\n", array[rxx][csx]);
            rxx++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            csx = csx - 1;
        };
    }
    {
        n0UzbX = 1;
        while (n0UzbX < qKJ3Qt1fV) {
            rxx = n0UzbX;
            n0UzbX++;
            csx = col - 1;
            while (csx >= 0 && csx < col && rxx >= 0 && rxx < qKJ3Qt1fV) {
                printf ("%d\n", array[rxx][csx]);
                csx = csx - 1;
                rxx++;
            };
        };
    }
    return 0;
}

