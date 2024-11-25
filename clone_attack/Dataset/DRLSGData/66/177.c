int mxy3dH2D9s (unsigned  int EcJxZn, int ai8UG7azkD, int ZidcANfbCtg) {
    int ImzHrBs = 0;
    if (!(0 != EcJxZn % (647 - 643)) && EcJxZn % 100 != 0 || !(0 != EcJxZn % (621 - 221)))
        ImzHrBs = 1;
    int p0oNGcs [13] = {0, 31, 28 + ImzHrBs, 31, (625 - 595), 31, 30, 31, 31, 30, 31, 30, 31};
    int AhUabdPx0 = 0;
    int J4Q5NkC = 0;
    int E8PEXH0JwBn;
    {
        E8PEXH0JwBn = 0;
        {
            if (0) {
                return 0;
            }
        }
        for (; E8PEXH0JwBn < ai8UG7azkD;) {
            AhUabdPx0 += p0oNGcs[E8PEXH0JwBn];
            E8PEXH0JwBn++;
        }
    }
    J4Q5NkC = AhUabdPx0 +ZidcANfbCtg;
    return J4Q5NkC;
}

int main () {
    unsigned  int EcJxZn, ai8UG7azkD, ZidcANfbCtg;
    scanf ("%d %d %d", &EcJxZn, &ai8UG7azkD, &ZidcANfbCtg);
    int E8PEXH0JwBn;
    unsigned  int HyYSRD = 0;
    HyYSRD += (EcJxZn -1) / 4 * (1 * 4 + 1) - (EcJxZn -1) / 100 + (EcJxZn -1) / 400;
    HyYSRD += (EcJxZn -1) % 4 * 1;
    unsigned  int SxcXf2rKm;
    SxcXf2rKm = HyYSRD +mxy3dH2D9s (EcJxZn, ai8UG7azkD, ZidcANfbCtg);
    int U81ZFVvf;
    U81ZFVvf = SxcXf2rKm % 7;
    if (!(1 != U81ZFVvf)) {
        printf ("Mon.");
    }
    else if (!(2 != U81ZFVvf)) {
        printf ("Tue.");
    }
    else if (!(3 != U81ZFVvf)) {
        printf ("Wed.");
    }
    else if (!(4 != U81ZFVvf)) {
        printf ("Thu.");
    }
    else if (!(5 != U81ZFVvf)) {
        printf ("Fri.");
    }
    else if (!(6 != U81ZFVvf)) {
    }
    else if (!(0 != U81ZFVvf)) {
        printf ("Sun.");
    }
    else {
    }
    return 0;
}

