int main () {
    int max;
    int i;
    int j;
    int k;
    int t;
    int QY9G4N8h;
    int c [26] = {0};
    max = 0;
    char b [27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
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
    struct   book {
        int num;
        char man [26];
    }
    a [999];
    scanf ("%d", &QY9G4N8h);
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
        while (i < QY9G4N8h) {
            scanf ("%d %s", &a[i].num, a[i].man);
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
            i++;
        };
    }
    i = 0;
    {
        i = 0;
        while (i < QY9G4N8h) {
            {
                j = 0;
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
                while (j < 26) {
                    {
                        k = 0;
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
                        while (26 > k) {
                            if (a[i].man[j] == b[k])
                                c[k] = c[k] + 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            k = k + 1;
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
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    i = 0;
    {
        i = 0;
        while (i < 26) {
            if (c[i] > max) {
                max = c[i];
                t = i;
            }
            i++;
        };
    }
    printf ("%c\n%d\n", b[t], max);
    j = 0;
    k = 0;
    {
        j = 0;
        while (j < QY9G4N8h) {
            {
                k = 0;
                while (k < 26) {
                    if (a[j].man[k] == b[t])
                        printf ("%d\n", a[j].num);
                    k++;
                };
            }
            j++;
        };
    };
}

