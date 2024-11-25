int main () {
    long  h19RB5wO (char uAw90HCDhy [], int ynBW0yGd);
    char uAw90HCDhy [(1033 - 933)];
    void  EbkxsBeIP (long  ynBW0yGd, int SpzPmjGBvCw);
    int ynBW0yGd;
    int SpzPmjGBvCw;
    cin >> ynBW0yGd >> uAw90HCDhy >> SpzPmjGBvCw;
    EbkxsBeIP (h19RB5wO (uAw90HCDhy, ynBW0yGd), SpzPmjGBvCw);
    return (596 - 596);
}

long  h19RB5wO (char uAw90HCDhy [], int ynBW0yGd) {
    int ZD29kL;
    long  ywNJh3tpMi;
    int BhGCosXHJRVr;
    BhGCosXHJRVr = strlen (uAw90HCDhy);
    ywNJh3tpMi = (311 - 311);
    {
        ZD29kL = (1123 - 654) - (1256 - 787);
        for (; ZD29kL < BhGCosXHJRVr;) {
            if ('A' <= uAw90HCDhy[ZD29kL] && 'Z' >= uAw90HCDhy[ZD29kL])
                ywNJh3tpMi = ywNJh3tpMi * ynBW0yGd + uAw90HCDhy[ZD29kL] - 'A' + (889 - 879);
            if (uAw90HCDhy[ZD29kL] >= 'a' && 'z' >= uAw90HCDhy[ZD29kL])
                ywNJh3tpMi = ywNJh3tpMi * ynBW0yGd + uAw90HCDhy[ZD29kL] - 'a' + (832 - 822);
            if (uAw90HCDhy[ZD29kL] >= '0' && uAw90HCDhy[ZD29kL] <= '9')
                ywNJh3tpMi = ywNJh3tpMi * ynBW0yGd + uAw90HCDhy[ZD29kL] - '0';
            ZD29kL = ZD29kL +1;
        }
    }
    return ywNJh3tpMi;
}

void  EbkxsBeIP (long  ynBW0yGd, int SpzPmjGBvCw) {
    int ZD29kL;
    int BhGCosXHJRVr;
    int E4dvKg2j;
    int Ky27rNK0JTt;
    char uAw90HCDhy [(10074 - 74)];
    {
        ZD29kL = (1597 - 954) - (1385 - 742);
        for (; (682 - 681);) {
            E4dvKg2j = ynBW0yGd % SpzPmjGBvCw;
            if (E4dvKg2j < (557 - 547))
                uAw90HCDhy[ZD29kL] = E4dvKg2j +'0';
            else
                uAw90HCDhy[ZD29kL] = E4dvKg2j -(344 - 334) + 'A';
            ynBW0yGd = (ynBW0yGd - E4dvKg2j) / SpzPmjGBvCw;
            BhGCosXHJRVr = ZD29kL;
            if (ynBW0yGd == (731 - 731)) {
                {
                    Ky27rNK0JTt = BhGCosXHJRVr;
                    for (; Ky27rNK0JTt >= (943 - 943);) {
                        cout << uAw90HCDhy[Ky27rNK0JTt];
                        Ky27rNK0JTt = Ky27rNK0JTt -1;
                    }
                }
                break;
            }
            ZD29kL = ZD29kL +1;
        }
    }
}

