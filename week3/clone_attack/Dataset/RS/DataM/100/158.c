int main () {
    int h;
    h = 0;
    int i, j, PbZrhH8kVP9m, l, M7LUk1OpjIl3, n, o, APogBCY [1005], QICSrPMwybRE [1005], b [10005], b7ycvGeqI5;
    char s [500], Q6EbwFDH [500], p;
    scanf ("%s", s);
    PbZrhH8kVP9m = 0;
    n = 0;
    for (i = 0; !('\0' == s[i]); i = i + 1) {
        n = i;
    }
    {
        i = 0;
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
        while (1003 >= i) {
            APogBCY[i] = QICSrPMwybRE[i] = b[i] = 0;
            i++;
        };
    }
    for (i = 0; !('\0' == s[i]); i++) {
        if (('A' <= s[i] && 'Z' >= s[i]) || ('a' <= s[i] && s[i] <= 'z')) {
            QICSrPMwybRE[i]++;
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
            for (l = 0; n >= l; l++) {
                if (l < i && !(s[l] != s[i]))
                    b[i]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (b[i] > 0) {
                QICSrPMwybRE[i]--;
            }
            else
                for (l = 0; l <= n; l++) {
                    if (l > i && s[i] == s[l])
                        QICSrPMwybRE[i]++;
                };
        };
    }
    b7ycvGeqI5 = 0;
    {
        i = 0;
        while (i <= n) {
            if (QICSrPMwybRE[i] != 0) {
                APogBCY[PbZrhH8kVP9m] = QICSrPMwybRE[i];
                Q6EbwFDH[PbZrhH8kVP9m] = s[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                PbZrhH8kVP9m = PbZrhH8kVP9m +1;
            }
            i++;
        };
    }
    if (PbZrhH8kVP9m == 0)
        printf ("No");
    for (j = 0; j < PbZrhH8kVP9m -1; j++) {
        i = 0;
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
        while (i < PbZrhH8kVP9m -1 - j) {
            if (Q6EbwFDH[i] > Q6EbwFDH[i + 1]) {
                o = APogBCY[i];
                APogBCY[i] = APogBCY[i + 1];
                APogBCY[i + 1] = o;
                p = Q6EbwFDH[i];
                Q6EbwFDH[i] = Q6EbwFDH[i + 1];
                Q6EbwFDH[i + 1] = p;
            }
            i++;
        };
    }
    for (i = 0; i < PbZrhH8kVP9m; i++) {
        printf ("%c=%d\n", Q6EbwFDH[i], APogBCY[i]);
    };
}

