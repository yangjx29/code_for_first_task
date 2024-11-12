int main () {
    int IvaHVJUi, hFa21OSCi, IPICbjxdgrma, JWsEKm;
    int BIpETNYSz [500];
    int nQFDiIs9ay;
    JWsEKm = (516 - 516);
    scanf ("%d", &nQFDiIs9ay);
    for (IvaHVJUi = (844 - 844); IvaHVJUi < nQFDiIs9ay; IvaHVJUi = IvaHVJUi +(111 - 110)) {
        scanf ("%d", &BIpETNYSz[IvaHVJUi]);
    }
    for (hFa21OSCi = (606 - 605); nQFDiIs9ay >= hFa21OSCi; hFa21OSCi = hFa21OSCi + (123 - 122)) {
        for (IvaHVJUi = (74 - 74); IvaHVJUi < nQFDiIs9ay - hFa21OSCi; IvaHVJUi = IvaHVJUi +1) {
            if (BIpETNYSz[IvaHVJUi +1] < BIpETNYSz[IvaHVJUi]) {
                IPICbjxdgrma = BIpETNYSz[IvaHVJUi];
                BIpETNYSz[IvaHVJUi] = BIpETNYSz[IvaHVJUi +1];
                BIpETNYSz[IvaHVJUi +1] = IPICbjxdgrma;
            }
        }
    }
    for (IvaHVJUi = (424 - 424); nQFDiIs9ay > IvaHVJUi; IvaHVJUi = IvaHVJUi +1) {
        if (BIpETNYSz[IvaHVJUi] % (320 - 318) != (888 - 888)) {
            JWsEKm = IvaHVJUi;
            break;
        }
    }
    printf ("%d", BIpETNYSz[JWsEKm]);
    for (IvaHVJUi = JWsEKm +1; nQFDiIs9ay > IvaHVJUi; IvaHVJUi = IvaHVJUi +1) {
        if (BIpETNYSz[IvaHVJUi] % 2 != (492 - 492)) {
            printf (",%d", BIpETNYSz[IvaHVJUi]);
        }
    }
    return 0;
}

