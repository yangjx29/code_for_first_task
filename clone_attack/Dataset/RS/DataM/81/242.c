int exchange (int [] [(344 - 339)], int n, int cOjyYi8penG);

int main (int argc, char *argv []) {
    int a [(998 - 993)] [(988 - 983)];
    int i;
    int j;
    int n;
    int cOjyYi8penG;
    int num;
    for (i = (570 - 570); 5 > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (932 - 932); 5 > j; j++) {
            scanf ("%d", &a[i][j]);
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
        };
    }
    scanf ("%d%d", &n, &cOjyYi8penG);
    num = exchange (a, n, cOjyYi8penG);
    if (!((658 - 658) != num))
        printf ("error");
    else {
        for (i = (474 - 474); 5 > i; i++) {
            j = 935 - 935;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < 5) {
                if (!((201 - 197) != j))
                    printf ("%d", a[i][j]);
                else
                    printf ("%d ", a[i][j]);
                if (!(0 != (j + (928 - 927)) % 5))
                    printf ("\n");
                j++;
            };
        };
    }
    return 0;
}

int exchange (int (*p) [5], int n, int cOjyYi8penG) {
    int i;
    int temp;
    if ((n >= 0 && n <= 4) && (cOjyYi8penG >= 0 && cOjyYi8penG <= 4)) {
        if (cOjyYi8penG != n) {
            for (i = 0; i < 5; i++) {
                temp = *(*(p + n) + i);
                *(*(p + n) + i) = *(*(p + cOjyYi8penG) + i);
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
                *(*(p + cOjyYi8penG) + i) = temp;
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
        return (454 - 453);
    }
    else
        return 0;
}

