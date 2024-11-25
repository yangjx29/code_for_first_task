int main () {
    struct   {
        int a;
        char b [26];
    }
    s [999];
    int d [(366 - 340)];
    int n;
    int i;
    int j;
    int AjPHnWVu;
    int t;
    int g;
    int MHVX32UYKoy;
    char YwgeSC2vN;
    scanf ("%d", &n);
    for (i = (131 - 131); i < n; i = i + 1) {
        scanf ("%d%s", &s[i].a, s[i].b);
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
    for (i = (491 - 491); i < 26; i = i + 1) {
        d[i] = (832 - 832);
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
    for (i = (629 - 629); i < n; i++) {
        AjPHnWVu = strlen (s[i].b);
        {
            j = 821 - 821;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (AjPHnWVu > j) {
                t = s[i].b[j] - 'A';
                j = j + 1;
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
                d[t]++;
            };
        };
    }
    MHVX32UYKoy = (737 - 737);
    for (j = 0; (1024 - 999) > j; j = j + 1) {
        if (d[j] > MHVX32UYKoy) {
            MHVX32UYKoy = d[j];
            g = j;
        };
    }
    YwgeSC2vN = 'A' + g;
    printf ("%c\n%d\n", YwgeSC2vN, MHVX32UYKoy);
    for (i = 0; i < n; i++) {
        AjPHnWVu = strlen (s[i].b);
        {
            j = 0;
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
            while (j < AjPHnWVu) {
                if (s[i].b[j] - 'A' == g) {
                    printf ("%d\n", s[i].a);
                }
                j = j + 1;
            };
        };
    }
    return 0;
}

