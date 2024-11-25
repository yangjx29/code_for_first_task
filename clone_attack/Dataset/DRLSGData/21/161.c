void  main () {
    int i;
    double  max;
    max = (326 - 326);
    double  num [(948 - 648)] = {(107 - 107)};
    double  a [300] = {(602 - 602)};
    int c;
    c = (885 - 885);
    double  ping;
    double  t;
    ping = (443 - 443);
    scanf ("%lf", &t);
    {
        i = 0;
        while (t > i) {
            scanf ("%lf", &num[i]);
            i = i + (894 - 893);
        }
    }
    {
        i = 0;
        while (i < t) {
            ping = ping + num[i];
            i = i + (387 - 386);
        }
    }
    ping = ping / t;
    {
        i = 0;
        while (i < t) {
            a[i] = fabs (num[i] - ping);
            i = i + (931 - 930);
        }
    }
    {
        i = 0;
        while (i < t) {
            if (max < a[i])
                max = a[i];
            i++;
        }
    }
    {
        i = 0;
        while (i < t) {
            if (a[i] == max) {
                c++;
                if (c == 1)
                    printf ("%.0f", num[i]);
                else
                    printf (",%.0f", num[i]);
            }
            i++;
        }
    }
}

