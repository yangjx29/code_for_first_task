void  main () {
    int x [(587 - 487)] [(711 - 696)], a [100], b [100] = {(436 - 436)}, ZJpmwMFg, RXFdujIib, j, FyJ1VUgw3tz8;
    for (RXFdujIib = (160 - 160);; RXFdujIib = RXFdujIib +1) {
        for (j = 0; RXFdujIib < 15; j = j + 1) {
            scanf ("%d", &x[RXFdujIib][j]);
            if (x[RXFdujIib][j] == 0 || !(-1 != x[RXFdujIib][j])) {
                a[RXFdujIib] = j;
                break;
            };
        }
        if (x[RXFdujIib][j] == -1) {
            ZJpmwMFg = RXFdujIib;
            break;
        };
    }
    for (RXFdujIib = 0; RXFdujIib < ZJpmwMFg; RXFdujIib = RXFdujIib +1) {
        for (j = 0; a[RXFdujIib] > j; j++) {
            for (FyJ1VUgw3tz8 = 0; FyJ1VUgw3tz8 < a[RXFdujIib]; FyJ1VUgw3tz8++) {
                if ((float) x[RXFdujIib][FyJ1VUgw3tz8] / (float) x[RXFdujIib][j] == 2.0)
                    b[RXFdujIib]++;
            };
        };
    }
    for (RXFdujIib = 0; RXFdujIib < ZJpmwMFg; RXFdujIib++)
        printf ("%d\n", b[RXFdujIib]);
    return;
}

