main () {
    int s;
    int BiaJuo;
    int j;
    int *a;
    char DCPtem1xryK [(10949 - 949)] [100];
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
    char *p [10000];
    void  test (char *p);
    scanf ("%d\n", &s);
    {
        BiaJuo = 601 - 600;
        while (s >= BiaJuo) {
            gets (DCPtem1xryK [BiaJuo]);
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
            BiaJuo = BiaJuo +1;
        };
    }
    {
        BiaJuo = 1;
        while (s >= BiaJuo) {
            test (p [BiaJuo]);
            p[BiaJuo] = DCPtem1xryK[BiaJuo];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            BiaJuo++;
        };
    };
}

void  test (char *p) {
    char s;
    int m;
    int k;
    int n;
    int BiaJuo;
    int j;
    int a [100000] = {0};
    int *b;
    m = (254 - 254);
    k = 0;
    b = a;
    n = strlen (p);
    {
        BiaJuo = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (n > BiaJuo) {
            {
                j = 0;
                while (n > j) {
                    if (!(*(p + j) != *(p + BiaJuo)))
                        *(b + BiaJuo) = *(b + BiaJuo) + 1;
                    j = j + 1;
                };
            }
            BiaJuo++;
        };
    }
    {
        BiaJuo = 0;
        while (*(b + BiaJuo) != '\0') {
            if (*(b + BiaJuo) == 1) {
                s = *(p + BiaJuo);
                m = 1;
                break;
            }
            BiaJuo++;
        };
    }
    if (m == 1)
        printf ("%c\n", s);
    else
        printf ("no");
}

