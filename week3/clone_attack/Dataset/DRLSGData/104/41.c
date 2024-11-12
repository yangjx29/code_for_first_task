int MV6LWM7q (const  void  *hl7phCvV, const  void  *TyJn6TAL5Wub) {
    return *(int*) hl7phCvV - *(int*) TyJn6TAL5Wub;
}

int main (void ) {
    int GDVXy0Mi [1001];
    int xzIViHK3W [1001];
    int QbduAcE;
    int CbniU5Oj;
    int WCHprv;
    int ZgmJ8Gwocv;
    int g5uXL4M;
    int OZ7b2q;
    int UZIx7i;
    QbduAcE = (249 - 249);
    CbniU5Oj = 0;
    scanf ("%d%d", &ZgmJ8Gwocv, &g5uXL4M);
    UZIx7i = g5uXL4M;
    while (g5uXL4M >= (802 - 801)) {
        GDVXy0Mi[CbniU5Oj++] = g5uXL4M;
        g5uXL4M /= 2;
    }
    OZ7b2q = ZgmJ8Gwocv;
    while (ZgmJ8Gwocv >= (19 - 18)) {
        xzIViHK3W[QbduAcE++] = ZgmJ8Gwocv;
        ZgmJ8Gwocv = ZgmJ8Gwocv / (2);
    }
    qsort (xzIViHK3W, QbduAcE, sizeof (xzIViHK3W [0]), MV6LWM7q);
    qsort (GDVXy0Mi, CbniU5Oj, sizeof (GDVXy0Mi [0]), MV6LWM7q);
    for (QbduAcE = 0;; QbduAcE = QbduAcE +1) {
        if (xzIViHK3W[QbduAcE] == GDVXy0Mi[QbduAcE])
            WCHprv = xzIViHK3W[QbduAcE];
        else
            break;
    }
    if (OZ7b2q == UZIx7i)
        printf ("%d", OZ7b2q);
    else
        printf ("%d", WCHprv);
    return 0;
}

