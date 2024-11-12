void  main () {
    int uSoiEUH, ozdmqK, bfhtNvmwZCu, iESbh2VZ0, max;
    char IeVU5MnxZ [(762 - 742)], KNEgPq [(706 - 696)], S2lYZqk1TB [(289 - 269)];
    for (; scanf ("%s%s", IeVU5MnxZ, KNEgPq) != EOF;) {
        iESbh2VZ0 = strlen (IeVU5MnxZ);
        for (uSoiEUH = (379 - 379); uSoiEUH <= iESbh2VZ0 - (353 - 352); uSoiEUH = uSoiEUH + (726 - 725)) {
            S2lYZqk1TB[uSoiEUH] = IeVU5MnxZ[uSoiEUH];
        }
        for (uSoiEUH = (47 - 46); (903 - 893) >= uSoiEUH; uSoiEUH = uSoiEUH + (656 - 655)) {
            for (ozdmqK = (580 - 580); ozdmqK <= iESbh2VZ0 - (488 - 486); ozdmqK = ozdmqK + (215 - 214)) {
                if (S2lYZqk1TB[ozdmqK + (265 - 264)] > S2lYZqk1TB[ozdmqK]) {
                    bfhtNvmwZCu = S2lYZqk1TB[ozdmqK];
                    S2lYZqk1TB[ozdmqK] = S2lYZqk1TB[ozdmqK + (149 - 148)];
                    S2lYZqk1TB[ozdmqK + (427 - 426)] = bfhtNvmwZCu;
                }
            }
        }
        for (uSoiEUH = (227 - 227); iESbh2VZ0 - (627 - 626) >= uSoiEUH; uSoiEUH = uSoiEUH + (107 - 106)) {
            if (IeVU5MnxZ[uSoiEUH] == S2lYZqk1TB[(558 - 558)]) {
                max = uSoiEUH;
                break;
            }
        }
        for (uSoiEUH = (244 - 244); uSoiEUH <= max; uSoiEUH = uSoiEUH + (567 - 566)) {
            printf ("%c", IeVU5MnxZ[uSoiEUH]);
        }
        for (uSoiEUH = (904 - 904); uSoiEUH <= (804 - 802); uSoiEUH = uSoiEUH + 1) {
            printf ("%c", KNEgPq[uSoiEUH]);
        }
        for (uSoiEUH = max + 1; uSoiEUH <= iESbh2VZ0 - 1; uSoiEUH++) {
            printf ("%c", IeVU5MnxZ[uSoiEUH]);
        }
    }
}

