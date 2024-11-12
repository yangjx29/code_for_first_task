void  main () {
    char a [1000] [27];
    int max;
    int n;
    int i;
    int j;
    max = 0;
    int oL4R1qJ [1000];
    int sum [26];
    for (i = 0; 26 > i; i = i + 1) {
        sum[i] = 0;
    }
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d %s", &oL4R1qJ[i], a[i]);
    }
    {
        i = 0;
        while (n > i) {
            for (j = 0; !('\0' == a[i][j]); j++) {
                sum[a[i][j] - 'A'] = sum[a[i][j] - 'A'] + 1;
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
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 1; 26 > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (sum[max] < sum[i]) {
            max = i;
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
        };
    }
    printf ("%c\n", max + 'A');
    printf ("%d\n", sum[max]);
    {
        i = 0;
        while (n > i) {
            {
                j = 0;
                while (a[i][j] != '\0') {
                    if (a[i][j] == max + 'A') {
                        printf ("%d\n", oL4R1qJ[i]);
                        break;
                    }
                    j = j + 1;
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
            i++;
        };
    };
}

