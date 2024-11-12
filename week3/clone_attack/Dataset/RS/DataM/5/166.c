int main () {
    double  a;
    double  mlLu27RDH0Ok;
    int buvwGIB = 0, n, m, yDMiaH27 = 0;
    char sb [531] = {0};
    char dsb [531] = {0};
    scanf ("%lf", &a);
    scanf ("%s%s", sb, dsb);
    for (int wmWl9pS4tju = 0;
    wmWl9pS4tju < 531; wmWl9pS4tju++) {
        if (!(dsb[wmWl9pS4tju] != sb[wmWl9pS4tju]) && !(0 == sb[wmWl9pS4tju])) {
            buvwGIB = buvwGIB + 1;
        }
        if (((sb[wmWl9pS4tju] != 'A') && (!('C' == sb[wmWl9pS4tju])) && (sb[wmWl9pS4tju] != 'T') && (!('G' == sb[wmWl9pS4tju])) && (sb[wmWl9pS4tju] != 0)) || ((dsb[wmWl9pS4tju] != 'A') && (dsb[wmWl9pS4tju] != 'C') && (dsb[wmWl9pS4tju] != 'T') && (dsb[wmWl9pS4tju] != 'G') && (dsb[wmWl9pS4tju] != 0)))
            yDMiaH27 = 1;
    }
    n = strlen (sb);
    m = strlen (dsb);
    mlLu27RDH0Ok = 1.0 * buvwGIB / n;
    if (m != n || yDMiaH27 == 1)
        ;
    else if (mlLu27RDH0Ok > a) {
        printf ("yes");
    }
    else
        printf ("no");
    return 0;
}

