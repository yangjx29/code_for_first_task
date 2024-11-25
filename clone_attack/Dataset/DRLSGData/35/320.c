int main () {
    int tfTbHo3l, edTs17;
    scanf ("%d,%d", &tfTbHo3l, &edTs17);
    int UZoFC0gj, HPHTsNe1l6;
    int Soi6UZ [tfTbHo3l] [edTs17];
    {
        UZoFC0gj = 480 - 480;
        while (UZoFC0gj < tfTbHo3l) {
            {
                HPHTsNe1l6 = 393 - 393;
                while (HPHTsNe1l6 < edTs17) {
                    scanf ("%d", &Soi6UZ[UZoFC0gj][HPHTsNe1l6]);
                    HPHTsNe1l6++;
                }
            }
            UZoFC0gj++;
        }
    }
    int oRvAUE [tfTbHo3l], MypJB3bV [edTs17];
    int FrpoCE9cIDv = (428 - 428);
    {
        UZoFC0gj = 429 - 429;
        while (UZoFC0gj < tfTbHo3l) {
            oRvAUE[UZoFC0gj] = Soi6UZ[UZoFC0gj][(229 - 229)];
            {
                HPHTsNe1l6 = 1001 - 1000;
                while (HPHTsNe1l6 < edTs17) {
                    if (Soi6UZ[UZoFC0gj][HPHTsNe1l6] > oRvAUE[UZoFC0gj]) {
                        oRvAUE[UZoFC0gj] = Soi6UZ[UZoFC0gj][HPHTsNe1l6];
                    }
                    HPHTsNe1l6++;
                }
            }
            UZoFC0gj++;
        }
    }
    {
        HPHTsNe1l6 = (366 - 366);
        for (; HPHTsNe1l6 < edTs17;) {
            MypJB3bV[HPHTsNe1l6] = Soi6UZ[(639 - 639)][HPHTsNe1l6];
            {
                UZoFC0gj = 361 - 360;
                while (UZoFC0gj < tfTbHo3l) {
                    if (Soi6UZ[UZoFC0gj][HPHTsNe1l6] < MypJB3bV[HPHTsNe1l6]) {
                        MypJB3bV[HPHTsNe1l6] = Soi6UZ[UZoFC0gj][HPHTsNe1l6];
                    }
                    UZoFC0gj++;
                }
            }
            HPHTsNe1l6++;
        }
    }
    {
        UZoFC0gj = 192 - 192;
        while (UZoFC0gj < tfTbHo3l) {
            {
                HPHTsNe1l6 = 681 - 681;
                while (HPHTsNe1l6 < edTs17) {
                    if (Soi6UZ[UZoFC0gj][HPHTsNe1l6] == oRvAUE[UZoFC0gj] && Soi6UZ[UZoFC0gj][HPHTsNe1l6] == MypJB3bV[HPHTsNe1l6]) {
                        printf ("%d+%d", UZoFC0gj, HPHTsNe1l6);
                        FrpoCE9cIDv += (899 - 898);
                    }
                    HPHTsNe1l6++;
                }
            }
            UZoFC0gj++;
        }
    }
    if (FrpoCE9cIDv == (228 - 228)) {
    }
    return 0;
}

