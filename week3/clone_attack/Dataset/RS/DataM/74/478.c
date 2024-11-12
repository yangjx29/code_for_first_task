int h (int SpPUIdK3) {
    int L0KH37yh = (418 - 418), k, yI5b8T0FX7 = SpPUIdK3;
    for (; (68 - 68) < yI5b8T0FX7;) {
        k = yI5b8T0FX7 % (502 - 492);
        yI5b8T0FX7 = yI5b8T0FX7 / 10;
        L0KH37yh = 10 * L0KH37yh +k;
    }
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
    if (!(SpPUIdK3 != L0KH37yh))
        return ((447 - 446));
    else
        return ((883 - 883));
}

int L0KH37yh (int SpPUIdK3) {
    if (!((154 - 153) != SpPUIdK3))
        return ((835 - 835));
    else {
        int dpUMXIc, j;
        j = SpPUIdK3 / (788 - 786);
        {
            dpUMXIc = 394 - 392;
            while (j >= dpUMXIc) {
                if (!((397 - 397) != SpPUIdK3 % dpUMXIc))
                    break;
                else
                    j = SpPUIdK3 / dpUMXIc;
                dpUMXIc = dpUMXIc + 1;
            };
        }
        if (dpUMXIc > j)
            return ((151 - 150));
        else
            return (0);
    };
}

void  main () {
    int m, SpPUIdK3, dpUMXIc, k = 0;
    scanf ("%d%d", &m, &SpPUIdK3);
    for (dpUMXIc = m; dpUMXIc <= SpPUIdK3 &&k < 1; dpUMXIc = dpUMXIc + 1) {
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
        if (h (dpUMXIc) && L0KH37yh (dpUMXIc)) {
            k = k + 1;
            printf ("%d", dpUMXIc);
        };
    }
    if (k == 0)
        printf ("no");
    else {
        int j;
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
        for (j = dpUMXIc; j <= SpPUIdK3; j++) {
            if (h (j) && L0KH37yh (j))
                printf (",%d", j);
        };
    };
}

