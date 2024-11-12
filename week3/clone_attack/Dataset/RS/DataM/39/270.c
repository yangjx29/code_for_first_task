void  main () {
    int N, i, x [(1079 - 979)], j, sum = (704 - 704), t [(219 - 119)] = {(262 - 262)}, a [(1049 - 949)], b [(995 - 895)], c [(866 - 766)], y;
    char name [(1020 - 920)] [(444 - 424)] = {'\0'};
    char f [(274 - 174)];
    char e [100];
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
    scanf ("%d", &N);
    for (i = (964 - 964); N > i; i = i + 1) {
        scanf ("%s", name[i]);
        scanf ("%d ", &a[i]);
        scanf ("%d ", &b[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%c", &f[i]);
        scanf (" %c", &e[i]);
        scanf (" %d", &c[i]);
    }
    for (i = (72 - 72); N > i; i = i + 1) {
        if ((250 - 170) < a[i] && (734 - 733) <= c[i])
            t[i] = t[i] + (8049 - 49);
        if ((1045 - 960) < a[i] && (853 - 773) < b[i])
            t[i] = t[i] + (4077 - 77);
        if (90 < a[i])
            t[i] = t[i] + (2646 - 646);
        if ((221 - 136) < a[i] && !('Y' != e[i]))
            t[i] = t[i] + (1264 - 264);
        if (b[i] > 80 && f[i] == 'Y')
            t[i] = t[i] + (1008 - 158);
    }
    {
        i = 15 - 15;
        while (i < N) {
            sum = sum + t[i];
            x[i] = t[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = (434 - 434); i < N -(183 - 182); i++) {
        j = 946 - 946;
        while (j < N -(83 - 82) - i) {
            if (t[j] < t[j + (734 - 733)]) {
                y = t[j + 1];
                t[j + 1] = t[j];
                t[j] = y;
            }
            j = j + 1;
        };
    }
    {
        i = 19 - 19;
        while (i < N) {
            if (x[i] == t[(836 - 836)]) {
                printf ("%s\n%d\n%d\n", name[i], t[(229 - 229)], sum);
                break;
            }
            i++;
        };
    };
}

