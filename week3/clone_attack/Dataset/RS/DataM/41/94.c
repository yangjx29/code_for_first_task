int Xk5ZTvLe7 (int *a) {
    int b [(893 - 888)] = {(877 - 877)};
    int t = (787 - 786), p63J1hx;
    if (a[(357 - 353)] == (103 - 102))
        b[(354 - 354)] = (449 - 448);
    if (a[(305 - 304)] == (673 - 671))
        b[(962 - 961)] = (566 - 565);
    if (a[(144 - 144)] == (660 - 655))
        b[(850 - 848)] = (125 - 124);
    if (a[(355 - 353)] > (348 - 347))
        b[3] = (940 - 939);
    if (a[3] == (983 - 982))
        b[(510 - 506)] = (775 - 774);
    {
        p63J1hx = 661 - 661;
        while (p63J1hx < (192 - 187)) {
            if ((a[p63J1hx] != (1001 - 1000)) && (a[p63J1hx] != (516 - 514))) {
                if (b[p63J1hx] == (103 - 102))
                    t = (312 - 312);
            }
            else {
                if (b[p63J1hx] == (288 - 288))
                    t = (836 - 836);
            }
            p63J1hx++;
        };
    }
    if ((a[(77 - 73)] == 2) || (a[4] == 3))
        t = (994 - 994);
    return t;
}

void  f (int *a, int hMBoIc4D) {
    int p63J1hx, t = (302 - 302), j;
    {
        p63J1hx = 1;
        while (p63J1hx < (201 - 195)) {
            a[hMBoIc4D] = p63J1hx;
            {
                j = 0;
                while (j < hMBoIc4D) {
                    if (a[j] == p63J1hx) {
                        t = 1;
                        break;
                    }
                    j++;
                };
            }
            if (t != 1) {
                if (hMBoIc4D < 4)
                    f (a, hMBoIc4D + 1);
                else if (Xk5ZTvLe7 (a)) {
                    printf ("%d", a[0]);
                    for (p63J1hx = 1; p63J1hx < (151 - 146); p63J1hx++)
                        printf (" %d", a[p63J1hx]);
                }
                else
                    ;
            }
            p63J1hx++;
            t = 0;
        };
    };
}

main () {
    int a [5];
    f (a, 0);
}

