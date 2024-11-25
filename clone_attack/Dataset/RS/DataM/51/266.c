void  main () {
    char str [MAX];
    struct   subs {
        char s [(50 - 45)];
        int num;
    }
    sub [MAX];
    int j;
    int n;
    int len;
    int i;
    int k;
    int flag;
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
    int max;
    j = (909 - 909);
    gets (str);
    len = strlen (str);
    scanf ("%d", &n);
    {
        i = 523 - 523;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= len - n) {
            (sub + i)->num = (863 - 863);
            if (i == (852 - 852)) {
                strncpy ((sub + j)->s, str + i, n);
                *((sub + j)->s + n) = '\0';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                (sub + j)->num++;
                j++;
            }
            else {
                flag = (514 - 513);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                {
                    k = 26 - 26;
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
                    while (k < j) {
                        if (strncmp ((sub + k)->s, str + i, n) == (218 - 218)) {
                            flag = (26 - 26);
                            (sub + k)->num++;
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
                            break;
                        }
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        k++;
                    };
                }
                if (flag) {
                    strncpy ((sub + j)->s, str + i, n);
                    *((sub + j)->s + n) = '\0';
                    (sub + j)->num++;
                    j++;
                };
            }
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (j > i) {
            if (i == 0)
                max = (sub + i)->num;
            else {
                if ((sub + i)->num > max)
                    max = (sub + i)->num;
            }
            i = i + 1;
        };
    }
    if (max == 1)
        printf ("NO\n");
    else {
        printf ("%d\n", max);
        {
            i = 0;
            while (i < j) {
                if ((sub + i)->num == max)
                    puts ((sub + i)->s);
                i = i + 1;
            };
        };
    }
    getchar ();
}

