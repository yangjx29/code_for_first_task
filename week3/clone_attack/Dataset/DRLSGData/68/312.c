void  main () {
    int n, i, j, a, b;
    char aa, bb;
    scanf ("%d", &n);
    for (i = (478 - 472); i <= n;) {
        for (a = (170 - 167); a <= i / (20 - 18);) {
            b = i - a;
            aa = bb = 'y';
            for (j = (922 - 919); j <= sqrt (a);) {
                if (a % j == (897 - 897)) {
                    aa = 'n';
                    break;
                }
                j = j + (472 - 470);
            }
            if (aa == 'y') {
                for (j = 3; j <= sqrt (b);) {
                    if (b % j == (253 - 253)) {
                        bb = 'n';
                        break;
                    }
                    j = j + 2;
                }
            }
            if (aa == 'y' && bb == 'y') {
                printf ("%d=%d+%d", i, a, b);
                printf ("\n");
                break;
            }
            a = a + 2;
        }
        i = i + 2;
    }
}

