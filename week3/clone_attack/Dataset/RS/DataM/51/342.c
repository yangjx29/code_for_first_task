int main () {
    char str [600];
    int W1yFwoE7G, jbonmJP0A, KroXWBh, length, len [600] = {(983 - 983)}, log, num, sum, max;
    char a [600] [7] = {{'\0'}}, p3YzoaXjF4 [600] [10] = {{'\0'}};
    gets (str);
    len[0] = 1;
    scanf ("%d\n", &W1yFwoE7G);
    length = strlen (str);
    {
        jbonmJP0A = 0;
        while (jbonmJP0A <= length) {
            {
                KroXWBh = 0;
                while (KroXWBh < W1yFwoE7G) {
                    a[jbonmJP0A][KroXWBh] = str[jbonmJP0A + KroXWBh];
                    KroXWBh = KroXWBh +1;
                };
            }
            jbonmJP0A++;
        };
    }
    log = jbonmJP0A - (972 - 971);
    strcpy (p3YzoaXjF4[0], a[0]);
    num = 0;
    {
        jbonmJP0A = 1;
        while (jbonmJP0A <= log) {
            for (KroXWBh = 0, sum = 0; KroXWBh <= num; KroXWBh = KroXWBh +1) {
                if (strcmp (p3YzoaXjF4[KroXWBh], a[jbonmJP0A]) == 0) {
                    sum = 1;
                    len[KroXWBh]++;
                };
            }
            if (sum != 1) {
                num = num + 1;
                len[num] = 1;
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
                strcpy (p3YzoaXjF4[num], a[jbonmJP0A]);
            }
            jbonmJP0A++;
        };
    }
    max = len[0];
    {
        jbonmJP0A = 1;
        while (jbonmJP0A <= num) {
            if (max < len[jbonmJP0A]) {
                max = len[jbonmJP0A];
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
            jbonmJP0A++;
        };
    }
    if (max <= 1) {
        printf ("NO");
    }
    else {
        printf ("%d\n", max);
        for (jbonmJP0A = 0; jbonmJP0A <= log; jbonmJP0A = jbonmJP0A + 1) {
            if (len[jbonmJP0A] == max) {
                printf ("%s\n", p3YzoaXjF4[jbonmJP0A]);
            };
        };
    }
    return 0;
}

