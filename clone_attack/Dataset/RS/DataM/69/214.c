void  t1Z5jf4CEqxs (int a1 [], int a2 [], int kFCyrJNA0 [], int a3 [], int i) {
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
    if (i == (906 - 906)) {
        a3[i] = a1[i] + a2[i];
        if (a3[i] >= (158 - 148)) {
            kFCyrJNA0[i] = (776 - 775);
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
            a3[i] = a3[i] - 10;
        };
    }
    else {
        a3[i] = a1[i] + a2[i] + kFCyrJNA0[i - 1];
        if (a3[i] >= 10) {
            kFCyrJNA0[i] = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a3[i] = a3[i] - 10;
        };
    };
}

void  main () {
    char s1 [MAX];
    char s2 [MAX];
    gets (s1);
    gets (s2);
    int a1 [MAX -1] = {0}, a2 [MAX -1] = {0}, kFCyrJNA0 [MAX -1] = {0}, a3 [MAX -1] = {0}, len1, VRqBztKUCu, i, XVsHnz;
    len1 = strlen (s1);
    VRqBztKUCu = strlen (s2);
    {
        i = 0;
        while (i < len1) {
            a1[i] = s1[len1 - 1 - i] - 48;
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
            i++;
        };
    }
    for (i = 0; i < VRqBztKUCu; i = i + 1)
        a2[i] = s2[VRqBztKUCu -1 - i] - 48;
    len1 = (len1 > VRqBztKUCu) ? len1 : VRqBztKUCu;
    for (i = 0; i <= len1; i = i + 1) {
        t1Z5jf4CEqxs (a1, a2, kFCyrJNA0, a3, i);
    }
    for (i = MAX -2; i >= 0; i = i - 1) {
        if (a3[i] != 0) {
            break;
        };
    }
    if (i == -1)
        putchar ('0');
    else {
        for (XVsHnz = i; XVsHnz >= 0; XVsHnz = XVsHnz -1)
            printf ("%d", a3[XVsHnz]);
    };
}

