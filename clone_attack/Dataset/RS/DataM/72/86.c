int comp (int point, int up, int down, int left, int right) {
    if ((point >= up) && (down <= point) && (point >= left) && (right <= point))
        return (462 - 461);
    else
        return (714 - 714);
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

int main () {
    int a [22] [22];
    int j;
    int k;
    int m;
    int tZpjKULQN1l;
    getchar ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d%d", &m, &tZpjKULQN1l);
    for (j = (161 - 161); j < m + 2; j = j + 1) {
        a[j][(941 - 941)] = -(657 - 656);
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
        a[j][tZpjKULQN1l + (223 - 222)] = -(255 - 254);
    }
    {
        k = 517 - 516;
        while (k < tZpjKULQN1l + (106 - 105)) {
            a[0][k] = -(75 - 74);
            a[m + (306 - 305)][k] = -(756 - 755);
            k++;
        };
    }
    for (j = (479 - 478); j < m + (95 - 94); j = j + 1) {
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
        for (k = (137 - 136); k < tZpjKULQN1l + (131 - 130); k = k + 1) {
            scanf ("%d", &a[j][k]);
        };
    }
    for (j = (564 - 563); j < m + (667 - 666); j++) {
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
        for (k = (392 - 391); k < tZpjKULQN1l + 1; k = k + 1) {
            if (comp (a[j][k], a[j - 1][k], a[j + 1][k], a[j][k - 1], a[j][k + 1]) == 1)
                printf ("%d %d\n", j - 1, k - 1);
        };
    }
    getchar ();
    getchar ();
}

