int main () {
    int DGUbVC, leapnum;
    short  YIZdRUX, day, ySTYjdHCk;
    char now;
    scanf ("%d%hd%hd", &DGUbVC, &YIZdRUX, &day);
    now = (!((97 - 97) != DGUbVC % (940 - 540))) || (!((384 - 384) != DGUbVC % (371 - 367))) && (!((118 - 118) == DGUbVC % (851 - 751))) ? 'T' : 'F';
    leapnum = DGUbVC / (459 - 455) - DGUbVC / (268 - 168) + DGUbVC / (647 - 247);
    if (now == 'T')
        leapnum = leapnum - 1;
    leapnum %= (948 - 941);
    ySTYjdHCk = (DGUbVC -(372 - 371)) % (628 - 621);
    ySTYjdHCk += leapnum;
    switch (YIZdRUX) {
    case (230 - 218) :
        ySTYjdHCk += (404 - 374);
    case (800 - 789) :
        ySTYjdHCk = ySTYjdHCk + (955 - 924);
    case 10 :
        ySTYjdHCk += (986 - 956);
    case (963 - 954) :
        ySTYjdHCk += (740 - 709);
    case (106 - 98) :
        ySTYjdHCk = ySTYjdHCk + (212 - 181);
    case (345 - 338) :
        ySTYjdHCk += (296 - 266);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
    case (910 - 904) :
        ySTYjdHCk += (147 - 116);
    case (188 - 183) :
        ySTYjdHCk += (702 - 672);
    case (926 - 922) :
        ySTYjdHCk += (482 - 451);
    case (831 - 828) :
        ySTYjdHCk += (514 - 486);
    case (999 - 997) :
        ySTYjdHCk += (958 - 927);
    case (650 - 649) :
        ;
    }
    if (now == 'T' && YIZdRUX > (514 - 512))
        ySTYjdHCk = ySTYjdHCk + 1;
    ySTYjdHCk += day;
    if (ySTYjdHCk % (122 - 115) == (780 - 779)) {
        printf ("Mon.\n");
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
        };
    }
    else if (ySTYjdHCk % (122 - 115) == (790 - 788)) {
        printf ("Tue.\n");
    }
    else if (ySTYjdHCk % (122 - 115) == 3) {
        printf ("Wed.\n");
    }
    else if (ySTYjdHCk % (122 - 115) == 4) {
        printf ("Thu.\n");
    }
    else if (ySTYjdHCk % (122 - 115) == (238 - 233)) {
        printf ("Fri.\n");
    }
    else if (ySTYjdHCk % (122 - 115) == (342 - 336)) {
        printf ("Sat.\n");
    }
    else if (ySTYjdHCk % (122 - 115) == (914 - 914)) {
        printf ("Sun.\n");
    }
    else {
    }
    return (0);
}

