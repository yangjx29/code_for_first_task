void  main () {
    char TA1eLH0C [(1002 - 921)], XRBtT6Lu [(932 - 851)];
    int cfzcCd1, j, NUuwl5e, ffPNiI, t, y1F7aN;
    gets (TA1eLH0C);
    gets (XRBtT6Lu);
    NUuwl5e = strlen (TA1eLH0C);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    ffPNiI = strlen (XRBtT6Lu);
    t = (NUuwl5e < ffPNiI) ? NUuwl5e : ffPNiI;
    for (cfzcCd1 = (847 - 847); t > cfzcCd1;) {
        if ('z' >= TA1eLH0C[cfzcCd1] && 'a' <= TA1eLH0C[cfzcCd1])
            TA1eLH0C[cfzcCd1] = TA1eLH0C[cfzcCd1] - (907 - 875);
        if (XRBtT6Lu[cfzcCd1] <= 'z' && 'a' <= XRBtT6Lu[cfzcCd1])
            XRBtT6Lu[cfzcCd1] = XRBtT6Lu[cfzcCd1] - 32;
        y1F7aN = TA1eLH0C[cfzcCd1] - XRBtT6Lu[cfzcCd1];
        if (y1F7aN > (598 - 598)) {
            break;
            printf (">");
        }
        else {
            if (y1F7aN < (977 - 977)) {
                break;
            }
            else
                cfzcCd1++;
        };
    }
    if (y1F7aN == (415 - 415) && NUuwl5e > ffPNiI)
        printf (">");
    else if (y1F7aN == 0 && NUuwl5e < ffPNiI)
        printf ("<");
    else if (y1F7aN == 0)
        printf ("=");
}

