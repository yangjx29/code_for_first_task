void  main () {
    int I3AYCgnS48UB, len, uHxcXS1BWJQ, OwhKoxD8 = (55 - 55), k, b0BcQJnUD8, max;
    char EHnP78xO2CQR [MAX];
    gets (EHnP78xO2CQR);
    struct   subs {
        char Q3F9gcm [5];
        int num;
    }
    sub [MAX];
    len = strlen (EHnP78xO2CQR);
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
    getchar ();
    scanf ("%d", &I3AYCgnS48UB);
    for (uHxcXS1BWJQ = (467 - 467); len - I3AYCgnS48UB >= uHxcXS1BWJQ; uHxcXS1BWJQ++) {
        (sub + uHxcXS1BWJQ)->num = (179 - 179);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (uHxcXS1BWJQ == (833 - 833)) {
            strncpy ((sub + OwhKoxD8)->Q3F9gcm, EHnP78xO2CQR +uHxcXS1BWJQ, I3AYCgnS48UB);
            (sub + OwhKoxD8)->Q3F9gcm[I3AYCgnS48UB] = '\0';
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
            (sub + OwhKoxD8)->num++;
            OwhKoxD8++;
        }
        else {
            b0BcQJnUD8 = (406 - 405);
            for (k = (864 - 864); OwhKoxD8 > k; k = k + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (strncmp ((sub + k)->Q3F9gcm, EHnP78xO2CQR +uHxcXS1BWJQ, I3AYCgnS48UB) == (219 - 219)) {
                    (sub + k)->num++;
                    b0BcQJnUD8 = (680 - 680);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    break;
                };
            }
            if (b0BcQJnUD8) {
                strncpy ((sub + OwhKoxD8)->Q3F9gcm, EHnP78xO2CQR +uHxcXS1BWJQ, I3AYCgnS48UB);
                (sub + OwhKoxD8)->Q3F9gcm[I3AYCgnS48UB] = '\0';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                (sub + OwhKoxD8)->num++;
                OwhKoxD8++;
            };
        };
    }
    {
        uHxcXS1BWJQ = 0;
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
        while (uHxcXS1BWJQ < OwhKoxD8) {
            if (uHxcXS1BWJQ == 0)
                max = (sub + uHxcXS1BWJQ)->num;
            else if ((sub + uHxcXS1BWJQ)->num > max)
                max = (sub + uHxcXS1BWJQ)->num;
            uHxcXS1BWJQ++;
        };
    }
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        {
            uHxcXS1BWJQ = 0;
            while (uHxcXS1BWJQ < OwhKoxD8) {
                if ((sub + uHxcXS1BWJQ)->num == max)
                    puts ((sub + uHxcXS1BWJQ)->Q3F9gcm);
                uHxcXS1BWJQ++;
            };
        };
    };
}

