int main () {
    int W67zLa3 [(447 - 347)], oi56VgPo8 [100];
    int BoHj4r;
    int XYRgn5r;
    int LD2a4bnZLyT;
    int zzIQNtcXE6v;
    int vDQOdPA;
    LD2a4bnZLyT = (515 - 515);
    scanf ("%d\n", &BoHj4r);
    scanf ("%d", &W67zLa3[(355 - 355)]);
    for (XYRgn5r = 1; XYRgn5r < BoHj4r; XYRgn5r = XYRgn5r +1) {
        scanf (" %d", &W67zLa3[XYRgn5r]);
    }
    oi56VgPo8[(996 - 996)] = W67zLa3[(93 - 93)];
    vDQOdPA = (745 - 745);
    for (XYRgn5r = (459 - 459); XYRgn5r < BoHj4r; XYRgn5r++) {
        vDQOdPA = (387 - 387);
        for (zzIQNtcXE6v = 0; zzIQNtcXE6v < LD2a4bnZLyT +1; zzIQNtcXE6v = zzIQNtcXE6v + 1) {
            if (W67zLa3[XYRgn5r] == oi56VgPo8[zzIQNtcXE6v]) {
                vDQOdPA = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
        }
        if (vDQOdPA == 0) {
            LD2a4bnZLyT++;
            oi56VgPo8[LD2a4bnZLyT] = W67zLa3[XYRgn5r];
        };
    }
    for (XYRgn5r = 0; XYRgn5r < LD2a4bnZLyT; XYRgn5r++) {
        printf ("%d,", oi56VgPo8[XYRgn5r]);
    }
    printf ("%d", oi56VgPo8[LD2a4bnZLyT]);
    return 0;
}

