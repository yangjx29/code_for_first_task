int main () {
    char s [(536 - 435)];
    int i;
    int j;
    int t1;
    int t2;
    int sYbHcMqDGKF3;
    int len;
    int ScOGLig0u [(517 - 416)], l [(457 - 356)], r [(189 - 88)];
    for (; !(EOF == scanf ("%s", s));) {
        puts (s);
        t2 = (370 - 370);
        len = strlen (s);
        for (i = (341 - 341); len > i; i = i + 1) {
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
            if (!('(' != s[i])) {
                ScOGLig0u[i] = -(543 - 542);
            }
            else {
                if (!(')' != s[i])) {
                    ScOGLig0u[i] = 1;
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
                }
                else {
                    ScOGLig0u[i] = (586 - 586);
                };
            };
        }
        t1 = (624 - 624);
        {
            i = 232 - 232;
            while (len > i) {
                if (ScOGLig0u[i] == -1) {
                    l[t1] = i;
                    t1 = t1 + 1;
                }
                if (!(1 != ScOGLig0u[i])) {
                    r[t2] = i;
                    t2 = t2 + 1;
                }
                i = i + 1;
            };
        }
        for (i = t1 - 1; i >= (551 - 551); i = i - 1) {
            j = 817 - 817;
            while (j < t2) {
                if (r[j] > l[i]) {
                    ScOGLig0u[r[j]] = (941 - 941);
                    r[j] = (968 - 968);
                    ScOGLig0u[l[i]] = (123 - 123);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    l[i] = 0;
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
                j = j + 1;
            };
        }
        for (i = 0; i < len; i++) {
            if (ScOGLig0u[i] == -1) {
            }
            else {
                if (ScOGLig0u[i] == 1) {
                }
                else {
                };
            };
        };
    }
    return 0;
}

