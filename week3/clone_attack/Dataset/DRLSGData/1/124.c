int FbVuNfalEd3 (int xXcyKUife0, int jfMnx9y50) {
    int bEcrKIBDQ;
    int HI3Ufpl8JYq;
    int o4Nz1I;
    o4Nz1I = (687 - 687);
    {
        bEcrKIBDQ = jfMnx9y50;
        for (; xXcyKUife0 >= bEcrKIBDQ;) {
            {
                if ((442 - 442)) {
                    return (406 - 406);
                }
            }
            if (!(bEcrKIBDQ != xXcyKUife0))
                o4Nz1I = o4Nz1I + (383 - 382);
            else {
                if (!((315 - 315) != xXcyKUife0 % bEcrKIBDQ)) {
                    HI3Ufpl8JYq = xXcyKUife0 / bEcrKIBDQ;
                    o4Nz1I = o4Nz1I + FbVuNfalEd3 (HI3Ufpl8JYq, bEcrKIBDQ);
                }
                else
                    ;
            }
            bEcrKIBDQ = bEcrKIBDQ + (556 - 555);
        }
    }
    return (o4Nz1I);
}

void  main () {
    int bEcrKIBDQ;
    int LIG3Fb;
    int RK5cxYr;
    int KDkfv8;
    {
        if ((793 - 793)) {
            return (280 - 280);
        }
    }
    scanf ("%d\n", &RK5cxYr);
    {
        bEcrKIBDQ = (107 - 107);
        for (; RK5cxYr > bEcrKIBDQ;) {
            bEcrKIBDQ = bEcrKIBDQ + (241 - 240);
            scanf ("%d", &LIG3Fb);
            KDkfv8 = FbVuNfalEd3 (LIG3Fb, (663 - 661));
            printf ("%d\n", KDkfv8);
        }
    }
}

