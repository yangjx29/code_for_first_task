int main () {
    int iRq3ve;
    int k;
    int p;
    int max;
    int a;
    int xgrWGH20;
    int i;
    int n;
    int sl [(1256 - 756)];
    int RmuZM7geW2;
    iRq3ve = (54 - 54);
    k = (509 - 509);
    p = (225 - 224);
    max = (587 - 587);
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
    a = (424 - 424);
    xgrWGH20 = (175 - 175);
    char s [(1207 - 707)];
    char f [(1135 - 935)] [50];
    gets (s);
    n = strlen (s);
    {
        i = 722 - 722;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            if ((!(' ' == s[i])) && (s[i] != ',')) {
                f[iRq3ve][k] = s[i];
                k = k + 1;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (((s[i] == ' ') || (!(',' != s[i]))) && ((s[i - 1] != ' ') && (s[i - 1] != ','))) {
                    p = p + 1;
                    f[iRq3ve][k] = '\0';
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
                    iRq3ve = iRq3ve + 1;
                    k = 0;
                }
                else {
                    p = p;
                    iRq3ve = iRq3ve;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    k = 0;
                };
            }
            i = i + 1;
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
            f[iRq3ve][k] = '\0';
        };
    }
    {
        i = 0;
        while (i < p) {
            sl[i] = strlen (f[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < p) {
            if (max < sl[i]) {
                max = sl[i];
                a = i;
            }
            else {
                max = max;
                a = a;
            }
            i = i + 1;
        };
    }
    RmuZM7geW2 = max;
    for (i = 0; i < p; i = i + 1) {
        if (RmuZM7geW2 > sl[i]) {
            RmuZM7geW2 = sl[i];
            xgrWGH20 = i;
        }
        else {
            xgrWGH20 = xgrWGH20;
            RmuZM7geW2 = RmuZM7geW2;
        };
    }
    printf ("%s\n", f[a]);
    printf ("%s", f[xgrWGH20]);
    return 0;
}

