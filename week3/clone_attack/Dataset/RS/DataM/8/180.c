int len1, len2;
int *sz1, *soRHXr;

void  P9kLPzA4Z7OH () {
    int HoVBCaO0;
    scanf ("%d%d", &len1, &len2);
    sz1 = (int *) malloc (LEN *(len1 + len2));
    {
        HoVBCaO0 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len1 > HoVBCaO0) {
            scanf ("%d", sz1 + HoVBCaO0);
            HoVBCaO0 = HoVBCaO0 +1;
        };
    }
    soRHXr = (int *) malloc (LEN *len2);
    for (HoVBCaO0 = 0; len2 > HoVBCaO0; HoVBCaO0 = HoVBCaO0 +1)
        scanf ("%d", soRHXr + HoVBCaO0);
}

void  sort () {
    int HoVBCaO0;
    int j;
    int rzBKljUg;
    {
        HoVBCaO0 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (HoVBCaO0 < len1) {
            for (j = HoVBCaO0 +(823 - 822); len1 > j; j++)
                if (sz1[j] < sz1[HoVBCaO0]) {
                    rzBKljUg = sz1[HoVBCaO0];
                    sz1[HoVBCaO0] = sz1[j];
                    sz1[j] = rzBKljUg;
                }
            HoVBCaO0++;
        };
    }
    {
        HoVBCaO0 = 0;
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
        while (len2 > HoVBCaO0) {
            for (j = HoVBCaO0 +1; len2 > j; j++)
                if (soRHXr[j] < soRHXr[HoVBCaO0]) {
                    rzBKljUg = soRHXr[HoVBCaO0];
                    soRHXr[HoVBCaO0] = soRHXr[j];
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
                    soRHXr[j] = rzBKljUg;
                }
            HoVBCaO0++;
        };
    };
}

void  SGEaB5S () {
    int HoVBCaO0;
    for (HoVBCaO0 = 0; HoVBCaO0 < len2; HoVBCaO0 = HoVBCaO0 +1) {
        sz1[len1 + HoVBCaO0] = soRHXr[HoVBCaO0];
    };
}

void  print () {
    int HoVBCaO0;
    printf ("%d", sz1[0]);
    for (HoVBCaO0 = 1; HoVBCaO0 < len1 + len2; HoVBCaO0++) {
        printf (" %d", sz1[HoVBCaO0]);
    };
}

void  main () {
    P9kLPzA4Z7OH ();
    sort ();
    SGEaB5S ();
    print ();
}

