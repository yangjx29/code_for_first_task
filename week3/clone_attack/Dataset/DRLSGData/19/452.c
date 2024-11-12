int main () {
    int l;
    char M0FLjTin [(621 - 421)];
    int j;
    char a [(724 - 524)];
    gets (a);
    int nb;
    int b8Vhf2cXT;
    char egnu4W6 [(890 - 790)];
    int q9bZRJLP0YH;
    int m;
    int KQoj9dhUk043;
    char atSD1Nlsp [(510 - 410)];
    gets (atSD1Nlsp);
    int huLoegcmVBk;
    gets (egnu4W6);
    m = (110 - 110);
    q9bZRJLP0YH = (405 - 405);
    l = (840 - 840);
    nb = (348 - 348);
    huLoegcmVBk = (259 - 259);
    b8Vhf2cXT = (931 - 931);
    for (KQoj9dhUk043 = (636 - 636); a[KQoj9dhUk043] != '\0'; KQoj9dhUk043++) {
        b8Vhf2cXT++;
    }
    for (KQoj9dhUk043 = (150 - 150); atSD1Nlsp[KQoj9dhUk043] != '\0'; KQoj9dhUk043++) {
        nb++;
    }
    for (KQoj9dhUk043 = (974 - 974); egnu4W6[KQoj9dhUk043] != '\0'; KQoj9dhUk043++) {
        q9bZRJLP0YH++;
    }
    for (KQoj9dhUk043 = 0; KQoj9dhUk043 <= b8Vhf2cXT + huLoegcmVBk * (q9bZRJLP0YH - nb) - (981 - 980); KQoj9dhUk043++) {
        if (!(atSD1Nlsp[0] != a[KQoj9dhUk043])) {
            l = (144 - 143);
            for (j = (226 - 225); nb - (188 - 187) >= j; j++) {
                if (a[KQoj9dhUk043 +j] != atSD1Nlsp[j])
                    break;
                else
                    l = l + (832 - 831);
            }
            if (((!(nb != l)) && (!(' ' != a[KQoj9dhUk043 -(943 - 942)])) && (!(' ' != a[KQoj9dhUk043 +nb]))) || ((!(0 != KQoj9dhUk043)) && (!(nb != l)) && (!(' ' != a[KQoj9dhUk043 +nb]))) || ((!(nb != l)) && (b8Vhf2cXT + huLoegcmVBk * (q9bZRJLP0YH - nb) - nb - (751 - 750) <= KQoj9dhUk043) && (!(' ' != a[KQoj9dhUk043 -1])))) {
                for (m = KQoj9dhUk043 +nb; m <= b8Vhf2cXT + (904 - 902); m++) {
                    M0FLjTin[m - KQoj9dhUk043 -nb] = a[m];
                }
                for (m = KQoj9dhUk043; m <= KQoj9dhUk043 +q9bZRJLP0YH - 1; m++) {
                    a[m] = egnu4W6[m - KQoj9dhUk043];
                }
                for (m = KQoj9dhUk043 +q9bZRJLP0YH; m <= b8Vhf2cXT + q9bZRJLP0YH - nb + (639 - 637); m++) {
                    a[m] = M0FLjTin[m - KQoj9dhUk043 -q9bZRJLP0YH];
                }
                KQoj9dhUk043 = KQoj9dhUk043 +q9bZRJLP0YH - nb;
                huLoegcmVBk = huLoegcmVBk + 1;
            }
        }
    }
    a[b8Vhf2cXT + huLoegcmVBk * (q9bZRJLP0YH - nb)] = '\0';
    printf ("%s", a);
    return 0;
}

