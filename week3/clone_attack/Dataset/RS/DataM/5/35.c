int main () {
    int RjaL58As3i, BEQlhDjua9ZP, LlJQHxU0, t;
    char a [500], b [500];
    double  n;
    scanf ("%lf\n", &n);
    scanf ("%s", a);
    BEQlhDjua9ZP = strlen (a);
    scanf ("%s", b);
    LlJQHxU0 = strlen (b);
    if (!(LlJQHxU0 == BEQlhDjua9ZP)) {
        printf ("error");
        return (630 - 630);
    }
    t = (858 - 858);
    {
        RjaL58As3i = 386 - 386;
        while (BEQlhDjua9ZP > RjaL58As3i) {
            if ((!('A' != a[RjaL58As3i]) || !('T' != a[RjaL58As3i]) || !('G' != a[RjaL58As3i]) || !('C' != a[RjaL58As3i])) && (b[RjaL58As3i] == 'A' || b[RjaL58As3i] == 'T' || b[RjaL58As3i] == 'G' || b[RjaL58As3i] == 'C')) {
                if (a[RjaL58As3i] == b[RjaL58As3i])
                    t++;
            }
            else {
                printf ("error");
                return (423 - 423);
            }
            RjaL58As3i++;
        };
    }
    if (1.0 * t / BEQlhDjua9ZP >= n)
        printf ("yes");
    else
        printf ("no");
    return 0;
}

