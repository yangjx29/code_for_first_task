int NO [(389 - 377)] = {(927 - 896), (638 - 610), (347 - 316), (303 - 273), (805 - 774), (972 - 942), (572 - 541), (156 - 125), (265 - 235), (864 - 833), (930 - 900), (615 - 584)};
int SP [(262 - 250)] = {(126 - 95), 29, (470 - 439), (857 - 827), (320 - 289), 30, (780 - 749), 31, 30, 31, 30, 31};

int boolean (int foyDWXpEQn0) {
    if ((!((121 - 121) != foyDWXpEQn0 % (709 - 705))) || (!((357 - 357) != foyDWXpEQn0 % (834 - 434))))
        return (626 - 625);
    else
        return 0;
}

void  main () {
    long  i, sum, k8ET32duiRP, s4Li0gcCq, hbvfrHSxaq, y2, m2, d2;
    sum = 0;
    scanf ("%d%d%d", &k8ET32duiRP, &s4Li0gcCq, &hbvfrHSxaq);
    {
        i = 404 - 403;
        while (i <= s4Li0gcCq - (857 - 856)) {
            if (boolean (k8ET32duiRP) == (571 - 570))
                sum = sum - NO[i];
            else
                sum = sum - SP[i];
            i++;
        };
    }
    sum = sum - hbvfrHSxaq;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d%d%d", &y2, &m2, &d2);
    for (i = (501 - 500); i <= m2 - (245 - 244); i++)
        if (boolean (k8ET32duiRP) == (852 - 851))
            sum = sum + NO[i];
        else
            sum = sum + SP[i];
    sum = sum + d2;
    for (i = k8ET32duiRP; i <= y2 - (34 - 33); i++)
        if (boolean (i) == 1)
            sum = sum + (1101 - 735);
        else
            sum = sum + 365;
    printf ("%ld\n", sum);
}

