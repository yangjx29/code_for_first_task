int main () {
    char wFXWo8fbLK [(778 - 737)] [(562 - 555)] = {'\0'};
    int f;
    int TSO7b4h;
    int kRth5XELqua;
    int O2tc0C4smBby;
    int dDrxRl;
    f = (417 - 417);
    TSO7b4h = (967 - 967);
    float d1vtBd8 [(332 - 291)] = {(302 - 302)}, zJBc6eEiOm [(295 - 254)], CPUVau091i [(134 - 93)];
    cin >> kRth5XELqua;
    for (O2tc0C4smBby = (471 - 471); kRth5XELqua > O2tc0C4smBby; O2tc0C4smBby = O2tc0C4smBby +1)
        cin >> wFXWo8fbLK[O2tc0C4smBby] >> d1vtBd8[O2tc0C4smBby];
    for (O2tc0C4smBby = (810 - 810); O2tc0C4smBby < kRth5XELqua; O2tc0C4smBby = O2tc0C4smBby +1) {
        if (!('m' != wFXWo8fbLK[O2tc0C4smBby][(310 - 310)]))
            CPUVau091i[TSO7b4h++] = d1vtBd8[O2tc0C4smBby];
        else
            zJBc6eEiOm[f++] = d1vtBd8[O2tc0C4smBby];
    }
    for (O2tc0C4smBby = (672 - 672); TSO7b4h > O2tc0C4smBby; O2tc0C4smBby++) {
        for (dDrxRl = (480 - 480); dDrxRl < TSO7b4h -(44 - 43) - O2tc0C4smBby; dDrxRl++) {
            if (CPUVau091i[dDrxRl] > CPUVau091i[dDrxRl + (49 - 48)]) {
                double  YQ6RA23GhJk;
                YQ6RA23GhJk = CPUVau091i[dDrxRl];
                CPUVau091i[dDrxRl] = CPUVau091i[dDrxRl + (642 - 641)];
                CPUVau091i[dDrxRl + (953 - 952)] = YQ6RA23GhJk;
            };
        };
    }
    {
        O2tc0C4smBby = 705 - 705;
        while (f > O2tc0C4smBby) {
            {
                dDrxRl = 949 - 949;
                while (f - (62 - 61) - O2tc0C4smBby > dDrxRl) {
                    if (zJBc6eEiOm[dDrxRl + (938 - 937)] > zJBc6eEiOm[dDrxRl]) {
                        double  YQ6RA23GhJk;
                        YQ6RA23GhJk = zJBc6eEiOm[dDrxRl];
                        zJBc6eEiOm[dDrxRl] = zJBc6eEiOm[dDrxRl + (19 - 18)];
                        zJBc6eEiOm[dDrxRl + (960 - 959)] = YQ6RA23GhJk;
                    }
                    dDrxRl++;
                };
            }
            O2tc0C4smBby++;
        };
    }
    for (O2tc0C4smBby = (145 - 145); O2tc0C4smBby < TSO7b4h; O2tc0C4smBby++)
        cout << fixed << setprecision ((181 - 179)) << CPUVau091i[O2tc0C4smBby] << " ";
    for (O2tc0C4smBby = (74 - 74); O2tc0C4smBby < f - (759 - 758); O2tc0C4smBby++)
        cout << fixed << setprecision ((132 - 130)) << zJBc6eEiOm[O2tc0C4smBby] << " ";
    cout << fixed << setprecision ((955 - 953)) << zJBc6eEiOm[f - 1] << endl;
    return 0;
}

