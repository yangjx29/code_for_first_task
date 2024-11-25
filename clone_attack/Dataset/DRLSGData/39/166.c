struct   student {
    char UjWMa7 [100];
    int OhAEYNcaCl3;
    int QLCg3rxBZmX;
    char VrPLdtqRb5m;
    char D23l7KC;
    int TtuFayBe0wx;
    int xwG1Azx;
    struct   student *xuLdmBn;
};
int AdukKG;
int JWnbdAC;
int LKXvoZ = 0;

int main () {
    int max;
    struct   student *S0LRrT ();
    struct   student *vpadCkUbHrAJ;
    int qfW3KrvLxaDR;
    struct   student *AoirQE1UcBT;
    struct   student *flagp;
    vpadCkUbHrAJ = S0LRrT ();
    AoirQE1UcBT = vpadCkUbHrAJ;
    max = vpadCkUbHrAJ->xwG1Azx;
    for (;;) {
        if (AoirQE1UcBT->xwG1Azx >= max) {
            max = AoirQE1UcBT->xwG1Azx;
        }
        if (!(NULL != AoirQE1UcBT->xuLdmBn)) {
            goto part2;
        }
        AoirQE1UcBT = AoirQE1UcBT->xuLdmBn;
    }
    scanf ("%d", &JWnbdAC);
part2 :
    AoirQE1UcBT = vpadCkUbHrAJ;
    {
        for (; true;) {
            if (!(AoirQE1UcBT->xwG1Azx != max)) {
                goto part1;
                flagp = AoirQE1UcBT;
            }
            if (!(NULL != AoirQE1UcBT->xuLdmBn)) {
                goto part1;
            }
            AoirQE1UcBT = AoirQE1UcBT->xuLdmBn;
        }
    }
part1 :
    ;
    printf ("%s\n%d\n%d", flagp->UjWMa7, flagp->xwG1Azx, LKXvoZ);
    return 0;
}

struct   student *S0LRrT () {
    struct   student *MpdhgItk;
    struct   student *Nug2FR3i6QL;
    struct   student *tKe5JsP;
    MpdhgItk = NULL;
    Nug2FR3i6QL = tKe5JsP = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", Nug2FR3i6QL->UjWMa7, &Nug2FR3i6QL->OhAEYNcaCl3, &Nug2FR3i6QL->QLCg3rxBZmX, &Nug2FR3i6QL->VrPLdtqRb5m, &Nug2FR3i6QL->D23l7KC, &Nug2FR3i6QL->TtuFayBe0wx);
    Nug2FR3i6QL->xwG1Azx = 0;
    if (Nug2FR3i6QL->OhAEYNcaCl3 > 80 && 1 <= Nug2FR3i6QL->TtuFayBe0wx)
        Nug2FR3i6QL->xwG1Azx += 8000;
    if (85 < Nug2FR3i6QL->OhAEYNcaCl3 && 80 < Nug2FR3i6QL->QLCg3rxBZmX)
        Nug2FR3i6QL->xwG1Azx += 4000;
    if (90 < Nug2FR3i6QL->OhAEYNcaCl3)
        Nug2FR3i6QL->xwG1Azx += 2000;
    if (85 < Nug2FR3i6QL->OhAEYNcaCl3 && !('Y' != Nug2FR3i6QL->D23l7KC))
        Nug2FR3i6QL->xwG1Azx += 1000;
    if (80 < Nug2FR3i6QL->QLCg3rxBZmX && Nug2FR3i6QL->VrPLdtqRb5m == 'Y')
        Nug2FR3i6QL->xwG1Azx += 850;
    LKXvoZ = Nug2FR3i6QL->xwG1Azx;
    AdukKG = 0;
    for (; AdukKG != JWnbdAC -1;) {
        AdukKG = AdukKG +1;
        if (AdukKG == 1)
            MpdhgItk = Nug2FR3i6QL;
        else
            tKe5JsP->xuLdmBn = Nug2FR3i6QL;
        tKe5JsP = Nug2FR3i6QL;
        Nug2FR3i6QL = (struct   student *) malloc (LEN);
        Nug2FR3i6QL->xwG1Azx = 0;
        scanf ("%s %d %d %c %c %d", Nug2FR3i6QL->UjWMa7, &Nug2FR3i6QL->OhAEYNcaCl3, &Nug2FR3i6QL->QLCg3rxBZmX, &Nug2FR3i6QL->VrPLdtqRb5m, &Nug2FR3i6QL->D23l7KC, &Nug2FR3i6QL->TtuFayBe0wx);
        if (Nug2FR3i6QL->OhAEYNcaCl3 > 80 && Nug2FR3i6QL->TtuFayBe0wx >= 1)
            Nug2FR3i6QL->xwG1Azx += 8000;
        if (Nug2FR3i6QL->OhAEYNcaCl3 > 85 && Nug2FR3i6QL->QLCg3rxBZmX > 80)
            Nug2FR3i6QL->xwG1Azx += 4000;
        if (Nug2FR3i6QL->OhAEYNcaCl3 > 90)
            Nug2FR3i6QL->xwG1Azx += 2000;
        if (Nug2FR3i6QL->OhAEYNcaCl3 > 85 && Nug2FR3i6QL->D23l7KC == 'Y')
            Nug2FR3i6QL->xwG1Azx += 1000;
        if (Nug2FR3i6QL->QLCg3rxBZmX > 80 && Nug2FR3i6QL->VrPLdtqRb5m == 'Y')
            Nug2FR3i6QL->xwG1Azx += 850;
        LKXvoZ = LKXvoZ +Nug2FR3i6QL->xwG1Azx;
    }
    tKe5JsP->xuLdmBn = Nug2FR3i6QL;
    Nug2FR3i6QL->xuLdmBn = NULL;
    return (MpdhgItk);
}

