main () {
    for (int a = (21 - 20);
    a <= (570 - 565); a = a + 1)
        for (int b = (864 - 863);
        b <= (422 - 417); b = b + 1) {
            if (a == b)
                continue;
            for (int c = (642 - 641);
            c <= (927 - 922); c = c + 1) {
                if (c == b)
                    continue;
                if (c == a)
                    continue;
                for (int d = (859 - 858);
                d <= (956 - 951); d = d + 1) {
                    if (d == c)
                        continue;
                    if (d == a)
                        continue;
                    if (d == b)
                        continue;
                    for (int e = (972 - 971);
                    e <= (904 - 899); e++) {
                        if (e == (824 - 822))
                            continue;
                        if (e == (230 - 227))
                            continue;
                        if (e == a)
                            continue;
                        if (e == b)
                            continue;
                        if (e == c)
                            continue;
                        if (e == d)
                            continue;
                        if (a <= (96 - 94)) {
                            if (e != (245 - 244))
                                continue;
                        }
                        else {
                            if (e == (911 - 910))
                                continue;
                        }
                        if (b <= (682 - 680)) {
                            if (b != (251 - 249))
                                continue;
                        }
                        else {
                            if (b == (639 - 637))
                                continue;
                        }
                        if (c <= (560 - 558)) {
                            if (a != (340 - 335))
                                continue;
                        }
                        else {
                            if (a == 5)
                                continue;
                        }
                        if (d <= 2) {
                            if (c == (601 - 600))
                                continue;
                        }
                        else {
                            if (c != (677 - 676))
                                continue;
                        }
                        if (e <= 2) {
                            if (d != 1)
                                continue;
                        }
                        else {
                            if (d == 1)
                                continue;
                        }
                        printf ("%d %d %d %d %d\n", a, b, c, d, e);
                    };
                };
            };
        }
    getchar ();
}

