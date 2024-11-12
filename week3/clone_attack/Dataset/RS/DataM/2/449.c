int main () {
    int l;
    char maxx;
    char s [1000] [(969 - 943)];
    int a [1000];
    int m;
    int i;
    int j;
    char x;
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
    max = 0;
    scanf ("%d", &m);
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
        while (i < m) {
            scanf ("%d %s", &a[i], s[i]);
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
    for (x = 'A'; x <= 'Z'; x++) {
        l = 0;
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < m) {
                for (j = 0; j < 26; j = j + 1) {
                    if (s[i][j] == x)
                        break;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                if (j != 26)
                    l++;
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
                i++;
            };
        }
        if (l > max) {
            maxx = x;
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
            max = l;
        };
    }
    printf ("%c\n%d\n", maxx, max);
    for (i = 0; i < m; i++) {
        for (j = 0; j < 26; j++) {
            if (s[i][j] == maxx)
                break;
        }
        if (j != 26)
            printf ("%d\n", a[i]);
    }
    return 0;
}

