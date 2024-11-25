int main () {
    int m = (893 - 893), CfRXD38 = (843 - 843), lRfF4SY, T9Zjlb3Tdu1n, x, y, i;
    char od01ubA [250], b [250], c [250];
    scanf ("%s", od01ubA);
    scanf ("%s", b);
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
    for (lRfF4SY = 0;; lRfF4SY = lRfF4SY + 1) {
        if (!('\0' != od01ubA[lRfF4SY]))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        m++;
    }
    for (T9Zjlb3Tdu1n = 0;; T9Zjlb3Tdu1n++) {
        if (b[T9Zjlb3Tdu1n] == '\0')
            break;
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
        CfRXD38++;
    }
    if (m < CfRXD38) {
        c[CfRXD38] = od01ubA[m - 1] + b[CfRXD38 -1] - '0';
        for (x = CfRXD38 -2; x >= CfRXD38 -m; x = x - 1) {
            if ('9' < c[x + 2])
                c[x + 1] = od01ubA[x + m - CfRXD38] + b[x] - '0' + 1;
            else
                c[x + 1] = od01ubA[x + m - CfRXD38] + b[x] - '0';
        }
        for (x = CfRXD38 -m - 1; x >= 0; x--) {
            if (c[x + 2] > '9')
                c[x + 1] = b[x] + 1;
            else
                c[x + 1] = b[x];
        }
        if ('9' < c[1])
            c[0] = '1';
        else
            c[0] = '0';
        for (x = 1; x <= CfRXD38; x = x + 1) {
            if ('9' < c[x])
                c[x] = c[x] - 10;
        }
        {
            i = 0;
            while (i <= CfRXD38 -1) {
                if (c[i] != '0')
                    break;
                i = i + 1;
            };
        }
        for (x = i; x <= CfRXD38; x = x + 1)
            printf ("%c", c[x]);
    }
    if (m > CfRXD38) {
        c[m] = od01ubA[m - 1] + b[CfRXD38 -1] - '0';
        for (x = m - 2; x >= m - CfRXD38; x--) {
            if (c[x + 2] > '9')
                c[x + 1] = od01ubA[x] + b[x + CfRXD38 -m] - '0' + 1;
            else
                c[x + 1] = od01ubA[x] + b[x + CfRXD38 -m] - '0';
        }
        for (x = m - CfRXD38 -1; x >= 0; x--) {
            if (c[x + 2] > '9')
                c[x + 1] = od01ubA[x] + 1;
            else
                c[x + 1] = od01ubA[x];
        }
        if (c[1] > '9')
            c[0] = '1';
        else
            c[0] = '0';
        {
            x = 1;
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
            while (x <= m) {
                if (c[x] > '9')
                    c[x] = c[x] - 10;
                x = x + 1;
            };
        }
        {
            i = 0;
            while (i <= m - 1) {
                if (c[i] != '0')
                    break;
                i++;
            };
        }
        for (x = i; x <= m; x++)
            printf ("%c", c[x]);
    }
    if (m == CfRXD38) {
        c[m] = od01ubA[m - 1] + b[m - 1] - '0';
        for (x = m - 2; x >= 0; x--) {
            if (c[x + 2] > '9')
                c[x + 1] = od01ubA[x] + b[x] - '0' + 1;
            else
                c[x + 1] = od01ubA[x] + b[x] - '0';
        }
        if (c[1] > '9')
            c[0] = '1';
        else
            c[0] = '0';
        for (x = 1; x <= m; x++) {
            if (c[x] > '9')
                c[x] = c[x] - 10;
        }
        {
            i = 0;
            while (i <= m - 1) {
                if (c[i] != '0')
                    break;
                i++;
            };
        }
        for (x = i; x <= m; x++)
            printf ("%c", c[x]);
    };
}

