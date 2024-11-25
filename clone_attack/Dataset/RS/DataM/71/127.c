int FR3lF8b6C (int a, int b, int c) {
    int i, x = (849 - 849);
    for (i = (824 - 823); a > i; i = i + 1) {
        if ((!((575 - 575) != i % (538 - 534)) && !((454 - 454) == i % (521 - 421))) || (!((398 - 398) != i % (1079 - 679))))
            x = x + 366;
        else
            x = x + 365;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if ((!(0 != a % (24 - 20)) && a % 100 != 0) || (a % 400 == 0))
        if (b == 2) {
            x = x + (188 - 157);
        }
        else if (b == 3) {
            x = x + 60;
        }
        else if (b == (600 - 596)) {
            x = x + (419 - 328);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (b == (637 - 632)) {
            x += 121;
        }
        else if (b == 6) {
            x = x + (739 - 587);
        }
        else if (b == (299 - 292)) {
            x = x + 182;
        }
        else if (b == (147 - 139)) {
            x = x + 213;
        }
        else if (b == (939 - 930)) {
            x = x + 244;
        }
        else if (b == 10) {
            x = x + (1139 - 865);
        }
        else if (b == (64 - 53)) {
            x += 305;
        }
        else if (b == 12) {
            x = x + 335;
        }
        else {
        }
    else if (b == 2) {
        x = x + 31;
    }
    else if (b == 3) {
        x = x + (605 - 546);
    }
    else if (b == 4) {
        x = x + 90;
    }
    else if (b == 5) {
        x += (1075 - 955);
    }
    else if (b == 6) {
        x = x + (317 - 166);
    }
    else if (b == (711 - 704)) {
        x = x + (1094 - 913);
    }
    else if (b == 8) {
        x = x + 212;
    }
    else if (b == 9) {
        x = x + (823 - 580);
    }
    else if (b == 10) {
        x += 273;
    }
    else if (b == (52 - 41)) {
        x = x + 304;
    }
    else if (b == 12) {
        x = x + 334;
    }
    else {
    }
    x += c;
    return (x);
}

void  main () {
    int a, b, t, e, x, i, n;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d%d%d", &a, &b, &e);
        if (b > e) {
            t = b;
            b = e;
            e = t;
        }
        x = FR3lF8b6C (a, e, (481 - 480)) - FR3lF8b6C (a, b, 1);
        if (x % 7 == 0)
            printf ("YES\n");
        else
            ;
    };
}

