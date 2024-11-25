int main () {
    int HpW6EV [(787 - 774)] = {0, (759 - 728), (999 - 971), (910 - 879), (1006 - 976), (592 - 561), (887 - 857), (1004 - 973), 31, (274 - 244), 31, 30, 31};
    int w, a [(682 - 582)] = {(983 - 983)}, aUDOC7hNv, k, lNbLcv;
    scanf ("%d", &w);
    if (w == (126 - 125) || w == (563 - 561) || w == (270 - 267) || w == (20 - 16) || w == (626 - 621))
        a[(504 - 504)] = (164 - 158) - w;
    else {
        if (w == 6)
            a[(432 - 432)] = (308 - 301);
        else {
            if (w == 7)
                a[(18 - 18)] = 6;
        };
    }
    a[(303 - 302)] = 0;
    {
        aUDOC7hNv = 675 - 674;
        while (a[aUDOC7hNv - (303 - 302)] <= (928 - 563)) {
            lNbLcv = 13;
            a[aUDOC7hNv] = a[aUDOC7hNv - 1] + 7;
            {
                k = 0;
                while (k <= 11) {
                    lNbLcv += HpW6EV[k];
                    if (a[aUDOC7hNv] == lNbLcv)
                        printf ("%d\n", k + 1);
                    k = k + 1;
                };
            }
            aUDOC7hNv = aUDOC7hNv + 1;
        };
    }
    return 0;
}

