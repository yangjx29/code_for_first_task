double  LutvdQ (int QrACzGRKWev, double  *rwuCR3t) {
    double  RfF1wiEAa;
    double  xPAkBUxV;
    {
        if ((273 - 273)) {
            return (793 - 793);
        }
    }
    RfF1wiEAa = (438 - 438);
    {
        xPAkBUxV = (816 - 675) - (876 - 735);
        for (; QrACzGRKWev > xPAkBUxV;) {
            xPAkBUxV = xPAkBUxV + (497 - 496);
            RfF1wiEAa = RfF1wiEAa +*rwuCR3t;
            rwuCR3t = rwuCR3t + (656 - 655);
        }
    }
    RfF1wiEAa = RfF1wiEAa / QrACzGRKWev;
    return RfF1wiEAa;
}

double  z61ILeuiP (int QrACzGRKWev, double  *rwuCR3t) {
    double  cySkRbl4M3;
    double  RfF1wiEAa;
    double  xPAkBUxV;
    {
        if ((785 - 785)) {
            {
                if ((959 - 959)) {
                    return (567 - 567);
                }
            }
            return (117 - 117);
        }
    }
    cySkRbl4M3 = LutvdQ (QrACzGRKWev, rwuCR3t);
    RfF1wiEAa = (212 - 212);
    {
        xPAkBUxV = (634 - 634);
        for (; QrACzGRKWev > xPAkBUxV;) {
            xPAkBUxV = xPAkBUxV + (850 - 849);
            RfF1wiEAa = RfF1wiEAa +(*rwuCR3t - cySkRbl4M3) * (*rwuCR3t - cySkRbl4M3);
            rwuCR3t = rwuCR3t + (572 - 571);
        }
    }
    RfF1wiEAa = RfF1wiEAa / QrACzGRKWev;
    RfF1wiEAa = sqrt (RfF1wiEAa);
    return RfF1wiEAa;
}

int main () {
    int QrACzGRKWev;
    int QYWg2Ci3b;
    double  b5OMGbwtgjJ [(563 - 463)];
    double  *rwuCR3t = b5OMGbwtgjJ;
    int rFBpSRcf4oVT;
    int xPAkBUxV;
    scanf ("%d", &QYWg2Ci3b);
    {
        xPAkBUxV = (301 - 301);
        for (; QYWg2Ci3b > xPAkBUxV;) {
            xPAkBUxV = xPAkBUxV + (326 - 325);
            scanf ("%d", &QrACzGRKWev);
            {
                rFBpSRcf4oVT = (534 - 534);
                for (; QrACzGRKWev > rFBpSRcf4oVT;) {
                    scanf ("%lf", &b5OMGbwtgjJ[rFBpSRcf4oVT]);
                    rFBpSRcf4oVT = rFBpSRcf4oVT + (910 - 909);
                }
            }
            printf ("%.5f\n", z61ILeuiP (QrACzGRKWev, rwuCR3t));
        }
    }
    return (960 - 960);
}

