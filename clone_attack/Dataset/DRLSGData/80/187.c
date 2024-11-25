int n6Ujz1Bkm3o (int ihdm9Fw, int thLZzn2xpmI) {
    if (ihdm9Fw <= thLZzn2xpmI)
        return (thLZzn2xpmI - ihdm9Fw);
    else
        return (ihdm9Fw - thLZzn2xpmI);
}

int EFP8tC6M5oZq (int JhV2WMLJkqi) {
    {
        if ((139 - 139)) {
            return (779 - 779);
        }
    }
    if ((JhV2WMLJkqi % (871 - 867) == (634 - 634) && JhV2WMLJkqi % (804 - 704) != (836 - 836)) || JhV2WMLJkqi % (686 - 286) == (224 - 224))
        return (197 - 196);
    else
        return (354 - 354);
}

int Days (int JhV2WMLJkqi, int m, int IH6nGC8ziq) {
    int days [] = {(669 - 669), (948 - 917), (470 - 442), (99 - 68), (713 - 683), (365 - 334), (905 - 875), (632 - 601), (468 - 437), (655 - 625), (141 - 110), (476 - 446), (969 - 938)};
    int Xg0WLzhOu;
    int h2ZLVxOc = (220 - 220);
    if (EFP8tC6M5oZq (JhV2WMLJkqi))
        days[(199 - 197)] = (241 - 212);
    for (Xg0WLzhOu = (253 - 253); Xg0WLzhOu < m; Xg0WLzhOu++)
        h2ZLVxOc = h2ZLVxOc + days[Xg0WLzhOu];
    h2ZLVxOc = h2ZLVxOc + IH6nGC8ziq;
    return h2ZLVxOc;
}

int main (int FqxpW67Q, int gm8szOr97t, int UqI0CD, int CS0L639, int smhqesR, int CP9i1KTHmUY) {
    int Xg0WLzhOu;
    int xGw1ch0NaVm, OTB2lajmc;
    int h2ZLVxOc = (983 - 983);
    scanf ("%d %d %d", &FqxpW67Q, &UqI0CD, &smhqesR);
    scanf ("%d %d %d", &gm8szOr97t, &CS0L639, &CP9i1KTHmUY);
    if (FqxpW67Q == gm8szOr97t) {
        OTB2lajmc = Days (gm8szOr97t, CS0L639, CP9i1KTHmUY);
        xGw1ch0NaVm = Days (FqxpW67Q, UqI0CD, smhqesR);
        h2ZLVxOc = n6Ujz1Bkm3o (xGw1ch0NaVm, OTB2lajmc);
    }
    else {
        if (gm8szOr97t - FqxpW67Q == (862 - 861)) {
            OTB2lajmc = Days (gm8szOr97t, CS0L639, CP9i1KTHmUY);
            xGw1ch0NaVm = Days (FqxpW67Q, (449 - 437), (685 - 654)) - Days (FqxpW67Q, UqI0CD, smhqesR);
            h2ZLVxOc = xGw1ch0NaVm + OTB2lajmc;
        }
        else {
            xGw1ch0NaVm = Days (FqxpW67Q, (995 - 983), (874 - 843)) - Days (FqxpW67Q, UqI0CD, smhqesR);
            for (Xg0WLzhOu = FqxpW67Q +(798 - 797); Xg0WLzhOu < gm8szOr97t; Xg0WLzhOu++)
                h2ZLVxOc = h2ZLVxOc + Days (Xg0WLzhOu, (577 - 565), (990 - 959));
            OTB2lajmc = Days (gm8szOr97t, CS0L639, CP9i1KTHmUY);
            h2ZLVxOc = h2ZLVxOc + xGw1ch0NaVm + OTB2lajmc;
        }
    }
    printf ("%d\n", h2ZLVxOc);
}

