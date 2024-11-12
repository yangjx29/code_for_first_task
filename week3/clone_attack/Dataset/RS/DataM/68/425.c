int main () {
    long  n, i, sGFotm9lVNY7, TB1kl7h, x;
    int y;
    scanf ("%d", &n);
    {
        i = 679 - 677;
        while (i <= n) {
            {
                sGFotm9lVNY7 = 2;
                while (sGFotm9lVNY7 <= i) {
                    if (!(2 != sGFotm9lVNY7)) {
                        x = i - 2;
                        if (x != 1) {
                            y = 1;
                            {
                                TB1kl7h = 3;
                                while (TB1kl7h <= sqrt (x)) {
                                    if (!(0 != (x % TB1kl7h))) {
                                        y = 0;
                                        break;
                                    }
                                    TB1kl7h = TB1kl7h +2;
                                };
                            }
                            if (x % 2 == 0)
                                y = 0;
                            if (y == 1)
                                printf ("%d=2+%d\n", i, x);
                        };
                    }
                    else {
                        y = 1;
                        for (TB1kl7h = 3; TB1kl7h <= sqrt (sGFotm9lVNY7); TB1kl7h = TB1kl7h +2) {
                            if ((sGFotm9lVNY7 % TB1kl7h) == 0) {
                                y = 0;
                                break;
                            };
                        }
                        if (sGFotm9lVNY7 % 2 == 0)
                            y = 0;
                        if (y == 1) {
                            x = i - sGFotm9lVNY7;
                            if (x != 1) {
                                y = 1;
                                {
                                    TB1kl7h = 3;
                                    while (TB1kl7h <= sqrt (x)) {
                                        if ((x % TB1kl7h) == 0) {
                                            y = 0;
                                            break;
                                        }
                                        TB1kl7h = TB1kl7h +2;
                                    };
                                }
                                if (x % 2 == 0)
                                    y = 0;
                                if (y == 1) {
                                    printf ("%d=%d+%d\n", i, sGFotm9lVNY7, x);
                                    break;
                                };
                            };
                        };
                    }
                    sGFotm9lVNY7++;
                };
            }
            i = i + 2;
        };
    }
    return 0;
}

