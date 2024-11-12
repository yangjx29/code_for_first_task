void  main () {
    int flag;
    int EHK5jS;
    int daEFzHr;
    int k;
    int a [201] = {0};
    int b [200] = {0};
    int len;
    flag = 0;
    char hs51LB [201], str2 [201];
    scanf ("%s", hs51LB);
    scanf ("%s", str2);
    if (strlen (hs51LB) == (667 - 666) && strlen (str2) == 1 && hs51LB[0] == '0' && str2[0] == '0')
        printf ("0\n");
    else {
        {
            EHK5jS = 0;
            while (strlen (hs51LB) > EHK5jS) {
                a[strlen (hs51LB) - EHK5jS -1] = hs51LB[EHK5jS] - '0';
                EHK5jS++;
            };
        }
        {
            daEFzHr = 0;
            while (daEFzHr < strlen (str2)) {
                b[strlen (str2) - daEFzHr - 1] = str2[daEFzHr] - '0';
                daEFzHr++;
            };
        }
        len = (strlen (hs51LB) > strlen (str2)) ? strlen (hs51LB) : strlen (str2);
        for (EHK5jS = 0; EHK5jS < len; EHK5jS++) {
            a[EHK5jS] = a[EHK5jS] + b[EHK5jS];
            if (a[EHK5jS] >= 10) {
                a[EHK5jS] -= 10;
                a[EHK5jS +1]++;
            };
        }
        {
            k = len;
            while (k >= 0) {
                if (flag)
                    printf ("%d", a[k]);
                else {
                    if (a[k]) {
                        flag = 1;
                        printf ("%d", a[k]);
                    };
                }
                k--;
            };
        };
    };
}

