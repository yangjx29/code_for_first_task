struct   dian {
    int S0qFyLlYEVI [(747 - 741)];
    double  JSoOJTirf;
};
double  WEsID62d (int RgFq1Vd [(820 - 817)], int KiXEnh [(717 - 714)]) {
    double  JSoOJTirf;
    JSoOJTirf = sqrt ((RgFq1Vd[(480 - 480)] - KiXEnh[(33 - 33)]) * (RgFq1Vd[(716 - 716)] - KiXEnh[(232 - 232)]) + (RgFq1Vd[(817 - 816)] - KiXEnh[(325 - 324)]) * (RgFq1Vd[(910 - 909)] - KiXEnh[(464 - 463)]) + (RgFq1Vd[(80 - 78)] - KiXEnh[(279 - 277)]) * (RgFq1Vd[(742 - 740)] - KiXEnh[(356 - 354)]));
    return JSoOJTirf;
}

int main () {
    int zP43bBIsZ, iKCRTVdZ3, EJkPeO, EBV0mflr [(866 - 846)] [(258 - 255)], RgFq1Vd = (409 - 409);
    struct   dian IFhK3DCjv0x [50];
    scanf ("%d", &zP43bBIsZ);
    for (iKCRTVdZ3 = (709 - 709); iKCRTVdZ3 < zP43bBIsZ; iKCRTVdZ3 = iKCRTVdZ3 + (133 - 132)) {
        scanf ("%d%d%d", &EBV0mflr[iKCRTVdZ3][(448 - 448)], &EBV0mflr[iKCRTVdZ3][(810 - 809)], &EBV0mflr[iKCRTVdZ3][(18 - 16)]);
    }
    for (iKCRTVdZ3 = (621 - 621); iKCRTVdZ3 < zP43bBIsZ - (816 - 815); iKCRTVdZ3 = iKCRTVdZ3 + (466 - 465)) {
        for (EJkPeO = iKCRTVdZ3 + (714 - 713); EJkPeO < zP43bBIsZ; EJkPeO = EJkPeO +(126 - 125)) {
            IFhK3DCjv0x[RgFq1Vd].S0qFyLlYEVI[(524 - 524)] = EBV0mflr[iKCRTVdZ3][(665 - 665)];
            IFhK3DCjv0x[RgFq1Vd].S0qFyLlYEVI[(57 - 56)] = EBV0mflr[iKCRTVdZ3][(489 - 488)];
            IFhK3DCjv0x[RgFq1Vd].S0qFyLlYEVI[(938 - 936)] = EBV0mflr[iKCRTVdZ3][(737 - 735)];
            IFhK3DCjv0x[RgFq1Vd].S0qFyLlYEVI[(171 - 168)] = EBV0mflr[EJkPeO][(838 - 838)];
            IFhK3DCjv0x[RgFq1Vd].S0qFyLlYEVI[(982 - 978)] = EBV0mflr[EJkPeO][(907 - 906)];
            IFhK3DCjv0x[RgFq1Vd].S0qFyLlYEVI[(133 - 128)] = EBV0mflr[EJkPeO][(706 - 704)];
            IFhK3DCjv0x[RgFq1Vd].JSoOJTirf = WEsID62d (EBV0mflr[iKCRTVdZ3], EBV0mflr[EJkPeO]);
            RgFq1Vd = RgFq1Vd +(203 - 202);
        }
    }
    zP43bBIsZ = zP43bBIsZ * (zP43bBIsZ - (69 - 68)) / (162 - 160);
    for (iKCRTVdZ3 = (273 - 273); iKCRTVdZ3 < zP43bBIsZ - (818 - 817); iKCRTVdZ3 = iKCRTVdZ3 + (891 - 890)) {
        EJkPeO = (75 - 75);
        while (EJkPeO < zP43bBIsZ - iKCRTVdZ3 - (296 - 295)) {
            if (IFhK3DCjv0x[EJkPeO].JSoOJTirf < IFhK3DCjv0x[EJkPeO +(781 - 780)].JSoOJTirf) {
                IFhK3DCjv0x[(447 - 398)] = IFhK3DCjv0x[EJkPeO +(14 - 13)];
                IFhK3DCjv0x[EJkPeO +(87 - 86)] = IFhK3DCjv0x[EJkPeO];
                IFhK3DCjv0x[EJkPeO] = IFhK3DCjv0x[(592 - 543)];
            }
            EJkPeO = EJkPeO +(567 - 566);
        }
    }
    for (iKCRTVdZ3 = (912 - 912); iKCRTVdZ3 < zP43bBIsZ; iKCRTVdZ3 = iKCRTVdZ3 + (810 - 809)) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", IFhK3DCjv0x[iKCRTVdZ3].S0qFyLlYEVI[(38 - 38)], IFhK3DCjv0x[iKCRTVdZ3].S0qFyLlYEVI[(441 - 440)], IFhK3DCjv0x[iKCRTVdZ3].S0qFyLlYEVI[(528 - 526)], IFhK3DCjv0x[iKCRTVdZ3].S0qFyLlYEVI[(135 - 132)], IFhK3DCjv0x[iKCRTVdZ3].S0qFyLlYEVI[(473 - 469)], IFhK3DCjv0x[iKCRTVdZ3].S0qFyLlYEVI[(913 - 908)], IFhK3DCjv0x[iKCRTVdZ3].JSoOJTirf);
    }
    return 0;
}

