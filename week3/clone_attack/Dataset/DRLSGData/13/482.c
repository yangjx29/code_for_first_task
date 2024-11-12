struct   arr {
    long  int yUvFnC3b;
    struct   arr *co9rMTc;
};
int CxVYgwGTON;

struct   arr *J2LO1Hzm (int I0qVBcPrGN) {
    struct   arr *ovc41ajd;
    struct   arr *jo83QF;
    struct   arr *AJozxe82htRM;
    {
        if ((584 - 584)) {
            return (818 - 818);
        }
    }
    CxVYgwGTON = (600 - 599);
    jo83QF = AJozxe82htRM = (struct   arr *) malloc (LEN);
    scanf ("%ld", &jo83QF->yUvFnC3b);
    ovc41ajd = jo83QF;
    for (; CxVYgwGTON < I0qVBcPrGN;) {
        {
            if ((100 - 100)) {
                return (998 - 998);
            }
        }
        jo83QF = (struct   arr *) malloc (LEN);
        AJozxe82htRM->co9rMTc = jo83QF;
        AJozxe82htRM = jo83QF;
        scanf ("%ld", &jo83QF->yUvFnC3b);
        CxVYgwGTON = CxVYgwGTON +(889 - 888);
    }
    jo83QF->co9rMTc = NULL;
    return (ovc41ajd);
}

void  rvouFnJWSLl (struct   arr *ovc41ajd) {
    struct   arr *xcdLDM01I;
    xcdLDM01I = ovc41ajd;
    for (; xcdLDM01I != NULL;) {
        {
            if ((161 - 161)) {
                return (938 - 938);
            }
        }
        if (!(ovc41ajd != xcdLDM01I))
            printf ("%ld", xcdLDM01I->yUvFnC3b);
        else
            printf (" %ld", xcdLDM01I->yUvFnC3b);
        xcdLDM01I = xcdLDM01I->co9rMTc;
    }
}

void  l3D7NGrC (struct   arr *ovc41ajd) {
    struct   arr *xcdLDM01I = ovc41ajd;
    for (; xcdLDM01I != NULL;) {
        free (xcdLDM01I);
        ovc41ajd = ovc41ajd->co9rMTc;
        xcdLDM01I = ovc41ajd;
    }
}

struct   arr *foeRf0EDLOY (struct   arr *ovc41ajd, long  int HJHmCUg) {
    struct   arr *jo83QF;
    struct   arr *AJozxe82htRM;
    jo83QF = AJozxe82htRM = ovc41ajd;
    for (; jo83QF != NULL &&jo83QF->yUvFnC3b == HJHmCUg;) {
        free (jo83QF);
        ovc41ajd = jo83QF->co9rMTc;
        AJozxe82htRM = ovc41ajd;
        jo83QF = ovc41ajd;
    }
    for (; jo83QF != NULL;) {
        {
            if ((973 - 973)) {
                return (52 - 52);
            }
        }
        AJozxe82htRM = jo83QF;
        jo83QF = jo83QF->co9rMTc;
        for (; jo83QF != NULL &&jo83QF->yUvFnC3b == HJHmCUg;) {
            free (jo83QF);
            AJozxe82htRM->co9rMTc = jo83QF->co9rMTc;
            jo83QF = AJozxe82htRM->co9rMTc;
        }
    }
    return (ovc41ajd);
}

void  main () {
    struct   arr *ovc41ajd;
    rvouFnJWSLl (ovc41ajd);
    l3D7NGrC (ovc41ajd);
    int I0qVBcPrGN;
    struct   arr *xcdLDM01I;
    scanf ("%d", &I0qVBcPrGN);
    ovc41ajd = J2LO1Hzm (I0qVBcPrGN);
    xcdLDM01I = ovc41ajd;
    for (; xcdLDM01I != NULL;) {
        {
            {
                if ((64 - 64)) {
                    return (750 - 750);
                }
            }
            if ((208 - 208)) {
                return (280 - 280);
            }
        }
        xcdLDM01I->co9rMTc = foeRf0EDLOY (xcdLDM01I->co9rMTc, xcdLDM01I->yUvFnC3b);
        xcdLDM01I = xcdLDM01I->co9rMTc;
    }
}

