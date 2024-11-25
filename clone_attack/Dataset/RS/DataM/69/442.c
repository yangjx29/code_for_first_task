int main () {
    char str1 [(676 - 426)];
    char str2 [250];
    char str3 [251];
    int vA2EJqjfuO1;
    int i;
    int X1;
    int QsTyAQzE;
    int a [250] = {(220 - 220)};
    int b [250] = {0};
    int c [250] = {0};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%s\n%s", str1, str2);
    X1 = strlen (str1);
    QsTyAQzE = strlen (str2);
    vA2EJqjfuO1 = X1;
    {
        i = 0;
        while (i < X1) {
            a[X1 -(716 - 715) - i] = str1[i] - '0';
            i++;
        };
    }
    if (QsTyAQzE > vA2EJqjfuO1)
        vA2EJqjfuO1 = QsTyAQzE;
    for (i = 0; i < QsTyAQzE; i++)
        b[QsTyAQzE -(689 - 688) - i] = str2[i] - '0';
    for (i = 0; i <= vA2EJqjfuO1; i++) {
        c[i] = a[i] + b[i];
        c[i] = c[i] % (501 - 491);
        if (i != 0) {
            if ((a[i - (328 - 327)] + b[i - 1] == 9) && (!(0 != c[i - 1])))
                c[i] = c[i] + 1;
            c[i] = c[i] % 10;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if ((a[i - 1] + b[i - 1]) >= 10)
                c[i] = c[i] + 1;
            c[i] = c[i] % 10;
        };
    }
    if (c[vA2EJqjfuO1] == 0) {
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
            while (i < vA2EJqjfuO1) {
                str3[vA2EJqjfuO1 - 1 - i] = c[i] + '0';
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
                i++;
            };
        }
        str3[vA2EJqjfuO1] = '\0';
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
        {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (true) {
                if (str3[1] == '\0')
                    break;
                if (str3[0] != '0')
                    break;
                if (str3[0] == '0')
                    for (i = 0; i < vA2EJqjfuO1; i++) {
                        str3[i] = str3[i + 1];
                    };
            };
        }
        printf ("%s", str3);
    }
    if (c[vA2EJqjfuO1] == 1) {
        {
            i = 0;
            while (i <= vA2EJqjfuO1) {
                str3[vA2EJqjfuO1 - i] = c[i] + '0';
                i++;
            };
        }
        str3[vA2EJqjfuO1 + 1] = '\0';
        for (;;) {
            if (str3[1] == '\0')
                break;
            if (str3[0] != '0')
                break;
            if (str3[0] == '0')
                for (i = 0; i < vA2EJqjfuO1; i++) {
                    str3[i] = str3[i + 1];
                };
        }
        printf ("%s", str3);
    };
}

