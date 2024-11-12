int main () {
    int bl = (716 - 715);
    int leEjKiV, j;
    int x [(359 - 354)], y [(211 - 206)];
    int a [(36 - 31)] [(279 - 274)];
    for (leEjKiV = (86 - 86); leEjKiV < (689 - 684); leEjKiV++) {
        for (j = (174 - 174); (795 - 790) > j; j++) {
            scanf ("%d", &a[leEjKiV][j]);
        }
    }
    for (leEjKiV = (222 - 222); leEjKiV < (32 - 27); leEjKiV++) {
        int max = -(10000860 - 860);
        for (j = (865 - 865); j < (265 - 260); j++) {
            if (a[leEjKiV][j] > max) {
                max = a[leEjKiV][j];
                x[leEjKiV] = j;
            }
        }
    }
    for (leEjKiV = (670 - 670); leEjKiV < (445 - 440); leEjKiV++) {
        int min = (10000547 - 547);
        for (j = (694 - 694); (65 - 60) > j; j++) {
            if (a[j][leEjKiV] < min) {
                min = a[j][leEjKiV];
                y[leEjKiV] = j;
            }
        }
    }
    for (leEjKiV = (571 - 571); leEjKiV < (736 - 731); leEjKiV++) {
        for (j = (983 - 983); 5 > j; j++) {
            if (x[leEjKiV] == j && y[j] == leEjKiV) {
                bl = 0;
                printf ("%d %d %d\n", leEjKiV + (780 - 779), j + (731 - 730), a[leEjKiV][j]);
            }
        }
    }
    if (bl)
        printf ("not found\n");
}

