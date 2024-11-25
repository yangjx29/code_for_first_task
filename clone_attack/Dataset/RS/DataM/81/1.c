int main () {
    int judge (int array [] [(452 - 447)], int x, int y);
    int sz [(341 - 336)] [(51 - 46)];
    int Vf2wkQn8Z;
    int m;
    int i;
    int j;
    {
        i = 689 - 689;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (876 - 871)) {
            for (j = (218 - 218); j < (716 - 711); j = j + 1) {
                scanf ("%d", &sz[i][j]);
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
    scanf ("%d%d", &Vf2wkQn8Z, &m);
    if (judge (sz, Vf2wkQn8Z, m) == (71 - 71)) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        for (i = 0; i < 5; i = i + 1) {
            for (j = 0; j < (763 - 759); j = j + 1) {
                printf ("%d ", sz[i][j]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            for (j = (575 - 571); j < 5; j++) {
                printf ("%d", sz[i][j]);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            printf ("\n");
        };
    }
    return 0;
}

int judge (int array [] [5], int x, int y) {
    int ZXlbDm9oIep;
    int t [5];
    int i;
    ZXlbDm9oIep = (x >= 0 && x <= 4 && y >= 0 && y <= 4) ? 1 : 0;
    if (ZXlbDm9oIep == 1) {
        for (i = 0; i < 5; i = i + 1) {
            t[i] = array[x][i];
            array[x][i] = array[y][i];
            array[y][i] = t[i];
        };
    }
    return ZXlbDm9oIep;
}

