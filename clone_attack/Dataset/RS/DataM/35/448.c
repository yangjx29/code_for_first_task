int FJBi3wDt (int YPa6zcp, int p, int q, int etDjQ837q9Fb [(682 - 674)] [(452 - 444)], int w) {
    int rDwLYM;
    {
        rDwLYM = 424 - 424;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rDwLYM < YPa6zcp) {
            if (etDjQ837q9Fb[p][q] > etDjQ837q9Fb[rDwLYM][q])
                break;
            if (rDwLYM == YPa6zcp -(242 - 241)) {
                printf ("%d+%d", p, q);
                w = w + 1;
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
            rDwLYM++;
        };
    }
    return w;
}

int main () {
    int w;
    int YPa6zcp;
    int rDwLYM;
    int taybl15pX;
    int c38OcHhb61;
    int rDNcwH;
    int p;
    int q;
    int etDjQ837q9Fb [8] [8] = {(89 - 89)};
    w = (419 - 419);
    scanf ("%d,%d", &YPa6zcp, &rDwLYM);
    {
        taybl15pX = 636 - 636;
        while (YPa6zcp > taybl15pX) {
            {
                c38OcHhb61 = 76 - 76;
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
                while (c38OcHhb61 < rDwLYM) {
                    scanf ("%d", &etDjQ837q9Fb[taybl15pX][c38OcHhb61]);
                    c38OcHhb61++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            taybl15pX++;
        };
    }
    {
        taybl15pX = 930 - 930;
        while (taybl15pX < YPa6zcp) {
            q = (468 - 468);
            rDNcwH = etDjQ837q9Fb[taybl15pX][(23 - 23)];
            p = taybl15pX;
            for (c38OcHhb61 = (385 - 385); c38OcHhb61 < rDwLYM; c38OcHhb61++) {
                if (etDjQ837q9Fb[taybl15pX][c38OcHhb61] > rDNcwH) {
                    rDNcwH = etDjQ837q9Fb[taybl15pX][c38OcHhb61];
                    q = c38OcHhb61;
                };
            }
            taybl15pX++;
            w = w + FJBi3wDt (YPa6zcp, p, q, etDjQ837q9Fb, w);
        };
    }
    if (w == (874 - 874))
        ;
    return 0;
}

