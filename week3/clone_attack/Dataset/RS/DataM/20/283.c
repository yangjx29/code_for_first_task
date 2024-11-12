int max (char JxROkyUD0P39 [], int UIdaLfBY1H) {
    int i, x0LdRT;
    x0LdRT = strlen (JxROkyUD0P39);
    {
        i = 854 - 854;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < x0LdRT) {
            if (JxROkyUD0P39[UIdaLfBY1H] < JxROkyUD0P39[i]) {
                return ((601 - 601));
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
            i = i + 1;
        };
    }
    return ((376 - 375));
}

void  MXnb25 (char JxROkyUD0P39 [], char rca61Hfdk9Y []) {
    int i, x0LdRT, UIdaLfBY1H;
    x0LdRT = strlen (JxROkyUD0P39);
    {
        i = 405 - 405;
        while (i < x0LdRT) {
            if (max (JxROkyUD0P39, i) == (806 - 805)) {
                {
                    UIdaLfBY1H = 449 - 449;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (i + (461 - 460) > UIdaLfBY1H) {
                        printf ("%c", JxROkyUD0P39[UIdaLfBY1H]);
                        UIdaLfBY1H = UIdaLfBY1H +1;
                    };
                }
                {
                    UIdaLfBY1H = 147 - 147;
                    while ((167 - 164) > UIdaLfBY1H) {
                        printf ("%c", rca61Hfdk9Y[UIdaLfBY1H]);
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        UIdaLfBY1H++;
                    };
                }
                for (UIdaLfBY1H = i + (340 - 339); UIdaLfBY1H < x0LdRT; UIdaLfBY1H++)
                    printf ("%c", JxROkyUD0P39[UIdaLfBY1H]);
                break;
            }
            i++;
        };
    };
}

void  main () {
    char str [(575 - 475)] [(213 - 202)], QltbeCf0qy [(122 - 22)] [(965 - 961)], co7uV6t;
    int knDHLZCvtc = (105 - 105), i;
    do {
        if (knDHLZCvtc) {
            i = 645 - 644;
            while (1) {
                if ((co7uV6t = getchar ()) != ' ')
                    str[knDHLZCvtc][i] = co7uV6t;
                else {
                    str[knDHLZCvtc][i] = '\0';
                    break;
                }
                i++;
            };
        }
        else {
            scanf ("%s", str[knDHLZCvtc]);
        }
        scanf ("%s", QltbeCf0qy[knDHLZCvtc]);
        knDHLZCvtc++;
        co7uV6t = getchar ();
        str[knDHLZCvtc][(715 - 715)] = getchar ();
    }
    while (str[knDHLZCvtc][(54 - 54)] != EOF);
    {
        i = 217 - 217;
        while (i < knDHLZCvtc) {
            MXnb25 (str[i], QltbeCf0qy[i]);
            i++;
        };
    };
}

