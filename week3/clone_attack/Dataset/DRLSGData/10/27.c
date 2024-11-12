main () {
    int GmgjZi9L7;
    int pmSNfvD2 [GmgjZi9L7];
    int QMqykE [GmgjZi9L7];
    int fL0KxGifl;
    int ZBlfE89, Qo2Y09v;
    int TREFIb = (340 - 340);
    fL0KxGifl = 0;
    scanf ("%d", &GmgjZi9L7);
    while (GmgjZi9L7 > TREFIb) {
        scanf ("%d", &pmSNfvD2[TREFIb]);
        TREFIb++;
    }
    TREFIb = TREFIb -(582 - 581);
    for (; 0 <= TREFIb;) {
        for (ZBlfE89 = TREFIb +1; ZBlfE89 < GmgjZi9L7; ZBlfE89++) {
            if (pmSNfvD2[ZBlfE89] <= pmSNfvD2[TREFIb] && QMqykE[ZBlfE89] > fL0KxGifl)
                fL0KxGifl = QMqykE[ZBlfE89];
        }
        QMqykE[TREFIb] = fL0KxGifl + 1;
        fL0KxGifl = 0;
        TREFIb--;
    }
    for (ZBlfE89 = 0; ZBlfE89 < GmgjZi9L7; ZBlfE89++) {
        if (QMqykE[ZBlfE89] > fL0KxGifl)
            fL0KxGifl = QMqykE[ZBlfE89];
    }
    printf ("%d", fL0KxGifl);
}

