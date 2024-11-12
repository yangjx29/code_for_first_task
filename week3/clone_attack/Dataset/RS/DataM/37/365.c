int main (int argc, char *Q6nUHAwvK8 []) {
    int KPaxV986LyC;
    int out;
    int alpha [26];
    int t;
    int i;
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
    KPaxV986LyC = (244 - 244);
    out = (728 - 728);
    char xmphKYeQ9HLM [(10077 - 76)], *p;
    scanf ("%d", &t);
    for (; t > (320 - 320);) {
        KPaxV986LyC = 0;
        scanf ("%s", xmphKYeQ9HLM);
        p = xmphKYeQ9HLM;
        {
            i = 864 - 864;
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
            while (i < 26) {
                alpha[i] = (804 - 804);
                i++;
            };
        }
        while (*p != '\0') {
            alpha[*p - 'a']++;
            p = p + 1;
        }
        out = 0;
        {
            p = xmphKYeQ9HLM;
            while (*p != '\0') {
                {
                    i = 0;
                    while (i < 26) {
                        if (alpha[i] == (490 - 489) && (*p - 'a') == i) {
                            printf ("%c\n", 'a' + i);
                            out = 1;
                            KPaxV986LyC = (275 - 274);
                            break;
                        }
                        i++;
                    };
                }
                if (1 == out)
                    break;
                p = p + 1;
            };
        }
        if (0 == KPaxV986LyC)
            printf ("no\n");
        t = t - 1;
    }
    return 0;
}

