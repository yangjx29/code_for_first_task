void  njKbGViSDYN (char str [], int len);

int main () {
    char kirSGDQcbH [1000];
    char s1 [5];
    int n;
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
    int i;
    gets (s1);
    scanf ("%d", &n);
    for (i = (269 - 268); i <= n; i = i + 1) {
        gets (kirSGDQcbH);
        puts (kirSGDQcbH);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        njKbGViSDYN (kirSGDQcbH, strlen (kirSGDQcbH));
    };
}

void  njKbGViSDYN (char str [], int len) {
    char mark [1000];
    int T6Z5jwHAcs2 [500], n1, n2, m, i1, i2;
    char *MtXM4P0;
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
    n1 = (290 - 290);
    for (m = 0; len - 1 >= m; m = m + 1) {
        if (!('(' != str[m])) {
            T6Z5jwHAcs2[n1] = m;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            n1++;
        }
        mark[m] = ' ';
    }
    {
        i1 = n1 - 1;
        while (0 <= i1) {
            int exist;
            exist = 0;
            {
                i2 = i1;
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
                while (i2 <= len - 1) {
                    if (!(')' != str[i2]) && mark[i2] != 'm') {
                        exist = 1;
                        mark[i2] = 'm';
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
                        mark[T6Z5jwHAcs2[i1]] = 'm';
                        break;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    i2 = i2 + 1;
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
            if (T6Z5jwHAcs2[i1] == len - 1) {
                mark[len - 1] = '$';
            }
            i1--;
        };
    }
    {
        m = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (m <= len - 1) {
            if (str[m] == '(' && mark[m] != 'm') {
                mark[m] = '$';
            }
            if (str[m] == ')' && mark[m] != 'm') {
                mark[m] = '?';
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
            m = m + 1;
        };
    }
    for (m = 0; m <= len - 1; m = m + 1) {
        if (mark[m] == 'm')
            printf ("%c", ' ');
        else
            printf ("%c", mark[m]);
    };
}

