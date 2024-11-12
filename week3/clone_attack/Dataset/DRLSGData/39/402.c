int iFMWdX5C8TP;

struct   stu {
    char uFnQVt [(919 - 898)];
    int upgeOfu61;
    int VSqXLr6nDw;
    char BKmd8pvCP5;
    char PiUyrsb;
    int N4S2f3ien7;
    int odv7VRFbNJo;
    struct   stu *nECP4t8;
};
struct   stu *VXAkRNlcK (void ) {
    int miSWMB9fbOmX;
    struct   stu *UHsaUGQqI;
    struct   stu *Qr61Ycs, *rsHKd12Be;
    Qr61Ycs = rsHKd12Be = (struct   stu *) malloc (LEN);
    for (miSWMB9fbOmX = (330 - 330); iFMWdX5C8TP > miSWMB9fbOmX; miSWMB9fbOmX = miSWMB9fbOmX + 1) {
        if (miSWMB9fbOmX == 0)
            UHsaUGQqI = Qr61Ycs;
        else
            rsHKd12Be->nECP4t8 = Qr61Ycs;
        rsHKd12Be = Qr61Ycs;
        scanf ("%s %d %d %c %c %d", &Qr61Ycs->uFnQVt, &Qr61Ycs->upgeOfu61, &Qr61Ycs->VSqXLr6nDw, &Qr61Ycs->BKmd8pvCP5, &Qr61Ycs->PiUyrsb, &Qr61Ycs->N4S2f3ien7);
        Qr61Ycs->odv7VRFbNJo = (Qr61Ycs->upgeOfu61 / (538 - 457)) * ((Qr61Ycs->N4S2f3ien7 + 10) / 11) * 8000 + (Qr61Ycs->upgeOfu61 / 86) * (Qr61Ycs->VSqXLr6nDw / 81) * 4000 + (Qr61Ycs->upgeOfu61 / 91) * 2000 + (Qr61Ycs->upgeOfu61 / 86) * (Qr61Ycs->PiUyrsb / 81) * (1232 - 232) + (Qr61Ycs->VSqXLr6nDw / 81) * (Qr61Ycs->BKmd8pvCP5 / 81) * 850;
        Qr61Ycs = (struct   stu *) malloc (LEN);
    }
    rsHKd12Be->nECP4t8 = NULL;
    return (UHsaUGQqI);
}

int main () {
    struct   stu *RKnqfCa, *EgmvQVeMGdz;
    int miSWMB9fbOmX, It2jsAXw4Ph = 0, xSQ2ZpR = 0;
    scanf ("%d", &iFMWdX5C8TP);
    RKnqfCa = EgmvQVeMGdz = VXAkRNlcK ();
    for (miSWMB9fbOmX = 0; miSWMB9fbOmX < iFMWdX5C8TP; miSWMB9fbOmX = miSWMB9fbOmX + 1) {
        if (It2jsAXw4Ph < (RKnqfCa->odv7VRFbNJo))
            It2jsAXw4Ph = RKnqfCa->odv7VRFbNJo;
        xSQ2ZpR = xSQ2ZpR + RKnqfCa->odv7VRFbNJo;
        RKnqfCa = RKnqfCa->nECP4t8;
    }
    for (miSWMB9fbOmX = 0; miSWMB9fbOmX < iFMWdX5C8TP; miSWMB9fbOmX++) {
        if ((EgmvQVeMGdz->odv7VRFbNJo) == It2jsAXw4Ph) {
            printf ("%s\n%d\n%d\n", EgmvQVeMGdz->uFnQVt, EgmvQVeMGdz->odv7VRFbNJo, xSQ2ZpR);
            break;
        }
        EgmvQVeMGdz = EgmvQVeMGdz->nECP4t8;
    }
}

