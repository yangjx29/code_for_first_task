int main () {
    int SuhoPCHgt;
    int z;
    int kGIWLD;
    int bpLlCO;
    int sz [(677 - 669)] [(196 - 188)];
    int ZpcNl3TktZM;
    int j;
    int DdB4OmEKsZr [(778 - 770)] = {(254 - 254)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    SuhoPCHgt = (833 - 833);
    z = (756 - 756);
    scanf ("%d,%d", &kGIWLD, &bpLlCO);
    for (ZpcNl3TktZM = (168 - 168); ZpcNl3TktZM < kGIWLD; ZpcNl3TktZM++) {
        for (j = (72 - 72); bpLlCO > j; j = j + 1) {
            scanf ("%d", &sz[ZpcNl3TktZM][j]);
        };
    }
    for (ZpcNl3TktZM = (675 - 675); ZpcNl3TktZM < kGIWLD; ZpcNl3TktZM++) {
        for (j = 1; j < bpLlCO; j++) {
            if (sz[ZpcNl3TktZM][DdB4OmEKsZr[ZpcNl3TktZM]] < sz[ZpcNl3TktZM][j]) {
                DdB4OmEKsZr[ZpcNl3TktZM] = j;
            };
        };
    }
    for (ZpcNl3TktZM = 0; ZpcNl3TktZM < kGIWLD; ZpcNl3TktZM++) {
        for (j = 0; j < kGIWLD; j++) {
            if (sz[ZpcNl3TktZM][DdB4OmEKsZr[ZpcNl3TktZM]] < sz[j][DdB4OmEKsZr[ZpcNl3TktZM]])
                z++;
        }
        if (z == kGIWLD - 1) {
            SuhoPCHgt++;
            break;
        }
        else
            z = 0;
    }
    if (SuhoPCHgt == 0)
        printf ("No");
    else {
        printf ("%d+%d", ZpcNl3TktZM, DdB4OmEKsZr[ZpcNl3TktZM]);
    }
    return 0;
}

