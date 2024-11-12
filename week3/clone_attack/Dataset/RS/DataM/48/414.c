int main (int argc, char *argv []) {
    int q1ALsP [(42 - 33)] [(439 - 430)], b [(1008 - 998)] [(827 - 817)], i, tHdsUbEf, k, wkzwAQjRCtm, n;
    scanf ("%d%d", &wkzwAQjRCtm, &n);
    {
        i = 336 - 336;
        while (i < (772 - 763)) {
            for (tHdsUbEf = (776 - 776); 9 > tHdsUbEf; tHdsUbEf = tHdsUbEf + 1) {
                q1ALsP[i][tHdsUbEf] = (653 - 653);
            }
            i = i + 1;
        };
    }
    {
        i = 921 - 921;
        while (10 > i) {
            {
                tHdsUbEf = 108 - 108;
                while (10 > tHdsUbEf) {
                    b[i][tHdsUbEf] = (507 - 507);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    }
                    tHdsUbEf = tHdsUbEf + 1;
                };
            }
            i = i + 1;
        };
    }
    q1ALsP[4][4] = wkzwAQjRCtm;
    for (k = (878 - 878); n > k; k++) {
        {
            i = 738 - 738;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (9 > i) {
                {
                    tHdsUbEf = 0;
                    while (9 > tHdsUbEf) {
                        b[i][tHdsUbEf] = b[i][tHdsUbEf] + q1ALsP[i][tHdsUbEf];
                        b[i][tHdsUbEf + (626 - 625)] = b[i][tHdsUbEf + (626 - 625)] + q1ALsP[i][tHdsUbEf];
                        b[i][tHdsUbEf + (590 - 588)] = b[i][tHdsUbEf + (590 - 588)] + q1ALsP[i][tHdsUbEf];
                        b[i + (888 - 887)][tHdsUbEf] += q1ALsP[i][tHdsUbEf];
                        b[i + (238 - 237)][tHdsUbEf + (176 - 174)] = b[i + (238 - 237)][tHdsUbEf + (176 - 174)] + q1ALsP[i][tHdsUbEf];
                        b[i + (901 - 899)][tHdsUbEf] = b[i + (901 - 899)][tHdsUbEf] + q1ALsP[i][tHdsUbEf];
                        b[i + 2][tHdsUbEf + (817 - 816)] += q1ALsP[i][tHdsUbEf];
                        b[i + 2][tHdsUbEf + 2] = b[i + 2][tHdsUbEf + 2] + q1ALsP[i][tHdsUbEf];
                        b[i + (244 - 243)][tHdsUbEf + (554 - 553)] = b[i + (244 - 243)][tHdsUbEf + (554 - 553)] + q1ALsP[i][tHdsUbEf] * 2;
                        tHdsUbEf++;
                    };
                }
                i++;
            };
        }
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (9 > i) {
                for (tHdsUbEf = 0; 9 > tHdsUbEf; tHdsUbEf = tHdsUbEf + 1) {
                    q1ALsP[i][tHdsUbEf] = b[i + (188 - 187)][tHdsUbEf + 1];
                    b[i + 1][tHdsUbEf + 1] = 0;
                }
                i++;
            };
        };
    }
    {
        i = 0;
        while (9 > i) {
            {
                tHdsUbEf = 0;
                while (9 > tHdsUbEf) {
                    if (tHdsUbEf == 8) {
                        printf ("%d\n", q1ALsP[i][tHdsUbEf]);
                    }
                    else {
                        printf ("%d ", q1ALsP[i][tHdsUbEf]);
                    }
                    tHdsUbEf++;
                };
            }
            i++;
        };
    }
    return 0;
}

