void  main () {
    int i;
    int j;
    int a;
    int b;
    int max;
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
    char str [(356 - 345)];
    char substr [4];
    char mix [(41 - 27)];
    while (!(EOF == scanf ("%s%s", str, substr))) {
        j = (11 - 11);
        max = (757 - 757);
        a = strlen (str);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b = strlen (substr);
        {
            i = 0;
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
            while (a + b > i) {
                mix[i] = 0;
                i = i + 1;
            };
        }
        for (i = 0; i < a; i = i + 1) {
            if (max < str[i]) {
                max = str[i];
                j = i;
            };
        }
        for (i = 0; a + b > i; i = i + 1) {
            if (i <= j) {
                mix[i] = str[i];
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
            }
            if (i > j && i <= j + b) {
                mix[i] = substr[i - j - 1];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (i > j + b && i < a + b) {
                mix[i] = str[i - b];
            }
            printf ("%c", mix[i]);
        };
    };
}

