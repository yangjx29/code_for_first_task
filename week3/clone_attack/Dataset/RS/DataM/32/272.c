void  main () {
    int n;
    int kFp94V;
    int YzTRh9VDainO;
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
    struct   s5NDkX {
        char M9mh4Y [101];
        int OxFeI0NVba;
        char wCrXY4 [101];
        int hOhR1JB42jF3;
        char WlLPfr [101];
    }
    s5NDkX [999];
    scanf ("%d", &n);
    for (kFp94V = (290 - 290); kFp94V < n; kFp94V = kFp94V + 1) {
        scanf ("%s", s5NDkX[kFp94V].M9mh4Y);
        scanf ("%s", s5NDkX[kFp94V].wCrXY4);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        getchar ();
    }
    for (kFp94V = 0; kFp94V < n; kFp94V++) {
        for (YzTRh9VDainO = 0; s5NDkX[kFp94V].M9mh4Y[YzTRh9VDainO] != '\0'; YzTRh9VDainO = YzTRh9VDainO +1)
            s5NDkX[kFp94V].OxFeI0NVba = YzTRh9VDainO +1;
        for (YzTRh9VDainO = 0; !('\0' == s5NDkX[kFp94V].wCrXY4[YzTRh9VDainO]); YzTRh9VDainO = YzTRh9VDainO +1)
            s5NDkX[kFp94V].hOhR1JB42jF3 = YzTRh9VDainO +1;
        for (YzTRh9VDainO = 1; YzTRh9VDainO <= s5NDkX[kFp94V].hOhR1JB42jF3; YzTRh9VDainO = YzTRh9VDainO +1) {
            s5NDkX[kFp94V].WlLPfr[s5NDkX[kFp94V].OxFeI0NVba - YzTRh9VDainO] = s5NDkX[kFp94V].M9mh4Y[s5NDkX[kFp94V].OxFeI0NVba - YzTRh9VDainO] - s5NDkX[kFp94V].wCrXY4[s5NDkX[kFp94V].hOhR1JB42jF3 - YzTRh9VDainO] + '0';
            if (s5NDkX[kFp94V].WlLPfr[s5NDkX[kFp94V].OxFeI0NVba - YzTRh9VDainO] < '0') {
                s5NDkX[kFp94V].M9mh4Y[s5NDkX[kFp94V].OxFeI0NVba - YzTRh9VDainO -1]--;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                s5NDkX[kFp94V].WlLPfr[s5NDkX[kFp94V].OxFeI0NVba - YzTRh9VDainO] += (737 - 727);
            };
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
        for (YzTRh9VDainO = 0; YzTRh9VDainO < s5NDkX[kFp94V].OxFeI0NVba - s5NDkX[kFp94V].hOhR1JB42jF3; YzTRh9VDainO = YzTRh9VDainO +1)
            s5NDkX[kFp94V].WlLPfr[YzTRh9VDainO] = s5NDkX[kFp94V].M9mh4Y[YzTRh9VDainO];
        s5NDkX[kFp94V].WlLPfr[s5NDkX[kFp94V].OxFeI0NVba] = '\0';
        printf ("%s\n", s5NDkX[kFp94V].WlLPfr);
    };
}

