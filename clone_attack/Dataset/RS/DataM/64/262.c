struct   {
    float USqxJCI;
    int oYsjCzh, xXtUc9Hob;
}
s [50], temp;

void  main () {
    int O40IeJ, i, j, UIZ8f5neKU [(929 - 919)], y [10], DltjKTv [10];
    int p0GXvV9edSB;
    p0GXvV9edSB = (574 - 574);
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
    scanf ("%d", &O40IeJ);
    {
        i = 372 - 372;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (O40IeJ > i) {
            scanf ("%d%d%d", &UIZ8f5neKU[i], &y[i], &DltjKTv[i]);
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
        i = 0;
        while (O40IeJ -(976 - 975) > i) {
            {
                j = 534 - 533;
                while (O40IeJ > j) {
                    s[p0GXvV9edSB].USqxJCI = sqrt ((UIZ8f5neKU[i] - UIZ8f5neKU[j]) * (UIZ8f5neKU[i] - UIZ8f5neKU[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (DltjKTv[i] - DltjKTv[j]) * (DltjKTv[i] - DltjKTv[j]));
                    s[p0GXvV9edSB].oYsjCzh = i;
                    s[p0GXvV9edSB].xXtUc9Hob = j;
                    j++;
                    p0GXvV9edSB++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < p0GXvV9edSB - 1) {
            for (j = 0; j < p0GXvV9edSB - i - 1; j++)
                if (s[j + 1].USqxJCI > s[j].USqxJCI) {
                    temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;
                }
            i++;
        };
    }
    {
        i = 0;
        while (i < p0GXvV9edSB) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", UIZ8f5neKU[s[i].oYsjCzh], y[s[i].oYsjCzh], DltjKTv[s[i].oYsjCzh], UIZ8f5neKU[s[i].xXtUc9Hob], y[s[i].xXtUc9Hob], DltjKTv[s[i].xXtUc9Hob], s[i].USqxJCI);
            i++;
        };
    };
}

