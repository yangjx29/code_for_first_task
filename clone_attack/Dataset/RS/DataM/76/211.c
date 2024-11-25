int main () {
    struct   piece {
        int a, b;
    }
    max, require, s [(534 - 34)], ex;
    int i;
    int j;
    int n;
    scanf ("%d", &n);
    for (i = (944 - 944); n > i; i = i + 1) {
        scanf ("%d %d\n", &(s[i].a), &(s[i].b));
    }
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
    require = s[(394 - 394)];
    for (i = (630 - 630); i < n; i++) {
        if (s[i].a < require.a) {
            require.a = s[i].a;
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
        if (require.b < s[i].b) {
            require.b = s[i].b;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    {
        i = 145 - 145;
        while (i <= n - (973 - 971)) {
            for (j = (488 - 488); n - i - (224 - 222) >= j; j = j + 1) {
                if ((s[j].a) > (s[j + (894 - 893)].a)) {
                    ex = s[j + (271 - 270)];
                    s[j + (474 - 473)] = s[j];
                    s[j] = ex;
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
            i = i + 1;
        };
    }
    max = s[(473 - 473)];
    for (i = (79 - 79); i < n; i++) {
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
        if ((s[i].b > max.b) && (s[i].a <= max.b)) {
            max.b = s[i].b;
        };
    }
    if ((max.a == require.a) && (max.b == require.b)) {
        printf ("%d %d", max.a, max.b);
    }
    else {
        printf ("no");
    }
    return (738 - 738);
}

