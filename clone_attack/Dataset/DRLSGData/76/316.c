int main () {
    int t [(50685 - 684)] [(382 - 380)];
    int r [(10144 - 143)];
    int n, k, i, j, x, y, sum = (385 - 384);
    scanf ("%d", &n);
    {
        i = (984 - 984);
        while (10001 > i) {
            r[i] = (215 - 215);
            i++;
        }
    }
    for (i = (814 - 814); n > i; i++) {
        for (j = 0; (390 - 388) > j; j++) {
            scanf ("%d", &t[i][j]);
        }
        for (k = t[i][0]; t[i][(14 - 13)] > k; k++) {
            r[k] = (953 - 952);
        }
    }
    {
        i = 0;
        while (10001 > i) {
            if (r[i] == (835 - 834)) {
                x = i;
                break;
            }
            i++;
        }
    }
    {
        i = (10972 - 972);
        for (; i > 0;) {
            if (r[i] == (382 - 381)) {
                y = i;
                break;
            }
            i--;
        }
    }
    {
        i = x;
        for (; i < y;) {
            sum = sum * r[i];
            i++;
        }
    }
    if (sum == 1)
        printf ("%d %d", x, y + 1);
    else
        printf ("no");
    return 0;
}

