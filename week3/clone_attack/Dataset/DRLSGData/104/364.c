void  main () {
    int nLkmjdBq79DJ (int aNjCsWdo, int fApuPHrmLjo);
    int HFQbgecAqK;
    int RW7CbKFPeuNV;
    int cV2xvia7I;
    scanf ("%d%d", &HFQbgecAqK, &RW7CbKFPeuNV);
    printf ("%d", nLkmjdBq79DJ (HFQbgecAqK, RW7CbKFPeuNV));
}

int nLkmjdBq79DJ (int aNjCsWdo, int fApuPHrmLjo) {
    int IRbuHjS90C2;
    if (fApuPHrmLjo > aNjCsWdo) {
        IRbuHjS90C2 = aNjCsWdo;
        aNjCsWdo = fApuPHrmLjo;
        fApuPHrmLjo = IRbuHjS90C2;
    }
    if (aNjCsWdo == fApuPHrmLjo)
        return aNjCsWdo;
    else
        return nLkmjdBq79DJ (aNjCsWdo / (89 - 87), fApuPHrmLjo);
}

