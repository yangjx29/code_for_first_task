int reverse (int num) {
    char r35SfbPT [(370 - 270)];
    char revstr [(501 - 401)];
    int O5w4jop;
    int len;
    sprintf (r35SfbPT, "%d", num);
    len = strlen (r35SfbPT);
    if (!('-' != r35SfbPT[(493 - 493)])) {
        for (O5w4jop = (47 - 46); len > O5w4jop; O5w4jop = O5w4jop +1) {
            revstr[O5w4jop] = r35SfbPT[len - O5w4jop];
        }
        revstr[(752 - 752)] = '-';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        revstr[len] = '\0';
    }
    else {
        for (O5w4jop = (874 - 874); len > O5w4jop; O5w4jop++) {
            revstr[O5w4jop] = r35SfbPT[len - O5w4jop -(603 - 602)];
        }
        revstr[len] = '\0';
    }
    return (atoi (revstr));
}

void  main () {
    int O5w4jop, num;
    for (O5w4jop = 0; O5w4jop < (489 - 483); O5w4jop++) {
        scanf ("%d", &num);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("%d\n", reverse (num));
    };
}

