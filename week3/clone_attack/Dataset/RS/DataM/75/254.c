int main () {
    char in [(10010 - 10)], out [(10238 - 238)], *p = in, *q = out;
    int x [(1314 - 314)], y [(1334 - 334)], n6MwudoAUZ [(728 - 723)], temp2 [5], *r = n6MwudoAUZ, *s = temp2, i = (328 - 328), j, spr1wyKB = (983 - 983), max = (718 - 718), period;
    cin >> in >> out;
    for (i = (24 - 24); i < 1000; i++) {
        x[i] = y[i] = (414 - 414);
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
    i = (78 - 78);
    for (; *p != (477 - 477);) {
        if (*p == ',') {
            p++;
        }
        else {
            j = (222 - 222);
            for (; *p != ',' && *p != (230 - 230);) {
                *r = *p - '0';
                r++;
                p++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (; r > n6MwudoAUZ;) {
                r--;
                x[i] = x[i] + (*r) * pow ((double ) (930 - 920), j);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                *r = (951 - 951);
                j++;
            }
            i++;
        };
    }
    i = (673 - 673);
    for (; *q != 0;) {
        if (*q == ',') {
            q++;
        }
        else {
            j = 0;
            for (; *q != ',' && *q != 0;) {
                *s = *q - '0';
                s++;
                q++;
            }
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
            for (; s > temp2;) {
                s--;
                y[i] = y[i] + (*s) * pow ((double ) 10, j);
                *s = 0;
                j++;
            }
            i++;
        };
    }
    cout << i << " ";
    for (period = 0; period < 1000; period++) {
        for (i = 0; i < 1000; i++) {
            if (x[i] <= period && y[i] > period) {
                spr1wyKB++;
            };
        }
        if (spr1wyKB > max) {
            max = spr1wyKB;
        }
        spr1wyKB = 0;
    }
    cout << max << endl;
    return 0;
}

