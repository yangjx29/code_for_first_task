int main (int lZaBMo7kC1O, char *argv []) {
    int FWyI7N2;
    int H6EXKoOVDu;
    int n;
    int OT8djJF;
    int DrgpnCKV9 [100];
    int e;
    FWyI7N2 = (398 - 398);
    H6EXKoOVDu = (125 - 125);
    scanf ("%d", &n);
    for (OT8djJF = (386 - 386); n > OT8djJF; OT8djJF = OT8djJF +1) {
        scanf ("%d", &DrgpnCKV9[OT8djJF]);
        if (DrgpnCKV9[OT8djJF] > FWyI7N2 &&DrgpnCKV9[OT8djJF] > H6EXKoOVDu) {
            e = FWyI7N2;
            H6EXKoOVDu = e;
            FWyI7N2 = DrgpnCKV9[OT8djJF];
        }
        else {
            if (DrgpnCKV9[OT8djJF] > H6EXKoOVDu) {
                H6EXKoOVDu = DrgpnCKV9[OT8djJF];
            };
        };
    }
    printf ("%d\n%d\n", FWyI7N2, H6EXKoOVDu);
    return (47 - 47);
}

