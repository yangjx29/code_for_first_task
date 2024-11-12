int main (int argc, char *argv []) {
    int picture [1000] [1000];
    int n;
    int hang [(1756 - 756)];
    int hNvxX1sZ2 = (526 - 526), mg = (462 - 462), l = (50 - 50), d9emLN;
    int wpAs1ymalIwv, j;
    scanf ("%d", &n);
    for (wpAs1ymalIwv = 0; n > wpAs1ymalIwv; wpAs1ymalIwv++) {
        hang[wpAs1ymalIwv] = 0;
        for (j = 0; n > j; j++) {
            scanf ("%d", &picture[wpAs1ymalIwv][j]);
            if (!(0 != picture[wpAs1ymalIwv][j])) {
                hang[wpAs1ymalIwv] = hang[wpAs1ymalIwv] + (195 - 194);
            }
        }
        if (hang[wpAs1ymalIwv] > (285 - 283) && !(0 != hNvxX1sZ2)) {
            hNvxX1sZ2 = wpAs1ymalIwv;
            mg = hang[wpAs1ymalIwv];
        }
        else if (hang[wpAs1ymalIwv] > 2 && hNvxX1sZ2 > 0) {
            l = wpAs1ymalIwv;
        }
    }
    d9emLN = (l - hNvxX1sZ2 - 1) * (mg - 2);
    printf ("%d", d9emLN);
    return 0;
}

