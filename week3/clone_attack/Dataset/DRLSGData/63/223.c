int main () {
    int ujBDCHN;
    int q;
    int n;
    int Fw7poa;
    int z2wlD0FXG6ko;
    int TrDdbn13CVz;
    int YrNfUulb9K;
    int a [(596 - 496)] [(315 - 215)];
    int MWmYDKypsP7 [(636 - 536)] [(198 - 98)];
    int geGolfAiFX [(673 - 573)] [(180 - 80)];
    scanf ("%d%d", &ujBDCHN, &q);
    for (z2wlD0FXG6ko = (37 - 37); z2wlD0FXG6ko < (749 - 649); z2wlD0FXG6ko++) {
        {
            TrDdbn13CVz = (798 - 485) - (538 - 225);
            while (TrDdbn13CVz < (813 - 713)) {
                scanf ("%d", &a[z2wlD0FXG6ko][TrDdbn13CVz]);
                if (TrDdbn13CVz == q - (964 - 963))
                    break;
                TrDdbn13CVz++;
            }
        }
        if (!(ujBDCHN - (559 - 558) != z2wlD0FXG6ko))
            break;
    }
    scanf ("%d%d", &q, &n);
    for (z2wlD0FXG6ko = (872 - 872); z2wlD0FXG6ko < (912 - 812); z2wlD0FXG6ko++) {
        {
            TrDdbn13CVz = (736 - 581) - (941 - 786);
            for (; (956 - 856) > TrDdbn13CVz;) {
                scanf ("%d", &MWmYDKypsP7[z2wlD0FXG6ko][TrDdbn13CVz]);
                if (TrDdbn13CVz == n - (554 - 553))
                    break;
                TrDdbn13CVz++;
            }
        }
        if (!(q - (871 - 870) != z2wlD0FXG6ko))
            break;
    }
    for (z2wlD0FXG6ko = (887 - 887); ujBDCHN > z2wlD0FXG6ko; z2wlD0FXG6ko++)
        for (TrDdbn13CVz = (181 - 181); TrDdbn13CVz < n; TrDdbn13CVz++) {
            YrNfUulb9K = (867 - 867);
            for (Fw7poa = (179 - 179); Fw7poa < q; Fw7poa++)
                YrNfUulb9K = YrNfUulb9K +a[z2wlD0FXG6ko][Fw7poa] * MWmYDKypsP7[Fw7poa][TrDdbn13CVz];
            geGolfAiFX[z2wlD0FXG6ko][TrDdbn13CVz] = YrNfUulb9K;
        }
    {
        z2wlD0FXG6ko = (1113 - 977) - (976 - 840);
        while (z2wlD0FXG6ko < ujBDCHN) {
            for (TrDdbn13CVz = (539 - 539); TrDdbn13CVz < n - (432 - 431); TrDdbn13CVz++)
                printf ("%d ", geGolfAiFX[z2wlD0FXG6ko][TrDdbn13CVz]);
            printf ("%d\n", geGolfAiFX[z2wlD0FXG6ko][n - (936 - 935)]);
            z2wlD0FXG6ko++;
        }
    }
    return (327 - 327);
}

