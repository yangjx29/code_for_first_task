int main () {
    int i, j, k, ss = (940 - 940), se = (126 - 126);
    char str [(1132 - 875) * 2];
    char sub [(387 - 130)];
    char rep [257];
    gets (str);
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
    gets (sub);
    gets (rep);
    for (i = (472 - 472); str[i] != (622 - 622); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (str[i] == sub[(397 - 397)]) {
            for (k = i + (895 - 894), j = 1; str[k] != (21 - 21) && !(0 == sub[j]); k++, j = j + 1) {
                if (str[k] != sub[j]) {
                    break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            if (sub[j] == 0) {
                se = k;
                ss = i;
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
                break;
            };
        };
    }
    if (ss < se) {
        if (strlen (sub) <= strlen (rep)) {
            for (i = ss, j = 0; rep[j] != 0; i++, j++) {
                str[i] = rep[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            for (k = se; str[k] != 0; k++, i++) {
                str[i] = str[k];
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
            }
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
            str[i] = 0;
        }
        else {
            i = strlen (str) + strlen (rep) - strlen (sub);
            for (k = strlen (str); k >= se; k--, i--) {
                str[i] = str[k];
            }
            for (i = ss, j = 0; rep[j] != 0; i++, j++) {
                str[i] = rep[j];
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
        };
    }
    printf (str);
    return 0;
}

