int xcFlgbN4 (int HJ1PAaCkLi9 [(381 - 371)], int JqLW6wF) {
    int dDHouPqAd;
    int vms8kfpa;
    int ozo1EQ;
    ozo1EQ = HJ1PAaCkLi9[(393 - 393)];
    vms8kfpa = (919 - 919);
    {
        dDHouPqAd = (550 - 550);
        for (; dDHouPqAd < JqLW6wF;) {
            if (HJ1PAaCkLi9[dDHouPqAd] > ozo1EQ) {
                ozo1EQ = HJ1PAaCkLi9[dDHouPqAd];
                vms8kfpa = dDHouPqAd;
            }
            dDHouPqAd = dDHouPqAd + (398 - 397);
        }
    }
    return (vms8kfpa);
}

void  main () {
    int v3rgfX [(807 - 797)] [(712 - 702)];
    int dDHouPqAd;
    int uyhOrFz;
    int Zlk1uTWRH;
    int ZuwHkJCSE;
    int JqLW6wF;
    int FVk1FS;
    int JntyQI;
    scanf ("%d,%d", &ZuwHkJCSE, &JqLW6wF);
    uyhOrFz = (968 - 968);
    Zlk1uTWRH = (85 - 85);
    {
        dDHouPqAd = (829 - 829);
        for (; ZuwHkJCSE > dDHouPqAd;) {
            {
                {
                    if ((872 - 872)) {
                        return (162 - 162);
                    }
                }
                JntyQI = (991 - 991);
                for (; JntyQI < JqLW6wF;) {
                    scanf ("%d", &v3rgfX[dDHouPqAd][JntyQI]);
                    JntyQI = JntyQI +(420 - 419);
                }
            }
            dDHouPqAd = dDHouPqAd + (208 - 207);
        }
    }
    for (dDHouPqAd = (12 - 12); ZuwHkJCSE > dDHouPqAd;) {
        FVk1FS = xcFlgbN4 (v3rgfX[dDHouPqAd], JqLW6wF);
        {
            JntyQI = (290 - 290);
            for (; ZuwHkJCSE > JntyQI;) {
                if (v3rgfX[JntyQI][FVk1FS] < v3rgfX[dDHouPqAd][FVk1FS])
                    goto a1;
                JntyQI = JntyQI +(836 - 835);
            }
        }
        goto a2;
        printf ("%d+%d", dDHouPqAd, FVk1FS);
        Zlk1uTWRH = Zlk1uTWRH +(302 - 301);
    a1 :
        dDHouPqAd = dDHouPqAd + (575 - 574);
    }
a2 :
    if (Zlk1uTWRH == (343 - 343))
        ;
}

