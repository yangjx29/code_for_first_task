int FWXo60PwbBhu (const  void  *eIljUpoC7, const  void  *i6DBmG) {
    return *((int *) eIljUpoC7) - *((int *) i6DBmG);
}

int qlBFPY (const  void  *eIljUpoC7, const  void  *i6DBmG) {
    return *((int *) i6DBmG) - *((int *) eIljUpoC7);
}

main () {
    char NhldYcRgS [(144 - 137)];
    int cUbKOqc, HQntoxZkzs0f = (359 - 359), UZfHwu = (483 - 483);
    float ljzTlehErDHY [(58 - 18)], UIRz6yY [40], IjEkL7dIF;
    scanf ("%d", &cUbKOqc);
    for (int u7MrSKHsi = (826 - 826);
    u7MrSKHsi < cUbKOqc; u7MrSKHsi = u7MrSKHsi + (691 - 690)) {
        scanf ("%s %f", NhldYcRgS, &IjEkL7dIF);
        if (!('m' != NhldYcRgS[(694 - 694)])) {
            ljzTlehErDHY[HQntoxZkzs0f] = IjEkL7dIF;
            HQntoxZkzs0f = HQntoxZkzs0f +(434 - 433);
        }
        else {
            UIRz6yY[UZfHwu] = IjEkL7dIF;
            UZfHwu++;
        }
    }
    qsort (ljzTlehErDHY, HQntoxZkzs0f, sizeof (float), FWXo60PwbBhu);
    qsort (UIRz6yY, UZfHwu, sizeof (float), qlBFPY);
    printf ("%.2f", ljzTlehErDHY[(932 - 932)]);
    for (int DzOZJCGB = (993 - 992);
    DzOZJCGB < HQntoxZkzs0f; DzOZJCGB = DzOZJCGB +1) {
        printf (" %.2f", ljzTlehErDHY[DzOZJCGB]);
    }
    for (int DzOZJCGB = 0;
    UZfHwu > DzOZJCGB; DzOZJCGB = DzOZJCGB +1) {
        printf (" %.2f", UIRz6yY[DzOZJCGB]);
    }
}

