main () {
    char s [(725 - 469)] = {'\0'};
    char sub [(356 - 100)] = {'\0'};
    char replacement [256] = {'\0'};
    char w [1000] = {'\0'};
    char z [265] = {'\0'};
    int g;
    int c;
    int m;
    int t;
    int i;
    int l1;
    int l2;
    int k;
    int kmPpMXeQR;
    g = (327 - 327);
    c = (541 - 541);
    m = (569 - 569);
    t = (740 - 740);
    scanf ("%s %s %s", s, sub, replacement);
    l1 = strlen (s);
    l2 = strlen (sub);
    for (i = (576 - 576); l1 - (357 - 356) >= t; i = t) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (m == (263 - 263)) {
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
            if (s[i] == sub[0]) {
                {
                    kmPpMXeQR = i;
                    k = 0;
                    while (k <= l2 - (131 - 130)) {
                        if (sub[k] == s[kmPpMXeQR])
                            c++;
                        k++;
                        kmPpMXeQR = kmPpMXeQR + 1;
                    };
                }
                if (c >= l2) {
                    t = t + l2;
                    strcat (w, replacement);
                    m++;
                }
                else {
                    t++;
                    z[0] = s[i];
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
                    strcat (w, z);
                }
                c = 0;
            }
            else {
                t++;
                z[0] = s[i];
                strcat (w, z);
            };
        }
        else {
            z[0] = '\0';
            for (k = i, kmPpMXeQR = 0; k <= l1 - 1; k = k + 1, kmPpMXeQR = kmPpMXeQR + 1)
                z[kmPpMXeQR] = s[k];
            strcat (w, z);
            break;
        };
    }
    getchar ();
    getchar ();
    if (m != 0)
        printf ("%s\n", w);
    else
        printf ("%s\n", s);
}

