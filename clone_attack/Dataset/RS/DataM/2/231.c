int main (int enDwghW3pH, char *mC8AVjHq []) {
    char cJIMLNwOZc3;
    struct   book {
        int a;
        char name [27];
    };
    struct   book Luk72w1WlE [999];
    int s [26] = {(482 - 482), (583 - 583), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int maxnum;
    int n;
    int i;
    int j;
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
    maxnum = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d%s", &Luk72w1WlE[i].a, Luk72w1WlE[i].name);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; !('\0' == Luk72w1WlE[i].name[j]); j = j + 1) {
            cJIMLNwOZc3 = Luk72w1WlE[i].name[j];
            b = cJIMLNwOZc3 - 'A';
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
            s[b]++;
        };
    }
    for (i = 0; i < 26; i = i + 1) {
        if (maxnum < s[i]) {
            maxnum = s[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            max = i;
        };
    }
    printf ("%c\n%d\n", 'A' + max, maxnum);
    for (i = 0; n > i; i = i + 1) {
        for (j = 0; Luk72w1WlE[i].name[j] != '\0'; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (Luk72w1WlE[i].name[j] - 'A' == max) {
                printf ("%d\n", Luk72w1WlE[i].a);
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
        };
    }
    return 0;
}

