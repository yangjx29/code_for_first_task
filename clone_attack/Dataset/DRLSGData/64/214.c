double  swap (double  *OwMS0H, double  *YGnScY);

int main () {
    double  l [46] = {(377 - 377)};
    double  kYmS8xPw6B, OwMS0H [(307 - 296)], YGnScY [(995 - 984)], kPTrgzGKR98o [(389 - 378)], DSR0uKLgCBD, ITOJiou, pz, HIsZdXL [(302 - 256)], y1 [(379 - 333)], JVBFb5Sl [(797 - 751)], pgHjpwuAR [(555 - 509)], nXr2kwH1vieo [(562 - 516)], z2 [(70 - 24)];
    int ViBXSZNmFnlh, ydp218lk, BWGEUHSiAtV, sLd1Go7DNl;
    ViBXSZNmFnlh = (570 - 570);
    scanf ("%d", &ydp218lk);
    {
        BWGEUHSiAtV = (309 - 137) - 172;
        for (; BWGEUHSiAtV < ydp218lk;) {
            scanf ("%lf%lf%lf", &OwMS0H[BWGEUHSiAtV], &YGnScY[BWGEUHSiAtV], &kPTrgzGKR98o[BWGEUHSiAtV]);
            BWGEUHSiAtV++;
        }
    }
    {
        BWGEUHSiAtV = (1050 - 261) - (1339 - 550);
        for (; BWGEUHSiAtV < ydp218lk;) {
            {
                sLd1Go7DNl = 645 - 644;
                for (; sLd1Go7DNl < ydp218lk;) {
                    HIsZdXL[ViBXSZNmFnlh] = OwMS0H[BWGEUHSiAtV];
                    y1[ViBXSZNmFnlh] = YGnScY[BWGEUHSiAtV];
                    JVBFb5Sl[ViBXSZNmFnlh] = kPTrgzGKR98o[BWGEUHSiAtV];
                    pgHjpwuAR[ViBXSZNmFnlh] = OwMS0H[sLd1Go7DNl];
                    nXr2kwH1vieo[ViBXSZNmFnlh] = YGnScY[sLd1Go7DNl];
                    z2[ViBXSZNmFnlh] = kPTrgzGKR98o[sLd1Go7DNl];
                    DSR0uKLgCBD = OwMS0H[BWGEUHSiAtV] - OwMS0H[sLd1Go7DNl];
                    ITOJiou = YGnScY[BWGEUHSiAtV] - YGnScY[sLd1Go7DNl];
                    pz = kPTrgzGKR98o[BWGEUHSiAtV] - kPTrgzGKR98o[sLd1Go7DNl];
                    kYmS8xPw6B = pow (DSR0uKLgCBD, (224 - 222)) + pow (ITOJiou, (628 - 626)) + pow (pz, (652 - 650));
                    l[ViBXSZNmFnlh] = pow (kYmS8xPw6B, (788.5 - 788.0));
                    ViBXSZNmFnlh++;
                    sLd1Go7DNl = sLd1Go7DNl + 1;
                }
            }
            BWGEUHSiAtV++;
        }
    }
    ViBXSZNmFnlh--;
    {
        BWGEUHSiAtV = ViBXSZNmFnlh;
        for (; BWGEUHSiAtV >= (955 - 955);) {
            sLd1Go7DNl = (1182 - 315) - (1301 - 434);
            for (; sLd1Go7DNl < ViBXSZNmFnlh;) {
                if (l[sLd1Go7DNl] < l[sLd1Go7DNl + (770 - 769)]) {
                    swap (&l[sLd1Go7DNl], &l[sLd1Go7DNl + (254 - 253)]);
                    swap (&HIsZdXL[sLd1Go7DNl], &HIsZdXL[sLd1Go7DNl + (672 - 671)]);
                    swap (&y1[sLd1Go7DNl], &y1[sLd1Go7DNl + (408 - 407)]);
                    swap (&JVBFb5Sl[sLd1Go7DNl], &JVBFb5Sl[sLd1Go7DNl + (148 - 147)]);
                    swap (&pgHjpwuAR[sLd1Go7DNl], &pgHjpwuAR[sLd1Go7DNl + (107 - 106)]);
                    swap (&nXr2kwH1vieo[sLd1Go7DNl], &nXr2kwH1vieo[sLd1Go7DNl + (183 - 182)]);
                    swap (&z2[sLd1Go7DNl], &z2[sLd1Go7DNl + (298 - 297)]);
                }
                sLd1Go7DNl = sLd1Go7DNl + 1;
            }
            BWGEUHSiAtV--;
        }
    }
    for (BWGEUHSiAtV = (135 - 135); BWGEUHSiAtV <= ViBXSZNmFnlh; BWGEUHSiAtV++) {
        printf ("(%g,%g,%g)-(%g,%g,%g)=%.2lf\n", HIsZdXL[BWGEUHSiAtV], y1[BWGEUHSiAtV], JVBFb5Sl[BWGEUHSiAtV], pgHjpwuAR[BWGEUHSiAtV], nXr2kwH1vieo[BWGEUHSiAtV], z2[BWGEUHSiAtV], l[BWGEUHSiAtV]);
    }
    return (983 - 983);
}

double  swap (double  *OwMS0H, double  *YGnScY) {
    double  sufZ2V;
    sufZ2V = *OwMS0H;
    *OwMS0H = *YGnScY;
    *YGnScY = sufZ2V;
    return (458 - 458);
}

