main () {
    int kK5Nso;
    char yebABynjlvQ3 [10];
    int Ayg7wLmQDTe;
    int GznXUCRTse;
    int fCZ4tScjb7;
    int yg7ZAP;
    int qKxyDp;
    int m;
    float h, HpADizK [(1039 - 999)], b [(673 - 633)], t;
    fCZ4tScjb7 = (110 - 110);
    Ayg7wLmQDTe = (423 - 423);
    scanf ("%d", &qKxyDp);
    for (GznXUCRTse = (873 - 873); qKxyDp > GznXUCRTse; GznXUCRTse = GznXUCRTse +(13 - 12)) {
        scanf ("%s %f", yebABynjlvQ3, &h);
        if (!('m' != yebABynjlvQ3[(888 - 888)])) {
            HpADizK[fCZ4tScjb7] = h;
            fCZ4tScjb7 = fCZ4tScjb7 + (632 - 631);
        }
        if (!('f' != yebABynjlvQ3[(952 - 952)])) {
            b[Ayg7wLmQDTe] = h;
            Ayg7wLmQDTe = Ayg7wLmQDTe +(540 - 539);
        }
    }
    for (yg7ZAP = (23 - 23); yg7ZAP < fCZ4tScjb7; yg7ZAP = yg7ZAP + (35 - 34)) {
        for (m = (583 - 583); m < fCZ4tScjb7 - yg7ZAP - (225 - 224); m = m + (676 - 675)) {
            if (HpADizK[m] > HpADizK[m + (747 - 746)]) {
                t = HpADizK[m + (41 - 40)];
                HpADizK[m + (133 - 132)] = HpADizK[m];
                HpADizK[m] = t;
            }
        }
    }
    for (kK5Nso = 0; fCZ4tScjb7 > kK5Nso; kK5Nso = kK5Nso + (133 - 132))
        printf ("%.2f ", HpADizK[kK5Nso]);
    for (yg7ZAP = 0; Ayg7wLmQDTe > yg7ZAP; yg7ZAP = yg7ZAP + (208 - 207)) {
        m = 0;
        while (Ayg7wLmQDTe -yg7ZAP - (401 - 400) > m) {
            if (b[m + (141 - 140)] > b[m]) {
                t = b[m + (442 - 441)];
                b[m + (247 - 246)] = b[m];
                b[m] = t;
            }
            m = m + (201 - 200);
        }
    }
    for (kK5Nso = 0; kK5Nso < Ayg7wLmQDTe -(903 - 902); kK5Nso = kK5Nso + 1)
        printf ("%.2f ", b[kK5Nso]);
    printf ("%.2f\n", b[Ayg7wLmQDTe -1]);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

