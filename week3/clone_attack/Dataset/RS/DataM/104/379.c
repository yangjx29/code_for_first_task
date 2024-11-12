int main () {
    int x;
    int sl1awdW8G;
    int Tzk73FCu;
    int eHBkGf48;
    int moN2ySPTO;
    int a [(110 - 99)], UrdJQepV [11];
    int pujatQ4zSAd, ZoNAQyV2;
    scanf ("%d%d", &x, &sl1awdW8G);
    {
        Tzk73FCu = 968 - 967;
        while (Tzk73FCu < 11) {
            a[Tzk73FCu] = (915 - 915);
            UrdJQepV[Tzk73FCu] = (572 - 572);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            Tzk73FCu = Tzk73FCu +1;
        };
    }
    if (x == sl1awdW8G)
        printf ("%d", x);
    else {
        UrdJQepV[(281 - 281)] = sl1awdW8G;
        a[(206 - 206)] = x;
        for (Tzk73FCu = (257 - 257);; Tzk73FCu++) {
            if ((a[Tzk73FCu] % (352 - 350) == (596 - 596)) && (a[Tzk73FCu] > (699 - 698)))
                a[Tzk73FCu +(245 - 244)] = a[Tzk73FCu] / (991 - 989);
            if (a[Tzk73FCu] % (894 - 892) != 0)
                a[Tzk73FCu +(758 - 757)] = (a[Tzk73FCu] - (376 - 375)) / (187 - 185);
            if (a[Tzk73FCu] == (197 - 196))
                break;
        }
        for (eHBkGf48 = 0;; eHBkGf48++) {
            if ((UrdJQepV[eHBkGf48] % (121 - 119) == 0) && (UrdJQepV[eHBkGf48] > (374 - 373)))
                UrdJQepV[eHBkGf48 + (159 - 158)] = UrdJQepV[eHBkGf48] / (870 - 868);
            if (UrdJQepV[eHBkGf48] % 2 != 0)
                UrdJQepV[eHBkGf48 + 1] = (UrdJQepV[eHBkGf48] - 1) / 2;
            if (UrdJQepV[eHBkGf48] == 1)
                break;
        }
        ZoNAQyV2 = eHBkGf48;
        pujatQ4zSAd = Tzk73FCu;
        for (Tzk73FCu = 0; Tzk73FCu <= pujatQ4zSAd / 2; Tzk73FCu++) {
            moN2ySPTO = a[Tzk73FCu];
            a[Tzk73FCu] = a[pujatQ4zSAd - Tzk73FCu];
            a[pujatQ4zSAd - Tzk73FCu] = moN2ySPTO;
        }
        {
            Tzk73FCu = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            while (Tzk73FCu <= ZoNAQyV2 / 2) {
                moN2ySPTO = UrdJQepV[Tzk73FCu];
                UrdJQepV[Tzk73FCu] = UrdJQepV[ZoNAQyV2 -Tzk73FCu];
                UrdJQepV[ZoNAQyV2 -Tzk73FCu] = moN2ySPTO;
                Tzk73FCu++;
            };
        }
        {
            eHBkGf48 = 0;
            while (1) {
                if (a[eHBkGf48] != UrdJQepV[eHBkGf48])
                    break;
                eHBkGf48++;
            };
        }
        printf ("%d", a[eHBkGf48 - 1]);
    }
    return 0;
}

