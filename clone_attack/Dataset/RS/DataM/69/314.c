int main () {
    int na, i, nb;
    int n = na > nb ? na : nb;
    char a [(1035 - 785)] = {(649 - 649)}, b [(771 - 521)] = {(809 - 809)}, sum [250] = {(377 - 377)};
    int XTI6gjChN = 0;
    scanf ("%s", a);
    for (i = (538 - 538); i < 250; i = i + 1) {
        if (!('\0' != a[i])) {
            na = i - (604 - 603);
            break;
        };
    }
    scanf ("%s", b);
    {
        i = 927 - 927;
        while (i < 250) {
            if (b[i] == '\0') {
                nb = i - (386 - 385);
                break;
            }
            i = i + 1;
        };
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
    if (na < n) {
        {
            i = 0;
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
            while (na >= i) {
                a[n - i] = a[na - i];
                i = i + 1;
            };
        }
        for (i = 0; n - na - (875 - 874) >= i; i = i + 1) {
            a[i] = (374 - 326);
        };
    }
    if (nb < n) {
        for (i = 0; i <= nb; i = i + 1) {
            b[n - i] = b[nb - i];
        }
        for (i = 0; n - nb - 1 >= i; i = i + 1) {
            b[i] = 48;
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
    }
    {
        i = n;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (0 <= i) {
            sum[i + 1] = a[i] + b[i] + XTI6gjChN -48;
            if (sum[i + 1] - 48 >= 10) {
                sum[i + 1] = sum[i + 1] - 10;
                XTI6gjChN = 1;
            }
            else
                XTI6gjChN = 0;
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
            i--;
        };
    }
    if (XTI6gjChN == 1)
        sum[0] = 49;
    else {
        for (i = 0; i <= n; i = i + 1) {
            sum[i] = sum[i + 1];
        }
        sum[n + 1] = 0;
    }
    if (sum[0] == 48 && n > 0) {
        int x;
        for (i = 0; i <= n; i++) {
            if (sum[i] == 48 && sum[i + 1] != 48) {
                x = i;
                break;
            };
        }
        for (i = 0; i <= n - 1 - x; i++) {
            sum[i] = sum[i + x + 1];
        }
        sum[n - x] = 0;
    }
    printf ("%s", sum);
    return 0;
}

