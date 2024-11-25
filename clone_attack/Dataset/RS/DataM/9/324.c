int main () {
    int m;
    int k;
    m = (339 - 339);
    k = 0;
    int i;
    int j;
    char b [11];
    int n;
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
    struct   man {
        char a [(331 - 320)];
        int y;
    }
    man [100];
    int y;
    char c [100] [11];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s%d", b, &y);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (y >= (70 - 10)) {
            strcpy (man[k].a, b);
            man[k].y = y;
            k = k + 1;
        }
        else {
            strcpy (c[m], b);
            m = m + 1;
        };
    }
    for (i = (244 - 243); i < k; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; j < k - i; j = j + 1) {
            int y1, y2;
            y1 = man[j].y;
            y2 = man[j + 1].y;
            if (y2 > y1) {
                y = man[j + 1].y;
                man[j + 1].y = man[j].y;
                man[j].y = y;
                strcpy (b, man[j + 1].a);
                strcpy (man[j + 1].a, man[j].a);
                strcpy (man[j].a, b);
            };
        };
    }
    {
        i = 0;
        while (i < k) {
            strcpy (b, man[i].a);
            i = i + 1;
            printf ("%s\n", b);
        };
    }
    {
        i = 0;
        while (i < m) {
            strcpy (b, c[i]);
            i = i + 1;
            printf ("%s\n", b);
        };
    }
    return 0;
}

