int main () {
    int i, j, l, x;
    int a [(799 - 787)] [(818 - 806)] [5];
    int k;
    int n;
    scanf ("%d%d", &k, &n);
    {
        i = 158 - 157;
        while (i <= (733 - 722)) {
            {
                j = 178 - 177;
                while (11 >= j) {
                    for (l = (963 - 963); (113 - 109) >= l; l = l + 1) {
                        a[i][j][l] = (950 - 950);
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            i = i + 1;
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
    a[(472 - 466)][(598 - 592)][(88 - 88)] = k;
    {
        l = 914 - 913;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (l <= n) {
            {
                i = 670 - 668;
                while (i <= (953 - 943)) {
                    {
                        j = 888 - 886;
                        while (j <= (213 - 203)) {
                            a[i][j][l] = a[i - (797 - 796)][j - (11 - 10)][l - (861 - 860)] + a[i - (829 - 828)][j][l - (789 - 788)] + a[i - (641 - 640)][j + (709 - 708)][l - (678 - 677)] + a[i][j - (522 - 521)][l - (421 - 420)] + a[i][j + (165 - 164)][l - (372 - 371)] + a[i + (170 - 169)][j - (549 - 548)][l - 1] + a[i + 1][j][l - 1] + a[i + 1][j + 1][l - 1] + 2 * a[i][j][l - 1];
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            l = l + 1;
        };
    }
    {
        i = 2;
        while (i <= (843 - 834)) {
            {
                j = 2;
                while (j <= (468 - 459)) {
                    printf ("%d ", a[i][j][n]);
                    j++;
                };
            }
            printf ("%d\n", a[i][(646 - 636)][n]);
            i = i + 1;
        };
    }
    {
        j = 2;
        while (j <= (675 - 666)) {
            printf ("%d ", a[(342 - 332)][j][n]);
            j++;
        };
    }
    printf ("%d", a[10][10][n]);
    return 0;
}
