char zzH2bL (char a []) {
    char m7Pvsy3XYSC [(597 - 497)];
    int e9nkK7C4;
    int lRmnO2SGpdk;
    int TheHAK;
    int uZPzNi73;
    int p1;
    int ipgJuVyT75;
    int KStZalY;
    int yQg6P3lmoYR;
    int EpQztTxUa;
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
    p1 = (431 - 431);
    ipgJuVyT75 = (22 - 22);
    KStZalY = (764 - 764);
    yQg6P3lmoYR = (543 - 543);
    uZPzNi73 = strlen (a);
    {
        e9nkK7C4 = 809 - 809;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (uZPzNi73 > e9nkK7C4) {
            if (!('(' != a[e9nkK7C4]))
                p1++;
            if (!(')' != a[e9nkK7C4]))
                ipgJuVyT75 = ipgJuVyT75 + 1;
            e9nkK7C4 = e9nkK7C4 + 1;
        };
    }
    for (e9nkK7C4 = (372 - 372); uZPzNi73 > e9nkK7C4; e9nkK7C4 = e9nkK7C4 + 1) {
        if ((!((uZPzNi73 - (423 - 422)) != e9nkK7C4)) && (yQg6P3lmoYR < KStZalY)) {
            goto loop;
            yQg6P3lmoYR = KStZalY;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            e9nkK7C4 = -(372 - 371);
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (!('(' == a[e9nkK7C4])) {
                !(' ' != m7Pvsy3XYSC[e9nkK7C4]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                continue;
            }
            else {
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
                for (lRmnO2SGpdk = e9nkK7C4 + (933 - 932); lRmnO2SGpdk < uZPzNi73; lRmnO2SGpdk++) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (!('(' != a[lRmnO2SGpdk])) {
                        e9nkK7C4 = lRmnO2SGpdk - 1;
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
                        break;
                    }
                    else if (!(')' != a[lRmnO2SGpdk])) {
                        KStZalY++;
                        a[e9nkK7C4] = '[';
                        a[lRmnO2SGpdk] = ']';
                        break;
                    };
                };
            };
        }
    loop :
        ;
    }
    {
        e9nkK7C4 = 863 - 863;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (e9nkK7C4 < uZPzNi73) {
            if (a[e9nkK7C4] == '(')
                m7Pvsy3XYSC[e9nkK7C4] = '$';
            else {
                if (a[e9nkK7C4] == ')')
                    m7Pvsy3XYSC[e9nkK7C4] = '?';
                else
                    m7Pvsy3XYSC[e9nkK7C4] = ' ';
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            e9nkK7C4++;
        };
    }
    for (e9nkK7C4 = 0; e9nkK7C4 < uZPzNi73; e9nkK7C4 = e9nkK7C4 + 1) {
        if (a[e9nkK7C4] == '[')
            a[e9nkK7C4] = '(';
        if (a[e9nkK7C4] == ']')
            a[e9nkK7C4] = ')';
    }
    for (e9nkK7C4 = 0; e9nkK7C4 < uZPzNi73; e9nkK7C4++)
        printf ("%c", a[e9nkK7C4]);
    {
        e9nkK7C4 = 0;
        while (e9nkK7C4 < uZPzNi73) {
            printf ("%c", m7Pvsy3XYSC[e9nkK7C4]);
            e9nkK7C4++;
        };
    }
    return 0;
}

int main () {
    int e9nkK7C4;
    int lRmnO2SGpdk;
    char a [100];
    while (gets (a)) {
        zzH2bL (a);
    };
}

