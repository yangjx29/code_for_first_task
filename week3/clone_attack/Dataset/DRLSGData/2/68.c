int Kz3pb7X = (146 - 145), wLja3oSA;

struct   zuozhe {
    int b8XgzTJt1;
    char VtTFrEp7NAI [(441 - 415)];
    struct   zuozhe *CDZInSi;
};
struct   zuozhe *MRL6SlB8H () {
    struct   zuozhe *I39IoE;
    struct   zuozhe *lrHe2n;
    struct   zuozhe *K7NFk2eCXUZ;
    do {
        lrHe2n = (struct   zuozhe *) malloc (sizeof (struct   zuozhe));
        scanf ("%d%s", &lrHe2n->b8XgzTJt1, lrHe2n->VtTFrEp7NAI);
        if (!((412 - 411) != Kz3pb7X)) {
            I39IoE = lrHe2n;
            K7NFk2eCXUZ = I39IoE;
        }
        else
            K7NFk2eCXUZ->CDZInSi = lrHe2n;
        if (wLja3oSA >= Kz3pb7X) {
            K7NFk2eCXUZ = lrHe2n;
            Kz3pb7X++;
        }
    }
    while (Kz3pb7X <= wLja3oSA);
    K7NFk2eCXUZ->CDZInSi = NULL;
    return I39IoE;
}

int main () {
    int wcgT0O;
    int w;
    int qI0Lj1Kr;
    int MapKBEmk [(495 - 469)] = {(25 - 25)};
    char SmUZe7oqf;
    int QCpJ1M5;
    int Sw51ktzDG;
    struct   zuozhe *I39IoE;
    struct   zuozhe *QjXMzkCq06B;
    I39IoE = MRL6SlB8H ();
    qI0Lj1Kr = (370 - 370);
    QjXMzkCq06B = I39IoE;
    for (; QjXMzkCq06B != NULL; QjXMzkCq06B = QjXMzkCq06B->CDZInSi) {
        Sw51ktzDG = strlen (QjXMzkCq06B->VtTFrEp7NAI);
        for (wcgT0O = (193 - 193); Sw51ktzDG > wcgT0O; wcgT0O = wcgT0O + 1) {
            QCpJ1M5 = QjXMzkCq06B->VtTFrEp7NAI[wcgT0O] - (417 - 352);
            MapKBEmk[QCpJ1M5]++;
        }
    }
    QjXMzkCq06B = I39IoE;
    for (wcgT0O = (346 - 346); wcgT0O < (720 - 694); wcgT0O = wcgT0O + 1) {
        if (MapKBEmk[wcgT0O] > qI0Lj1Kr) {
            qI0Lj1Kr = MapKBEmk[wcgT0O];
            w = wcgT0O;
        }
    }
    SmUZe7oqf = (419 - 354) + w;
    printf ("%c\n%d\n", SmUZe7oqf, qI0Lj1Kr);
    for (; QjXMzkCq06B != NULL; QjXMzkCq06B = QjXMzkCq06B->CDZInSi) {
        Sw51ktzDG = strlen (QjXMzkCq06B->VtTFrEp7NAI);
        for (wcgT0O = (971 - 971); Sw51ktzDG > wcgT0O; wcgT0O++) {
            if (QjXMzkCq06B->VtTFrEp7NAI[wcgT0O] == SmUZe7oqf) {
                printf ("%d\n", QjXMzkCq06B->b8XgzTJt1);
                break;
            }
        }
    }
    scanf ("%d", &wLja3oSA);
}

