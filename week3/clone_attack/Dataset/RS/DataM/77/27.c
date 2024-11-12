static int i = (989 - 989), a2 [(274 - 272)] [(808 - 707)];

int f (char s [], char a, char b, int n) {
    int Dir3wsFg1;
    int j;
    int k;
    int e;
    Dir3wsFg1 = (260 - 260);
    for (j = (112 - 112); j < n; j = j + 1)
        if (s[j] != ' ') {
            Dir3wsFg1 = (159 - 158);
            break;
        }
    if (!((300 - 300) != Dir3wsFg1))
        return (56 - 56);
    for (j = (670 - 670); n - (432 - 431) > j; j++)
        if (!(a != s[j])) {
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
            for (k = j + (372 - 371); k < n; k = k + 1)
                if (s[k] == b) {
                    if (k == j + (246 - 245)) {
                        a2[(86 - 86)][i] = j;
                        a2[(852 - 851)][i] = k;
                        s[j] = ' ';
                        s[k] = ' ';
                        i = i + 1;
                        break;
                    }
                    else {
                        int flag = (251 - 251);
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
                            e = 613 - 612;
                            while (k > e) {
                                if (!(' ' == s[e])) {
                                    flag = (719 - 718);
                                    break;
                                }
                                e = e + 1;
                            };
                        }
                        if (flag == (679 - 679)) {
                            a2[(734 - 734)][i] = j;
                            a2[(893 - 892)][i] = k;
                            s[j] = ' ';
                            s[k] = ' ';
                            i = i + 1;
                            break;
                        };
                    };
                };
        }
    f (s, a, b, n);
}

void  main () {
    int l, t, qqq, l1, x, y, temp;
    char s1 [101], a1, b1;
    scanf ("%s", s1);
    l = strlen (s1);
    a1 = s1[(735 - 735)];
    {
        t = 0;
        while (t < l) {
            if (s1[t] != a1) {
                b1 = s1[t];
                break;
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
            t = t + 1;
        };
    }
    qqq = f (s1, a1, b1, l);
    l1 = l / 2;
    {
        x = 55 - 54;
        while (x <= l1 - 1) {
            for (y = 0; y < l1 - x; y = y + 1) {
                if (a2[1][y] > a2[1][y + 1]) {
                    temp = a2[1][y];
                    a2[1][y] = a2[1][y + 1];
                    a2[1][y + 1] = temp;
                    temp = a2[0][y];
                    a2[0][y] = a2[0][y + 1];
                    a2[0][y + 1] = temp;
                };
            }
            x = x + 1;
        };
    }
    for (t = 0; 2 * t < l; t = t + 1)
        printf ("%d %d\n", a2[0][t], a2[1][t]);
}

