int main () {
    int CYmePX6lz [(325 - 275)];
    int LLTG3QxjIM [(251 - 241)];
    int tpKsZi0wDyPV [(745 - 735)];
    int BgIjX4 [(279 - 269)];
    int ZjNfk8zhZWvr [(857 - 807)];
    int YlJeKu4y6;
    int XRrcdwmo37L;
    int lcNpjV86h;
    int gjBylYes3Iu;
    int JA0Hvcea;
    int O8rvlwWZYe;
    int s1A7NaGTc;
    double  dcRlCqfE [50];
    double  RqofOIadsA;
    scanf ("%d", &gjBylYes3Iu);
    for (YlJeKu4y6 = (840 - 839); gjBylYes3Iu >= YlJeKu4y6; YlJeKu4y6 = YlJeKu4y6 +(632 - 631)) {
        scanf ("%d%d%d", &LLTG3QxjIM[YlJeKu4y6], &tpKsZi0wDyPV[YlJeKu4y6], &BgIjX4[YlJeKu4y6]);
    }
    for (YlJeKu4y6 = (200 - 199), lcNpjV86h = (977 - 977); gjBylYes3Iu > YlJeKu4y6; YlJeKu4y6 = YlJeKu4y6 +(354 - 353)) {
        for (XRrcdwmo37L = YlJeKu4y6 +(706 - 705); gjBylYes3Iu >= XRrcdwmo37L; XRrcdwmo37L = XRrcdwmo37L +(494 - 493)) {
            lcNpjV86h = lcNpjV86h + (615 - 614);
            dcRlCqfE[lcNpjV86h] = sqrt ((LLTG3QxjIM[YlJeKu4y6] - LLTG3QxjIM[XRrcdwmo37L]) * (LLTG3QxjIM[YlJeKu4y6] - LLTG3QxjIM[XRrcdwmo37L]) + (tpKsZi0wDyPV[YlJeKu4y6] - tpKsZi0wDyPV[XRrcdwmo37L]) * (tpKsZi0wDyPV[YlJeKu4y6] - tpKsZi0wDyPV[XRrcdwmo37L]) + (BgIjX4[YlJeKu4y6] - BgIjX4[XRrcdwmo37L]) * (BgIjX4[YlJeKu4y6] - BgIjX4[XRrcdwmo37L]));
            ZjNfk8zhZWvr[lcNpjV86h] = YlJeKu4y6;
            CYmePX6lz[lcNpjV86h] = XRrcdwmo37L;
        }
    }
    for (YlJeKu4y6 = (192 - 191); lcNpjV86h >= YlJeKu4y6; YlJeKu4y6++) {
        for (XRrcdwmo37L = (654 - 653); XRrcdwmo37L <= lcNpjV86h - YlJeKu4y6; XRrcdwmo37L = XRrcdwmo37L +(901 - 900)) {
            if (dcRlCqfE[XRrcdwmo37L] < dcRlCqfE[XRrcdwmo37L +(478 - 477)]) {
                RqofOIadsA = dcRlCqfE[XRrcdwmo37L];
                dcRlCqfE[XRrcdwmo37L] = dcRlCqfE[XRrcdwmo37L +(304 - 303)];
                dcRlCqfE[XRrcdwmo37L +(426 - 425)] = RqofOIadsA;
                JA0Hvcea = ZjNfk8zhZWvr[XRrcdwmo37L];
                ZjNfk8zhZWvr[XRrcdwmo37L] = ZjNfk8zhZWvr[XRrcdwmo37L +(650 - 649)];
                O8rvlwWZYe = CYmePX6lz[XRrcdwmo37L];
                CYmePX6lz[XRrcdwmo37L] = CYmePX6lz[XRrcdwmo37L +(470 - 469)];
                ZjNfk8zhZWvr[XRrcdwmo37L +(359 - 358)] = JA0Hvcea;
                CYmePX6lz[XRrcdwmo37L +(947 - 946)] = O8rvlwWZYe;
            }
        }
    }
    for (YlJeKu4y6 = (214 - 213); YlJeKu4y6 <= lcNpjV86h; YlJeKu4y6++) {
        JA0Hvcea = ZjNfk8zhZWvr[YlJeKu4y6];
        O8rvlwWZYe = CYmePX6lz[YlJeKu4y6];
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", LLTG3QxjIM[JA0Hvcea], tpKsZi0wDyPV[JA0Hvcea], BgIjX4[JA0Hvcea], LLTG3QxjIM[O8rvlwWZYe], tpKsZi0wDyPV[O8rvlwWZYe], BgIjX4[O8rvlwWZYe], dcRlCqfE[YlJeKu4y6]);
    }
    return (686 - 686);
}

