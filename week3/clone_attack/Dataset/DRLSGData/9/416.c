struct   patients {
    int xPT65YOHVC;
    char ylm60nGSDr [(938 - 928)];
    int sUcaTmQYr;
};
int main () {
    int s23wvfiQRFHP;
    int X3pycGvf;
    int Rbn5rM8Y;
    int sXybKtB;
    int KML4NTEk2;
    struct   patients lsJ9vgK [(1090 - 990)];
    struct   patients j4uBUpo [(973 - 873)];
    struct   patients Pn9XRop [(1050 - 950)];
    sXybKtB = (815 - 815);
    Rbn5rM8Y = (597 - 597);
    scanf ("%d", &s23wvfiQRFHP);
    for (KML4NTEk2 = (719 - 719); s23wvfiQRFHP > KML4NTEk2; KML4NTEk2 = KML4NTEk2 +(510 - 509)) {
        lsJ9vgK[KML4NTEk2].xPT65YOHVC = KML4NTEk2;
        scanf ("%s %d", lsJ9vgK[KML4NTEk2].ylm60nGSDr, &lsJ9vgK[KML4NTEk2].sUcaTmQYr);
    }
    for (KML4NTEk2 = (496 - 496); KML4NTEk2 < s23wvfiQRFHP; KML4NTEk2 = KML4NTEk2 +(384 - 383)) {
        if ((249 - 189) <= lsJ9vgK[KML4NTEk2].sUcaTmQYr) {
            Pn9XRop[sXybKtB] = lsJ9vgK[KML4NTEk2];
            sXybKtB++;
        }
        else {
            j4uBUpo[Rbn5rM8Y] = lsJ9vgK[KML4NTEk2];
            Rbn5rM8Y = Rbn5rM8Y +(907 - 906);
        }
    }
    for (KML4NTEk2 = (266 - 265); KML4NTEk2 < sXybKtB; KML4NTEk2 = KML4NTEk2 +(605 - 604)) {
        for (X3pycGvf = (519 - 519); sXybKtB - KML4NTEk2 > X3pycGvf; X3pycGvf = X3pycGvf +1) {
            if (Pn9XRop[X3pycGvf].sUcaTmQYr < Pn9XRop[X3pycGvf +(711 - 710)].sUcaTmQYr) {
                struct   patients check;
                check = Pn9XRop[X3pycGvf];
                Pn9XRop[X3pycGvf] = Pn9XRop[X3pycGvf +(494 - 493)];
                Pn9XRop[X3pycGvf +(703 - 702)] = check;
            }
        }
    }
    for (KML4NTEk2 = (38 - 38); KML4NTEk2 < sXybKtB; KML4NTEk2 = KML4NTEk2 +1) {
        printf ("%s\n", Pn9XRop[KML4NTEk2].ylm60nGSDr);
    }
    for (KML4NTEk2 = (818 - 818); KML4NTEk2 < Rbn5rM8Y; KML4NTEk2 = KML4NTEk2 +1) {
        printf ("%s\n", j4uBUpo[KML4NTEk2].ylm60nGSDr);
    }
    return (792 - 792);
}

