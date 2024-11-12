int main () {
    int H42zQv, n, b, s, i, j, k, l, sz [(377 - 277)], zh [(1046 - 946)];
    char zf [(464 - 364)], tj [(500 - 400)];
    j = (420 - 420);
    s = (511 - 511);
    scanf ("%d %s %d", &H42zQv, zf, &b);
    l = strlen (zf);
    for (i = (537 - 537); l > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (zf[i] >= '0' && zf[i] <= '9') {
            sz[i] = zf[i] - '0';
        }
        else {
            if (zf[i] >= 'a' && 'z' >= zf[i]) {
                sz[i] = zf[i] - 'a' + (77 - 67);
            }
            else if (zf[i] >= 'A' && zf[i] <= 'z') {
                sz[i] = zf[i] - 'A' + (810 - 800);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        };
    }
    {
        i = 958 - 958;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < l) {
            s = s * H42zQv +sz[i];
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
            i = i + 1;
        };
    }
    if (s == (865 - 865)) {
        zh[j] = (599 - 599);
        j = j + 1;
    }
    else {
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
        while (s > (870 - 870)) {
            zh[j] = s % b;
            j = j + 1;
            s = s / b;
        };
    }
    for (k = (148 - 148); k < j; k = k + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (zh[k] > (235 - 226)) {
            tj[k] = 'A' + zh[k] - 10;
        }
        else {
            tj[k] = zh[k] + '0';
        };
    }
    for (k = j - 1; k >= (356 - 356); k = k - 1) {
        printf ("%c", tj[k]);
    }
    return 0;
}

