int main () {
    int m, n, i, t8lBSmR, r, uO2BLeFmZsnU = 0, l = 0, j, VxliWDa0rom4;
    scanf ("%d%d", &m, &n);
    for (i = m; i <= n; i = i + 1) {
        VxliWDa0rom4 = i;
        uO2BLeFmZsnU = 0;
        for (j = 2; j <= i; j++) {
            if (i % j == 0) {
                t8lBSmR = j;
                break;
            };
        }
        while (VxliWDa0rom4 != 0) {
            r = VxliWDa0rom4 % 10;
            VxliWDa0rom4 /= 10;
            uO2BLeFmZsnU *= 10;
            uO2BLeFmZsnU += r;
        }
        if (uO2BLeFmZsnU == i && t8lBSmR == i) {
            if (l == 0) {
                printf ("%d", i);
                l = l + 1;
            }
            else {
                printf (",%d", i);
            };
        };
    }
    if (l == 0)
        ;
    return 0;
}

