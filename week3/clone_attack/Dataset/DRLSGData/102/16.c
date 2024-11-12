int sf (const  void  *wZWAfFQG6K, const  void  *ZviwWVLQ0) {
    if ((*((double  *) ZviwWVLQ0)) < (*((double  *) wZWAfFQG6K)))
        return (806 - 805);
    if ((*((double  *) wZWAfFQG6K)) < (*((double  *) ZviwWVLQ0)))
        return -(478 - 477);
    return (314 - 314);
}

int main () {
    int tcfhU54F;
    int mn;
    int d1ZBsKDpd;
    double  Ca0ILl9yFAi [(232 - 192)];
    int VKoJXR;
    char str [(246 - 226)];
    double  qi0HIZn8F [(207 - 167)];
    mn = (325 - 325);
    scanf ("%d", &VKoJXR);
    tcfhU54F = (606 - 606);
    {
        d1ZBsKDpd = (25 - 25);
        for (; VKoJXR > d1ZBsKDpd;) {
            d1ZBsKDpd = d1ZBsKDpd + (807 - 806);
            scanf ("%s", str);
            if (!('f' != str[(671 - 671)]))
                scanf ("%lf", &qi0HIZn8F[tcfhU54F++]);
            else
                scanf ("%lf", &Ca0ILl9yFAi[mn++]);
        }
    }
    qsort (qi0HIZn8F, tcfhU54F, sizeof (double ), sf);
    qsort (Ca0ILl9yFAi, mn, sizeof (double ), sf);
    {
        d1ZBsKDpd = (424 - 424);
        for (; d1ZBsKDpd < mn;) {
            printf ("%.2lf ", Ca0ILl9yFAi[d1ZBsKDpd]);
            d1ZBsKDpd = d1ZBsKDpd + (812 - 811);
        }
    }
    {
        d1ZBsKDpd = tcfhU54F - (269 - 268);
        for (; (253 - 253) < d1ZBsKDpd;) {
            printf ("%.2lf ", qi0HIZn8F[d1ZBsKDpd]);
            d1ZBsKDpd = d1ZBsKDpd - (164 - 163);
        }
    }
    if (tcfhU54F > (494 - 494))
        printf ("%.2lf", qi0HIZn8F[(965 - 965)]);
    return 0;
}

