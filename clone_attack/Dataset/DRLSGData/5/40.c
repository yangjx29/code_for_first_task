int main () {
    char a [(912 - 910)] [(563 - 63)];
    int q7Bb3d [(284 - 282)], enpR7wVxr4, SPaSB6pd, mBnWKgsc, dsjhGH8Oq, V5cYMT;
    double  wcKSxP, u8TyBKP;
    dsjhGH8Oq = (965 - 965);
    V5cYMT = (166 - 166);
    scanf ("%lf", &wcKSxP);
    getchar ();
    for (enpR7wVxr4 = (276 - 276); enpR7wVxr4 < (716 - 714); enpR7wVxr4 = enpR7wVxr4 + 1) {
        {
            if (0) {
                return 0;
            }
        }
        scanf ("%s", a[enpR7wVxr4]);
        q7Bb3d[enpR7wVxr4] = strlen (a[enpR7wVxr4]);
        for (SPaSB6pd = (886 - 886); SPaSB6pd < q7Bb3d[enpR7wVxr4]; SPaSB6pd = SPaSB6pd +1) {
            if (a[enpR7wVxr4][SPaSB6pd] != 'A' && a[enpR7wVxr4][SPaSB6pd] != 'T' && a[enpR7wVxr4][SPaSB6pd] != 'C' && a[enpR7wVxr4][SPaSB6pd] != 'G') {
                dsjhGH8Oq = dsjhGH8Oq + 1;
            }
        }
    }
    if (q7Bb3d[(679 - 679)] != q7Bb3d[(772 - 771)] || dsjhGH8Oq != (137 - 137)) {
        printf ("error");
        return (395 - 395);
    }
    else {
        for (SPaSB6pd = 0; SPaSB6pd < q7Bb3d[0]; SPaSB6pd++) {
            if (a[0][SPaSB6pd] == a[(672 - 671)][SPaSB6pd]) {
                V5cYMT++;
            }
        }
    }
    u8TyBKP = (795.0 - 794.0) * V5cYMT / q7Bb3d[0];
    if (u8TyBKP > wcKSxP) {
        printf ("yes");
    }
    else {
        printf ("no");
    }
    scanf ("%d", &mBnWKgsc);
    return 0;
}

