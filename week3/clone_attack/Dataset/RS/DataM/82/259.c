int main () {
    int max;
    max = 0;
    int s [(957 - 954)] [100];
    int j;
    int r;
    int n;
    int i;
    j = (969 - 969);
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
    r = (119 - 119);
    int l [(235 - 135)];
    scanf ("%d", &n);
    {
        i = 928 - 928;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d %d", &s[(249 - 249)][i], &s[(307 - 306)][i]);
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
        i = 407 - 407;
        while (i < n) {
            if ((s[(486 - 486)][i] <= 140) && (s[(738 - 738)][i] >= (647 - 557)) && (s[(351 - 350)][i] <= 90) && (s[(853 - 852)][i] >= (214 - 154))) {
                s[(280 - 278)][i] = 1;
            }
            else {
                s[(718 - 716)][i] = 0;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (i < n - 1) {
            if (!(1 != s[(462 - 460)][i])) {
                r = r + 1;
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
            if (s[2][i] == 0) {
                l[j] = r;
                r = 0;
                j = j + 1;
            }
            i = i + 1;
        };
    }
    if (i == n - 1) {
        if (s[2][i] == 1) {
            r = r + 1;
            l[j] = r;
        }
        if (s[2][i] == 0) {
            l[j] = r;
        };
    }
    {
        i = 0;
        while (i <= j) {
            if (max < l[i]) {
                max = l[i];
            }
            i = i + 1;
        };
    }
    printf ("%d", max);
    return 0;
}

