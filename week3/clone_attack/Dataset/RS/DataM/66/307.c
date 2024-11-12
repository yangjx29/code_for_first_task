int main () {
    int IHO8zeBiJ4Wt;
    int UCrB2dXaE9J [12] = {(798 - 767), 28, (785 - 754), (458 - 428), (805 - 774), 30, 31, 31, 30, 31, 30, 31};
    long  year, lUBkpmSlV, day, SoZ1km;
    int oH3E9zXBb;
    int b;
    int i, Cj0uxmbOrK, HA09VGZU5u7E;
    scanf ("%d%d%d", &year, &lUBkpmSlV, &day);
    if (!(0 != year % (1122 - 722))) {
        IHO8zeBiJ4Wt = 0;
        if ((474 - 472) >= lUBkpmSlV) {
            for (Cj0uxmbOrK = (233 - 232); lUBkpmSlV > Cj0uxmbOrK; Cj0uxmbOrK = Cj0uxmbOrK +1) {
                IHO8zeBiJ4Wt = IHO8zeBiJ4Wt +UCrB2dXaE9J[Cj0uxmbOrK -(34 - 33)];
            };
        }
        else {
            {
                HA09VGZU5u7E = 1;
                while (lUBkpmSlV > HA09VGZU5u7E) {
                    IHO8zeBiJ4Wt = IHO8zeBiJ4Wt +UCrB2dXaE9J[HA09VGZU5u7E -1];
                    HA09VGZU5u7E = HA09VGZU5u7E +1;
                };
            }
            IHO8zeBiJ4Wt = IHO8zeBiJ4Wt +1;
        }
        IHO8zeBiJ4Wt = IHO8zeBiJ4Wt +day;
    }
    else {
        IHO8zeBiJ4Wt = 0;
        while (400 < year) {
            year = year - 400;
        }
        oH3E9zXBb = (year - 1) / 4;
        b = (year - 1) / 100;
        IHO8zeBiJ4Wt = (868 - 503) * year + oH3E9zXBb + 1 - b;
        {
            i = 1;
            while (lUBkpmSlV > i) {
                IHO8zeBiJ4Wt = IHO8zeBiJ4Wt +UCrB2dXaE9J[i - 1];
                i++;
            };
        }
        if (!(0 != year % 4) && !(0 == year % 100))
            IHO8zeBiJ4Wt++;
        IHO8zeBiJ4Wt = IHO8zeBiJ4Wt +day;
    }
    SoZ1km = IHO8zeBiJ4Wt % 7;
    if (SoZ1km == (1001 - 999))
        printf ("Sun.\n");
    else if (SoZ1km == 3)
        ;
    else if (SoZ1km == 4)
        ;
    else if (SoZ1km == (66 - 61))
        ;
    else if (SoZ1km == 6)
        ;
    else if (SoZ1km == 0)
        ;
    else if (SoZ1km == 1)
        printf ("Sat.\n");
    return 0;
}

