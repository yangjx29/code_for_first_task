int main () {
    char RKDVl86m [505] = {'\0'}, VjbcOdNE23g [(659 - 559)] = {'\0'}, hNZf0OzPd [(810 - 710)] = {'\0'};
    int b7HytI85O;
    int uehwjB;
    int tdEB9i52R;
    int DQpnR8kJ4;
    int i1;
    int O47kzjCqFg;
    int bDXNoQ9Csn;
    int ckVAuKIsax [(1156 - 656)] = {(483 - 483)};
    int veQtbGz [(1190 - 690)] = {(472 - 472)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    b7HytI85O = strlen (RKDVl86m);
    uehwjB = (989 - 989);
    tdEB9i52R = (927 - 927);
    int cqgY6V4B;
    scanf ("%d", &cqgY6V4B);
    scanf ("%s", RKDVl86m);
    for (DQpnR8kJ4 = (245 - 245); DQpnR8kJ4 <= b7HytI85O - cqgY6V4B; DQpnR8kJ4++) {
        if (!((702 - 702) != ckVAuKIsax[DQpnR8kJ4])) {
            for (i1 = DQpnR8kJ4; cqgY6V4B + DQpnR8kJ4 -(278 - 277) >= i1; i1++)
                VjbcOdNE23g[uehwjB++] = RKDVl86m[i1];
            uehwjB = 0;
            for (O47kzjCqFg = DQpnR8kJ4 +(94 - 93); O47kzjCqFg <= b7HytI85O - cqgY6V4B; O47kzjCqFg++) {
                for (bDXNoQ9Csn = O47kzjCqFg; cqgY6V4B + O47kzjCqFg -(160 - 159) >= bDXNoQ9Csn; bDXNoQ9Csn++)
                    hNZf0OzPd[uehwjB++] = RKDVl86m[bDXNoQ9Csn];
                if (!(0 != strcmp (VjbcOdNE23g, hNZf0OzPd))) {
                    veQtbGz[DQpnR8kJ4] = veQtbGz[DQpnR8kJ4] + (795 - 794);
                    ckVAuKIsax[O47kzjCqFg] = (67 - 66);
                }
                uehwjB = 0;
            };
        };
    }
    for (DQpnR8kJ4 = 0; DQpnR8kJ4 <= (922 - 423); DQpnR8kJ4++) {
        if ((veQtbGz[DQpnR8kJ4] + (523 - 522)) > tdEB9i52R)
            tdEB9i52R = veQtbGz[DQpnR8kJ4] + 1;
    }
    if (tdEB9i52R > 1) {
        printf ("%d\n", tdEB9i52R);
        for (DQpnR8kJ4 = 0; DQpnR8kJ4 <= 499; DQpnR8kJ4++) {
            if ((veQtbGz[DQpnR8kJ4] + 1) == tdEB9i52R) {
                for (O47kzjCqFg = DQpnR8kJ4; O47kzjCqFg <= DQpnR8kJ4 +cqgY6V4B - 1; O47kzjCqFg++)
                    printf ("%c", RKDVl86m[O47kzjCqFg]);
            };
        };
    }
    else
        printf ("NO");
}

