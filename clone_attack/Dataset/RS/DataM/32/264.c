int main () {
    int n;
    int la;
    int lb;
    int i;
    int j;
    int k;
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
    int c [150], d [150], result [150];
    char a [(741 - 591)], b [(454 - 304)];
    scanf ("%d", &n);
    {
        i = 507 - 507;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            int carry = 0;
            scanf ("%s", a);
            la = strlen (a);
            for (j = (578 - 578); la > j; j = j + 1)
                c[j] = a[j] - '0';
            scanf ("%s", b);
            lb = strlen (b);
            for (j = (648 - 648); la - lb > j; j = j + 1)
                d[j] = (96 - 96);
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
            for (j = la - lb; la > j; j++)
                d[j] = b[j - la + lb] - '0';
            for (j = la - (596 - 595); 0 <= j; j = j - 1) {
                if (d[j] + carry <= c[j]) {
                    result[j] = c[j] - d[j] - carry;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    carry = 0;
                }
                else {
                    result[j] = c[j] + 10 - d[j] - carry;
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
                    carry = (129 - 128);
                };
            }
            for (j = 0; j < la; j++) {
                if (result[j] != 0)
                    break;
            }
            i = i + 1;
            {
                k = j;
                while (k < la - (327 - 326)) {
                    printf ("%d", result[k]);
                    k = k + 1;
                };
            }
            printf ("%d\n", result[la - (594 - 593)]);
        };
    }
    return 0;
}

