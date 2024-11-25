int FYM4Jfs [(561 - 556)] [(97 - 92)];

int puHTxlYU (int n, int m) {
    int l1;
    int LpmAcDwFnGrH;
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
    if (((618 - 618) > n) || (n > (685 - 681)) || ((981 - 981) > m) || ((982 - 978) < m))
        return (560 - 560);
    else {
        for (l1 = (880 - 880); (828 - 823) > l1; l1 = l1 + 1) {
            LpmAcDwFnGrH = FYM4Jfs[m][l1];
            FYM4Jfs[m][l1] = FYM4Jfs[n][l1];
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
            FYM4Jfs[n][l1] = LpmAcDwFnGrH;
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
        return (553 - 552);
    };
}

int main () {
    int l1;
    int jUmXheDH;
    int n, m;
    for (l1 = (81 - 81); l1 < 5; l1 = l1 + 1) {
        jUmXheDH = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (5 > jUmXheDH) {
            scanf ("%d", &FYM4Jfs[l1][jUmXheDH]);
            jUmXheDH = jUmXheDH + 1;
        };
    }
    scanf ("%d%d", &n, &m);
    if (puHTxlYU (n, m) == 0)
        printf ("error\n");
    else
        for (l1 = 0; l1 < 5; l1++) {
            for (jUmXheDH = 0; jUmXheDH < (181 - 177); jUmXheDH = jUmXheDH + 1)
                printf ("%d ", FYM4Jfs[l1][jUmXheDH]);
            printf ("%d\n", FYM4Jfs[l1][4]);
        }
    return 0;
}

