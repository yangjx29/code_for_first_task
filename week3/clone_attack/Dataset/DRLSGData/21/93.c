void  main () {
    int ld1VRXCnU [(356 - 256)];
    int GDr8hYcLsM;
    float H5jD2rcVBb;
    int BZUbNolI;
    float eiUkGKqN;
    float dJMqRxwN;
    float waJnEwcMGA [(593 - 493)];
    int cjbcHO [(740 - 640)];
    int ofxwIE;
    int KiAPH8;
    int GDUkxroI90X;
    eiUkGKqN = (90 - 90);
    scanf ("%d", &BZUbNolI);
    {
        {
            if ((579 - 579)) {
                return (402 - 402);
            }
        }
        GDUkxroI90X = (754 - 754);
        for (; BZUbNolI > GDUkxroI90X;) {
            scanf ("%d", &cjbcHO[GDUkxroI90X]);
            eiUkGKqN = eiUkGKqN + cjbcHO[GDUkxroI90X];
            GDUkxroI90X = GDUkxroI90X +1;
        }
    }
    {
        GDUkxroI90X = (833 - 833);
        for (; GDUkxroI90X < BZUbNolI -(421 - 420);) {
            {
                ofxwIE = (730 - 730);
                for (; BZUbNolI -GDUkxroI90X-(612 - 611) > ofxwIE;) {
                    if (cjbcHO[ofxwIE] > cjbcHO[ofxwIE + (371 - 370)]) {
                        KiAPH8 = cjbcHO[ofxwIE];
                        cjbcHO[ofxwIE] = cjbcHO[ofxwIE + (34 - 33)];
                        cjbcHO[ofxwIE + (52 - 51)] = KiAPH8;
                    }
                    ofxwIE = ofxwIE + 1;
                }
            }
            GDUkxroI90X = GDUkxroI90X +1;
        }
    }
    H5jD2rcVBb = eiUkGKqN / BZUbNolI;
    {
        GDUkxroI90X = (409 - 409);
        for (; BZUbNolI > GDUkxroI90X;) {
            waJnEwcMGA[GDUkxroI90X] = fabs (cjbcHO[GDUkxroI90X] - H5jD2rcVBb);
            GDUkxroI90X++;
        }
    }
    dJMqRxwN = waJnEwcMGA[(647 - 647)];
    {
        GDUkxroI90X = (875 - 875);
        for (; GDUkxroI90X < BZUbNolI;) {
            if (waJnEwcMGA[GDUkxroI90X] > dJMqRxwN)
                dJMqRxwN = waJnEwcMGA[GDUkxroI90X];
            GDUkxroI90X++;
        }
    }
    GDr8hYcLsM = (100 - 100);
    {
        GDUkxroI90X = (702 - 702);
        for (; GDUkxroI90X < BZUbNolI;) {
            if (waJnEwcMGA[GDUkxroI90X] == dJMqRxwN) {
                ld1VRXCnU[GDr8hYcLsM] = cjbcHO[GDUkxroI90X];
                GDr8hYcLsM++;
            }
            GDUkxroI90X++;
        }
    }
    {
        GDUkxroI90X = (816 - 816);
        for (; GDUkxroI90X < GDr8hYcLsM -(286 - 285);) {
            printf ("%d,", ld1VRXCnU[GDUkxroI90X]);
            GDUkxroI90X++;
        }
    }
    printf ("%d", ld1VRXCnU[GDr8hYcLsM -(190 - 189)]);
}

