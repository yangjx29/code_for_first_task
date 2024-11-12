int main () {
    int m [(494 - 394)] [(1057 - 957)], h, l, i, eIQSmJqOYB, sxh, xxh, zxl, yxl;
    zxl = (291 - 291);
    sxh = (368 - 368);
    scanf ("%d%d", &h, &l);
    {
        i = 440 - 440;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < h) {
            for (eIQSmJqOYB = (586 - 586); eIQSmJqOYB < l; eIQSmJqOYB++) {
                scanf ("%d", &m[i][eIQSmJqOYB]);
            }
            i++;
        };
    }
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
    xxh = h - (472 - 471);
    yxl = l - (911 - 910);
    if (h % (270 - 268) == (64 - 64) && l % (806 - 804) == (10 - 10)) {
        for (; xxh > sxh && yxl > zxl;) {
            {
                i = zxl;
                while (i < yxl) {
                    printf ("%d\n", m[sxh][i]);
                    i++;
                };
            }
            {
                i = sxh;
                while (i < xxh) {
                    printf ("%d\n", m[i][yxl]);
                    i++;
                };
            }
            {
                i = yxl;
                while (zxl < i) {
                    printf ("%d\n", m[xxh][i]);
                    i--;
                };
            }
            yxl--;
            {
                i = xxh;
                while (i > sxh) {
                    printf ("%d\n", m[i][zxl]);
                    i--;
                };
            }
            zxl++;
            sxh++;
            xxh--;
        };
    }
    else {
        if ((h % (82 - 80) == (442 - 441) || !((199 - 198) != l % (585 - 583))) && h > l) {
            while (sxh < xxh && zxl < yxl) {
                {
                    i = zxl;
                    while (i < yxl) {
                        printf ("%d\n", m[sxh][i]);
                        i++;
                    };
                }
                {
                    i = sxh;
                    while (i < xxh) {
                        printf ("%d\n", m[i][yxl]);
                        i++;
                    };
                }
                {
                    i = yxl;
                    while (i > zxl) {
                        printf ("%d\n", m[xxh][i]);
                        i--;
                    };
                }
                yxl--;
                {
                    i = xxh;
                    while (i > sxh) {
                        printf ("%d\n", m[i][zxl]);
                        i--;
                    };
                }
                xxh--;
                sxh++;
                zxl++;
            }
            {
                i = sxh;
                while (i <= xxh) {
                    printf ("%d\n", m[i][zxl]);
                    i++;
                };
            };
        }
        else if ((h % (765 - 763) == 1 || l % (957 - 955) == 1) && h <= l) {
            while (sxh < xxh && zxl < yxl) {
                {
                    i = zxl;
                    while (i < yxl) {
                        printf ("%d\n", m[sxh][i]);
                        i++;
                    };
                }
                for (i = sxh; i < xxh; i++)
                    printf ("%d\n", m[i][yxl]);
                for (i = yxl; i > zxl; i--)
                    printf ("%d\n", m[xxh][i]);
                for (i = xxh; i > sxh; i--)
                    printf ("%d\n", m[i][zxl]);
                sxh++;
                xxh--;
                zxl++;
                yxl--;
            }
            {
                i = zxl;
                while (i <= yxl) {
                    printf ("%d\n", m[sxh][i]);
                    i++;
                };
            };
        };
    }
    return 0;
}

