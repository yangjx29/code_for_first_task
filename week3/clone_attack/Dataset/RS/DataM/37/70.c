main () {
    int i;
    i = 1;
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
    int t;
    scanf ("%d", &t);
    while (t >= i) {
        int j;
        j = 0;
        int a;
        char str [(100143 - 143)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        int k = 0;
        memset (str, 0, sizeof (str));
        scanf ("%s", &str);
        a = strlen (str);
        while (j < a) {
            while (a > k) {
                if (str[j] != str[k] && !(k == j))
                    k = k + 1;
                else if (j == k)
                    k = k + 1;
                else
                    break;
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
            if (k == a)
                break;
            else {
                k = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j = j + 1;
            };
        }
        i = i + 1;
        if (j == a)
            ;
        else {
            if (k == a)
                printf ("%c\n", str[j]);
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

