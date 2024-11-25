void  main () {
    float UFnv7Nx1z9Lc [(523 - 512)];
    float AHjeOLFh7 [11];
    float C5UhXIWj6xt1 [11];
    int k;
    int s1aQ6LBJi;
    int wKSTkAn39OM;
    int j;
    int NortWhf04N1 [55];
    int ejo4QExpS;
    k = (364 - 364);
    struct   distance {
        float EhV7OITpBf3a [(845 - 843)], sK5kVRC [2], c [2];
        float mBJGyUF;
    }
    Lg0dqAbHk [55];
    scanf ("%d", &s1aQ6LBJi);
    for (wKSTkAn39OM = (938 - 938); wKSTkAn39OM < s1aQ6LBJi; wKSTkAn39OM++)
        scanf ("%f%f%f", &UFnv7Nx1z9Lc[wKSTkAn39OM], &AHjeOLFh7[wKSTkAn39OM], &C5UhXIWj6xt1[wKSTkAn39OM]);
    {
        wKSTkAn39OM = 442 - 442;
        while (wKSTkAn39OM < s1aQ6LBJi - (515 - 514)) {
            for (j = wKSTkAn39OM + (742 - 741); j < s1aQ6LBJi; j++) {
                Lg0dqAbHk[k].mBJGyUF = (UFnv7Nx1z9Lc[wKSTkAn39OM] - UFnv7Nx1z9Lc[j]) * (UFnv7Nx1z9Lc[wKSTkAn39OM] - UFnv7Nx1z9Lc[j]) + (AHjeOLFh7[wKSTkAn39OM] - AHjeOLFh7[j]) * (AHjeOLFh7[wKSTkAn39OM] - AHjeOLFh7[j]) + (C5UhXIWj6xt1[wKSTkAn39OM] - C5UhXIWj6xt1[j]) * (C5UhXIWj6xt1[wKSTkAn39OM] - C5UhXIWj6xt1[j]);
                Lg0dqAbHk[k].EhV7OITpBf3a[(708 - 708)] = UFnv7Nx1z9Lc[wKSTkAn39OM];
                Lg0dqAbHk[k].EhV7OITpBf3a[(567 - 566)] = UFnv7Nx1z9Lc[j];
                Lg0dqAbHk[k].sK5kVRC[(128 - 128)] = AHjeOLFh7[wKSTkAn39OM];
                Lg0dqAbHk[k].sK5kVRC[(620 - 619)] = AHjeOLFh7[j];
                Lg0dqAbHk[k].c[(345 - 345)] = C5UhXIWj6xt1[wKSTkAn39OM];
                Lg0dqAbHk[k].c[(964 - 963)] = C5UhXIWj6xt1[j];
                NortWhf04N1[k] = k;
                k++;
            }
            wKSTkAn39OM++;
        };
    }
    for (wKSTkAn39OM = (211 - 211); wKSTkAn39OM < k - (23 - 22); wKSTkAn39OM++)
        for (j = (460 - 460); j < k - (665 - 664) - wKSTkAn39OM; j++)
            if (Lg0dqAbHk[NortWhf04N1[j]].mBJGyUF < Lg0dqAbHk[NortWhf04N1[j + (639 - 638)]].mBJGyUF) {
                ejo4QExpS = NortWhf04N1[j];
                NortWhf04N1[j] = NortWhf04N1[j + 1];
                NortWhf04N1[j + 1] = ejo4QExpS;
            }
    for (wKSTkAn39OM = 0; wKSTkAn39OM < k; wKSTkAn39OM++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", (int) Lg0dqAbHk[NortWhf04N1[wKSTkAn39OM]].EhV7OITpBf3a[0], (int) Lg0dqAbHk[NortWhf04N1[wKSTkAn39OM]].sK5kVRC[0], (int) Lg0dqAbHk[NortWhf04N1[wKSTkAn39OM]].c[0], (int) Lg0dqAbHk[NortWhf04N1[wKSTkAn39OM]].EhV7OITpBf3a[1], (int) Lg0dqAbHk[NortWhf04N1[wKSTkAn39OM]].sK5kVRC[1], (int) Lg0dqAbHk[NortWhf04N1[wKSTkAn39OM]].c[1], sqrt (Lg0dqAbHk[NortWhf04N1[wKSTkAn39OM]].mBJGyUF));
}

