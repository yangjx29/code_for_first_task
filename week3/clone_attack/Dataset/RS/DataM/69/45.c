int zh (char a) {
    int b;
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
    if (('A' <= a) && (a <= 'Z')) {
        b = (int) (a) -(817 - 762);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return b;
    }
    else {
        b = (int) (a) -48;
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
        return b;
    };
}

char fzh (int a) {
    char b;
    if (9 < a) {
        b = (char) (a - 10 + 48);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return b;
    }
    else {
        b = (char) (a + 48);
        return b;
    };
}

int main () {
    int jinwei;
    int l1;
    int l2;
    int sum = 0;
    int i;
    int j;
    int k;
    int n;
    char a [(10829 - 829)], b [(10444 - 444)], a1 [10000], b1 [10000], c [10000];
    scanf ("%s%s", a, b);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    l1 = strlen (a);
    l2 = strlen (b);
    {
        i = 0;
        while (9999 > i) {
            a1[i] = '0';
            b1[i] = '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    b1[9999] = '\0';
    a1[9999] = '\0';
    for (i = 0; l1 > i; i++) {
        a1[l1 - 1 - i] = a[i];
    }
    {
        i = 0;
        while (l2 > i) {
            b1[l2 - 1 - i] = b[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < 9999) {
            if (!(0 != i)) {
                c[i] = fzh (zh (a1[i]) + zh (b1[i]));
                if (9 < (zh (a1[i]) + zh (b1[i]))) {
                    jinwei = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    jinwei = 0;
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
                    };
                };
            }
            else {
                c[i] = fzh ((zh (a1[i]) + zh (b1[i])) + jinwei);
                if ((zh (a1[i]) + zh (b1[i]) + jinwei) > 9) {
                    jinwei = 1;
                }
                else {
                    jinwei = 0;
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
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    for (i = 9998; i >= 0; i--) {
        if (sum == 0) {
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
            if (c[i] != '0') {
                sum++;
                printf ("%c", c[i]);
            };
        }
        else {
            printf ("%c", c[i]);
        };
    }
    if (sum == 0) {
        printf ("0");
    }
    return 0;
}

