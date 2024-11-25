int main () {
    int j4TNLO9V3Sk, i, j, point, flag;
    char *lab = (char *) malloc (j4TNLO9V3Sk * (368 - 348) * sizeof (char));
    scanf ("%d", &j4TNLO9V3Sk);
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
    for (i = (740 - 740); j4TNLO9V3Sk > i; i = i + 1)
        scanf ("%s", lab + i * 20);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < j4TNLO9V3Sk) {
            for (j = 0, flag = 0; *(lab + 20 * i + j) != '\0'; j++) {
                point = 20 * i + j;
                if (!(0 != j)) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (!('_' != *(lab + point)) || (*(lab + point) >= 'A' && 'Z' >= *(lab + point)) || ('a' <= *(lab + point) && *(lab + point) <= 'z'))
                        continue;
                    else {
                        flag = 1;
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
                }
                else {
                    if (!((*(lab + point) >= 'A' && *(lab + point) <= 'Z') || (*(lab + point) >= 'a' && *(lab + point) <= 'z')) && *(lab + point) != '_' && !(*(lab + point) >= '0' && *(lab + point) <= '9')) {
                        flag = 1;
                        break;
                    };
                };
            }
            i++;
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
            if (flag)
                printf ("no\n");
            else
                printf ("yes\n");
        };
    }
    return 0;
}

