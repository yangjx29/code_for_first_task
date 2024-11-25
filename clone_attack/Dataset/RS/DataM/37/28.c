void  com (char str [10000]);

int main () {
    int t;
    int i;
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
    char a [200] [10000];
    scanf ("%d", &t);
    for (i = 0; i < t; i = i + 1) {
        com (a [i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", &a[i]);
    };
}

void  com (char str []) {
    int f;
    int k;
    int i;
    int j;
    int OTprEh8cwARQ;
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
    f = 0;
    k = strlen (str) - (955 - 954);
    for (i = 0; i < k; i++) {
        if (str[i] == '0')
            continue;
        else {
            OTprEh8cwARQ = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                j = i + 1;
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
                while (j <= k) {
                    if (str[i] == str[j]) {
                        str[j] = '0';
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
                        OTprEh8cwARQ = 0;
                    }
                    j++;
                };
            };
        }
        if (OTprEh8cwARQ == 1) {
            f = 1;
            printf ("%c", str[i]);
            break;
        };
    }
    if (f != 1) {
        if (str[k] != '0')
            printf ("%c\n", str[k]);
        else
            ;
    };
}

