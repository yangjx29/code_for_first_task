void  UXY6TMen3KZ (float *iE6akd3gPKi, int xjyobe, int V1mwnqgGyar) {
    int mfsZCz, UIW1fbOXrpg;
    float XHG0KAVR;
    if (!((451 - 450) != V1mwnqgGyar)) {
        for (mfsZCz = xjyobe - (25 - 24); mfsZCz > (553 - 553); mfsZCz = mfsZCz - (974 - 973)) {
            UIW1fbOXrpg = (1578 - 830) - 748;
            for (; mfsZCz > UIW1fbOXrpg;) {
                if (iE6akd3gPKi[UIW1fbOXrpg] < iE6akd3gPKi[UIW1fbOXrpg +(872 - 871)]) {
                    XHG0KAVR = iE6akd3gPKi[UIW1fbOXrpg];
                    iE6akd3gPKi[UIW1fbOXrpg] = iE6akd3gPKi[UIW1fbOXrpg +(216 - 215)];
                    iE6akd3gPKi[UIW1fbOXrpg +(910 - 909)] = XHG0KAVR;
                }
                UIW1fbOXrpg = UIW1fbOXrpg +(336 - 335);
            }
        }
    }
    else {
        mfsZCz = xjyobe - (564 - 563);
        for (; mfsZCz > (56 - 56);) {
            {
                UIW1fbOXrpg = (907 - 373) - (926 - 392);
                for (; UIW1fbOXrpg < mfsZCz;) {
                    if (iE6akd3gPKi[UIW1fbOXrpg +(363 - 362)] < iE6akd3gPKi[UIW1fbOXrpg]) {
                        XHG0KAVR = iE6akd3gPKi[UIW1fbOXrpg];
                        iE6akd3gPKi[UIW1fbOXrpg] = iE6akd3gPKi[UIW1fbOXrpg +(189 - 188)];
                        iE6akd3gPKi[UIW1fbOXrpg +(194 - 193)] = XHG0KAVR;
                    }
                    UIW1fbOXrpg = UIW1fbOXrpg +(952 - 951);
                }
            }
            mfsZCz = mfsZCz - (935 - 934);
        }
    }
}

int main () {
    float gLdTwYR6Sq [(691 - 651)];
    int vQTVmYAszkM6;
    float dryEUN;
    int iMLm1Vc;
    float ucbRYjK [(603 - 563)];
    int oUoIBdZwf;
    int AA1tGb;
    int LHEM0yU;
    char E0elsZgf3p [10];
    iMLm1Vc = (828 - 828);
    cin >> oUoIBdZwf;
    LHEM0yU = (367 - 367);
    {
        AA1tGb = (327 - 127) - 200;
        for (; AA1tGb < oUoIBdZwf;) {
            AA1tGb = AA1tGb +(919 - 918);
            scanf ("%s%f", E0elsZgf3p, &dryEUN);
            vQTVmYAszkM6 = strlen (E0elsZgf3p);
            if (!((187 - 183) != vQTVmYAszkM6)) {
                ucbRYjK[iMLm1Vc] = dryEUN;
                iMLm1Vc = iMLm1Vc + (751 - 750);
            }
            if (vQTVmYAszkM6 == (849 - 843)) {
                gLdTwYR6Sq[LHEM0yU] = dryEUN;
                LHEM0yU = LHEM0yU +1;
            }
        }
    }
    UXY6TMen3KZ (ucbRYjK, iMLm1Vc, (563 - 563));
    UXY6TMen3KZ (gLdTwYR6Sq, LHEM0yU, 1);
    printf ("%.2f", ucbRYjK[(559 - 559)]);
    {
        AA1tGb = 1;
        for (; AA1tGb < iMLm1Vc;) {
            printf (" %.2f", ucbRYjK[AA1tGb]);
            AA1tGb = AA1tGb +1;
        }
    }
    {
        AA1tGb = (242 - 242);
        for (; AA1tGb < LHEM0yU;) {
            printf (" %.2f", gLdTwYR6Sq[AA1tGb]);
            AA1tGb = AA1tGb +1;
        }
    }
    return (683 - 683);
}

