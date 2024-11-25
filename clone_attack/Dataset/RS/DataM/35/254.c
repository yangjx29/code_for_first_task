int main () {
    int Aq43CuY;
    Aq43CuY = 0;
    int kr5I2wpgN4;
    int j;
    int m;
    int wecsuF5VNfy;
    int a [8] [8];
    int p;
    int BZ9rTz2qQHp;
    p = 0;
    scanf ("%d,%d", &m, &wecsuF5VNfy);
    for (kr5I2wpgN4 = 0; kr5I2wpgN4 < m; kr5I2wpgN4++) {
        for (j = 0; j < wecsuF5VNfy; j++) {
            scanf ("%d", &a[kr5I2wpgN4][j]);
        };
    }
    for (kr5I2wpgN4 = 0; kr5I2wpgN4 < m; kr5I2wpgN4++) {
        for (j = 0; j < wecsuF5VNfy; j++) {
            if (a[kr5I2wpgN4][j] > a[kr5I2wpgN4][p]) {
                p = j;
            };
        }
        {
            BZ9rTz2qQHp = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (BZ9rTz2qQHp < m) {
                if (a[kr5I2wpgN4][p] <= a[BZ9rTz2qQHp][p]) {
                    Aq43CuY++;
                }
                BZ9rTz2qQHp = BZ9rTz2qQHp +1;
            };
        }
        if (Aq43CuY == m) {
            break;
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
        }
        Aq43CuY = 0;
    }
    if (Aq43CuY == m) {
        printf ("%d+%d", kr5I2wpgN4, p);
    }
    if (Aq43CuY != m) {
        printf ("No");
    }
    return 0;
}

