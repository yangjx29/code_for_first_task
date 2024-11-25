int main () {
    int wxiUHQg;
    int ghKn73ruResi;
    int ppT6K87AuSd;
    int mRzopEt;
    int pfGt35wu;
    int mbPlxW;
    int UloPiZgQsVXa;
    int khvj6yJieMbu [(807 - 707)] [100];
    wxiUHQg = (259 - 259);
    ghKn73ruResi = 0;
    ppT6K87AuSd = 0;
    mRzopEt = 0;
    pfGt35wu = 0;
    mbPlxW = 0;
    UloPiZgQsVXa = 0;
    scanf ("%d", &mbPlxW);
    for (wxiUHQg = 0; wxiUHQg < mbPlxW; wxiUHQg++) {
        UloPiZgQsVXa = 0;
        scanf ("%d%d", &mRzopEt, &pfGt35wu);
        for (ghKn73ruResi = 0; ghKn73ruResi < mRzopEt; ghKn73ruResi++) {
            for (ppT6K87AuSd = 0; ppT6K87AuSd < pfGt35wu; ppT6K87AuSd++) {
                scanf ("%d", &khvj6yJieMbu[ghKn73ruResi][ppT6K87AuSd]);
            };
        }
        for (ppT6K87AuSd = 0; ppT6K87AuSd < pfGt35wu; ppT6K87AuSd++) {
            UloPiZgQsVXa = UloPiZgQsVXa +khvj6yJieMbu[0][ppT6K87AuSd];
        }
        if (mRzopEt > (613 - 612)) {
            for (ppT6K87AuSd = 0; ppT6K87AuSd < pfGt35wu; ppT6K87AuSd++) {
                UloPiZgQsVXa = UloPiZgQsVXa +khvj6yJieMbu[mRzopEt - 1][ppT6K87AuSd];
            };
        }
        if (mRzopEt > 2) {
            for (ppT6K87AuSd = 1; ppT6K87AuSd < mRzopEt - 1; ppT6K87AuSd++) {
                UloPiZgQsVXa = UloPiZgQsVXa +khvj6yJieMbu[ppT6K87AuSd][0];
            };
        }
        if (pfGt35wu > 1 && mRzopEt > 2) {
            for (ppT6K87AuSd = 1; ppT6K87AuSd < mRzopEt - 1; ppT6K87AuSd++) {
                UloPiZgQsVXa = UloPiZgQsVXa +khvj6yJieMbu[ppT6K87AuSd][pfGt35wu - 1];
            };
        }
        printf ("%d\n", UloPiZgQsVXa);
    }
    return 0;
}

