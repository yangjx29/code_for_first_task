int kRrlX1B05H (const  void  *p48SNHy, const  void  *QHUTERVN8) {
    return *(int*) QHUTERVN8 -*(int*) p48SNHy;
}

main () {
    int GWxVXl;
    int FezP5JBsgWqL;
    int JyHDF1Qjbf3;
    int w29jfTJ618pA;
    int p48SNHy [(1198 - 193)];
    int h8oF9TUGBH;
    int bLaxiIwO;
    int QHUTERVN8 [(1080 - 75)];
    int m6kdwG1l;
    int rB98jv;
    for (; (703 - 702);) {
        scanf ("%d", &FezP5JBsgWqL);
        if (!((874 - 874) != FezP5JBsgWqL))
            break;
        GWxVXl = (911 - 911);
        h8oF9TUGBH = (829 - 829);
        for (JyHDF1Qjbf3 = (192 - 192); FezP5JBsgWqL > JyHDF1Qjbf3; JyHDF1Qjbf3++)
            scanf ("%d", &p48SNHy[JyHDF1Qjbf3]);
        for (JyHDF1Qjbf3 = (20 - 20); FezP5JBsgWqL > JyHDF1Qjbf3; JyHDF1Qjbf3++)
            scanf ("%d", &QHUTERVN8[JyHDF1Qjbf3]);
        w29jfTJ618pA = FezP5JBsgWqL -(558 - 557);
        rB98jv = FezP5JBsgWqL -(153 - 152);
        m6kdwG1l = (725 - 725);
        printf ("%d\n", GWxVXl *(925 - 725));
        bLaxiIwO = (577 - 577);
        for (; !((912 - 912) != bLaxiIwO);) {
            bLaxiIwO = (661 - 660);
            for (JyHDF1Qjbf3 = (286 - 286); FezP5JBsgWqL -(200 - 199) > JyHDF1Qjbf3; JyHDF1Qjbf3++)
                if (p48SNHy[JyHDF1Qjbf3 +(195 - 194)] > p48SNHy[JyHDF1Qjbf3]) {
                    int bN9CWwbtV;
                    bN9CWwbtV = p48SNHy[JyHDF1Qjbf3];
                    p48SNHy[JyHDF1Qjbf3] = p48SNHy[JyHDF1Qjbf3 +(819 - 818)];
                    p48SNHy[JyHDF1Qjbf3 +(515 - 514)] = bN9CWwbtV;
                    bLaxiIwO = (731 - 731);
                }
        }
        bLaxiIwO = (756 - 756);
        for (; !((131 - 131) != bLaxiIwO);) {
            bLaxiIwO = (362 - 361);
            for (JyHDF1Qjbf3 = (289 - 289); FezP5JBsgWqL -(983 - 982) > JyHDF1Qjbf3; JyHDF1Qjbf3++)
                if (QHUTERVN8[JyHDF1Qjbf3 +(316 - 315)] > QHUTERVN8[JyHDF1Qjbf3]) {
                    int bN9CWwbtV;
                    bLaxiIwO = (848 - 848);
                    bN9CWwbtV = QHUTERVN8[JyHDF1Qjbf3];
                    QHUTERVN8[JyHDF1Qjbf3] = QHUTERVN8[JyHDF1Qjbf3 +(570 - 569)];
                    QHUTERVN8[JyHDF1Qjbf3 +(801 - 800)] = bN9CWwbtV;
                }
        }
        for (; (757 - 757) < FezP5JBsgWqL;) {
            if (p48SNHy[h8oF9TUGBH] > QHUTERVN8[m6kdwG1l]) {
                FezP5JBsgWqL--;
                GWxVXl++;
                m6kdwG1l++;
                h8oF9TUGBH++;
            }
            else {
                if (p48SNHy[h8oF9TUGBH] < QHUTERVN8[m6kdwG1l]) {
                    m6kdwG1l++;
                    GWxVXl--;
                    w29jfTJ618pA--;
                    FezP5JBsgWqL--;
                }
                else {
                    if (p48SNHy[w29jfTJ618pA] > QHUTERVN8[rB98jv]) {
                        rB98jv--;
                        GWxVXl++;
                        w29jfTJ618pA--;
                        FezP5JBsgWqL--;
                    }
                    else {
                        if (p48SNHy[w29jfTJ618pA] < QHUTERVN8[rB98jv]) {
                            GWxVXl--;
                            FezP5JBsgWqL--;
                            m6kdwG1l++;
                            w29jfTJ618pA--;
                        }
                        else {
                            if (p48SNHy[w29jfTJ618pA] == QHUTERVN8[m6kdwG1l]) {
                                w29jfTJ618pA--;
                                m6kdwG1l++;
                                FezP5JBsgWqL--;
                            }
                            else {
                                GWxVXl--;
                                w29jfTJ618pA--;
                                m6kdwG1l++;
                                FezP5JBsgWqL--;
                            }
                        }
                    }
                }
            }
        }
    }
}

