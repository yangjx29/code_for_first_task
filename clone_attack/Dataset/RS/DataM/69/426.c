void  sum (char eXAZnbJf [], char str2 [], int m, int n) {
    char OA2M6j [(779 - 528)];
    char awN8YEfPy;
    int y;
    int JwLQXtrIc;
    int a;
    int i6C03E9Ls;
    y = (281 - 281);
    a = n - m;
    {
        JwLQXtrIc = 193 - 192;
        while ((178 - 178) <= JwLQXtrIc) {
            if (JwLQXtrIc < a)
                OA2M6j[JwLQXtrIc] = str2[JwLQXtrIc];
            else {
                awN8YEfPy = str2[JwLQXtrIc] + eXAZnbJf[JwLQXtrIc -a] - 48;
                if (57 < awN8YEfPy) {
                    str2[JwLQXtrIc -(819 - 818)] = str2[JwLQXtrIc -(819 - 818)] + (45 - 44);
                    OA2M6j[JwLQXtrIc] = awN8YEfPy - 10;
                    for (i6C03E9Ls = JwLQXtrIc -(37 - 36); i6C03E9Ls >= (702 - 702); i6C03E9Ls--) {
                        if (!(58 != str2[i6C03E9Ls])) {
                            str2[i6C03E9Ls] = '0';
                            str2[i6C03E9Ls - (103 - 102)] = str2[i6C03E9Ls - 1] + 1;
                        };
                    };
                }
                else
                    OA2M6j[JwLQXtrIc] = awN8YEfPy;
            }
            JwLQXtrIc--;
        };
    }
    {
        JwLQXtrIc = 0;
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
        while (1) {
            if (OA2M6j[JwLQXtrIc] == '0')
                y++;
            else
                break;
            JwLQXtrIc++;
        };
    }
    if (y == n)
        printf ("%c", '0');
    else {
        JwLQXtrIc = y;
        while (JwLQXtrIc < n) {
            printf ("%c", OA2M6j[JwLQXtrIc]);
            JwLQXtrIc++;
        };
    };
}

main () {
    int m;
    int n;
    int JwLQXtrIc;
    int awN8YEfPy;
    m = 0;
    n = 0;
    char eXAZnbJf [251];
    char str2 [251];
    char OA2M6j [251];
    char HEnX01G4 [251];
    scanf ("%s", eXAZnbJf);
    {
        JwLQXtrIc = 0;
        while (eXAZnbJf[JwLQXtrIc] != '\0') {
            JwLQXtrIc++;
            m = m + 1;
        };
    }
    scanf ("%s", str2);
    {
        JwLQXtrIc = 0;
        while (str2[JwLQXtrIc] != '\0') {
            JwLQXtrIc++;
            n = n + 1;
        };
    }
    if (m > n) {
        awN8YEfPy = n;
        n = m;
        {
            JwLQXtrIc = 0;
            while (JwLQXtrIc <= n) {
                if (JwLQXtrIc == 0)
                    OA2M6j[JwLQXtrIc] = '0';
                else
                    OA2M6j[JwLQXtrIc] = eXAZnbJf[JwLQXtrIc -1];
                JwLQXtrIc++;
            };
        }
        m = awN8YEfPy;
        sum (str2, OA2M6j, m, n + 1);
    }
    else {
        {
            JwLQXtrIc = 0;
            while (JwLQXtrIc <= n) {
                if (JwLQXtrIc == 0)
                    HEnX01G4[JwLQXtrIc] = '0';
                else
                    HEnX01G4[JwLQXtrIc] = str2[JwLQXtrIc -1];
                JwLQXtrIc++;
            };
        }
        sum (eXAZnbJf, HEnX01G4, m, n + 1);
    };
}

