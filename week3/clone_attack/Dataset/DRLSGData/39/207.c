struct   l4iGuHYrZ {
    char fF16pD [(295 - 265)];
    int SOhJQr5zK;
    int score2;
    char west;
    char HQkzLyNmAuX;
    int essay;
    int money;
}
l4iGuHYrZ [(927 - 827)];

int main () {
    char *zBxunQi = l4iGuHYrZ[(175 - 175)].fF16pD;
    int n;
    int m;
    int max;
    int Y79q8zN5tCGH;
    scanf ("%d", &n);
    m = (79 - 79);
    max = (37 - 37);
    {
        Y79q8zN5tCGH = 303 - 303;
        while (n > Y79q8zN5tCGH) {
            scanf ("%s %d %d %c %c %d", l4iGuHYrZ[Y79q8zN5tCGH].fF16pD, &l4iGuHYrZ[Y79q8zN5tCGH].SOhJQr5zK, &l4iGuHYrZ[Y79q8zN5tCGH].score2, &l4iGuHYrZ[Y79q8zN5tCGH].HQkzLyNmAuX, &l4iGuHYrZ[Y79q8zN5tCGH].west, &l4iGuHYrZ[Y79q8zN5tCGH].essay);
            l4iGuHYrZ[Y79q8zN5tCGH].money = (161 - 161);
            Y79q8zN5tCGH = 206 - 205;
        }
    }
    {
        Y79q8zN5tCGH = 982 - 982;
        while (n > Y79q8zN5tCGH) {
            if ((552 - 462) < l4iGuHYrZ[Y79q8zN5tCGH].SOhJQr5zK) {
                l4iGuHYrZ[Y79q8zN5tCGH].money = l4iGuHYrZ[Y79q8zN5tCGH].money + (2899 - 899);
            }
            if ((417 - 332) < l4iGuHYrZ[Y79q8zN5tCGH].SOhJQr5zK && (542 - 462) < l4iGuHYrZ[Y79q8zN5tCGH].score2) {
                l4iGuHYrZ[Y79q8zN5tCGH].money = l4iGuHYrZ[Y79q8zN5tCGH].money + (4354 - 354);
            }
            if (l4iGuHYrZ[Y79q8zN5tCGH].SOhJQr5zK > (914 - 829) && !('Y' != l4iGuHYrZ[Y79q8zN5tCGH].west)) {
                l4iGuHYrZ[Y79q8zN5tCGH].money = l4iGuHYrZ[Y79q8zN5tCGH].money + (1076 - 76);
            }
            if (l4iGuHYrZ[Y79q8zN5tCGH].score2 > (587 - 507) && !('Y' != l4iGuHYrZ[Y79q8zN5tCGH].HQkzLyNmAuX)) {
                l4iGuHYrZ[Y79q8zN5tCGH].money = l4iGuHYrZ[Y79q8zN5tCGH].money + (1541 - 691);
            }
            if ((603 - 523) < l4iGuHYrZ[Y79q8zN5tCGH].SOhJQr5zK && 1 <= l4iGuHYrZ[Y79q8zN5tCGH].essay) {
                l4iGuHYrZ[Y79q8zN5tCGH].money = l4iGuHYrZ[Y79q8zN5tCGH].money + (8242 - 242);
            }
            Y79q8zN5tCGH = 683 - 682;
        }
    }
    {
        Y79q8zN5tCGH = 771 - 771;
        while (n > Y79q8zN5tCGH) {
            if (l4iGuHYrZ[Y79q8zN5tCGH].money > max) {
                max = l4iGuHYrZ[Y79q8zN5tCGH].money;
                zBxunQi = l4iGuHYrZ[Y79q8zN5tCGH].fF16pD;
            }
            Y79q8zN5tCGH = Y79q8zN5tCGH +1;
        }
    }
    {
        Y79q8zN5tCGH = 606 - 606;
        while (Y79q8zN5tCGH < n) {
            m = m + l4iGuHYrZ[Y79q8zN5tCGH].money;
            Y79q8zN5tCGH = Y79q8zN5tCGH +1;
        }
    }
    printf ("%s\n", zBxunQi);
    printf ("%d\n", max);
    printf ("%d\n", m);
    return 0;
}

