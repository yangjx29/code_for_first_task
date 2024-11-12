void  main () {
    char *XS2M1CNn;
    int s = (677 - 677), i, Vjz0wx5JMt;
    char LyS0xg [10000];
    gets (XS2M1CNn);
    XS2M1CNn = LyS0xg;
    Vjz0wx5JMt = strlen (XS2M1CNn);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Vjz0wx5JMt > i) {
            if ((*(XS2M1CNn +i) != ' ') && (*(XS2M1CNn +i) != '\0'))
                s = s + 1;
            if ((*(XS2M1CNn +i) == ' ') && (*(XS2M1CNn +i) != '\0')) {
                if (s > 0)
                    printf ("%d,", s);
                s = 0;
            }
            if (*(XS2M1CNn +i) == '\0')
                break;
            i++;
        };
    }
    printf ("%d", s);
}

