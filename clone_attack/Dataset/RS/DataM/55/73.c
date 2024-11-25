int main (int argc, char *argv []) {
    int i, p = 0, m, t;
    long  y239ThN = (553 - 553), a, b;
    char s3 [100], s1 [100], s2 [100], s [100];
    scanf ("%ld %s %ld", &a, s3, &b);
    t = strlen (s3);
    {
        i = t - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= 0) {
            s[t - 1 - i] = s3[i];
            s[t - i] = '\0';
            i--;
        };
    }
    {
        i = 0;
        while (s[i] != '\0') {
            if (s[i] >= 'a' && s[i] <= 'z') {
                y239ThN = y239ThN + (s[i] - 'a' + 10) * pow (a, i);
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (s[i] >= 'A' && s[i] <= 'Z') {
                    y239ThN = y239ThN + (s[i] - 'A' + 10) * pow (a, i);
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
                }
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (s[i] >= '0' && s[i] <= '9') {
                        y239ThN = y239ThN + (s[i] - '0') * pow (a, i);
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
                };
            }
            i++;
        };
    }
    if (y239ThN == 0) {
    }
    else {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (y239ThN != 0) {
            {
                i = 0;
                while (y239ThN != 0) {
                    p = y239ThN % b;
                    y239ThN = y239ThN / b;
                    if (p >= 10) {
                        s1[i] = p + 55;
                    }
                    else {
                        s1[i] = p + 48;
                    }
                    s1[i + 1] = '\0';
                    i++;
                };
            }
            m = strlen (s1);
            {
                i = m - 1;
                while (i >= 0) {
                    s2[m - 1 - i] = s1[i];
                    s2[m - i] = '\0';
                    i--;
                };
            }
            printf ("%s", s2);
        };
    }
    return 0;
}

