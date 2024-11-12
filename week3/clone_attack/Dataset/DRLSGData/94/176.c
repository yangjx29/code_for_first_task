int main () {
    int cyldYWKj3wxi [(1088 - 88)];
    int FV67UlWSR;
    int GFfq1TGRo2;
    int Jx6Zyh;
    int OmdYnO;
    int QbsI0uT [1000];
    int RAQ5MTDOGfZ1;
    int mDBxslFQ2;
    scanf ("%d", &mDBxslFQ2);
    RAQ5MTDOGfZ1 = (599 - 599);
    FV67UlWSR = (90 - 90);
    {
        FV67UlWSR = (740 - 740);
        for (; mDBxslFQ2 > FV67UlWSR;) {
            scanf ("%d ", &QbsI0uT[FV67UlWSR]);
            FV67UlWSR = FV67UlWSR +(714 - 713);
        }
    }
    {
        FV67UlWSR = (121 - 121);
        for (; FV67UlWSR < mDBxslFQ2;) {
            if (!((38 - 37) != QbsI0uT[FV67UlWSR] % 2)) {
                cyldYWKj3wxi[RAQ5MTDOGfZ1] = QbsI0uT[FV67UlWSR];
                RAQ5MTDOGfZ1 = RAQ5MTDOGfZ1 +1;
            }
            FV67UlWSR = FV67UlWSR +1;
        }
    }
    Jx6Zyh = RAQ5MTDOGfZ1;
    RAQ5MTDOGfZ1 = (175 - 175);
    GFfq1TGRo2 = 1;
    for (GFfq1TGRo2 = 1; GFfq1TGRo2 <= Jx6Zyh; GFfq1TGRo2 = GFfq1TGRo2 +1) {
        for (RAQ5MTDOGfZ1 = 0; RAQ5MTDOGfZ1 < Jx6Zyh -GFfq1TGRo2; RAQ5MTDOGfZ1 = RAQ5MTDOGfZ1 +1) {
            if (cyldYWKj3wxi[RAQ5MTDOGfZ1] > cyldYWKj3wxi[RAQ5MTDOGfZ1 +1]) {
                OmdYnO = cyldYWKj3wxi[RAQ5MTDOGfZ1 +1];
                cyldYWKj3wxi[RAQ5MTDOGfZ1 +1] = cyldYWKj3wxi[RAQ5MTDOGfZ1];
                cyldYWKj3wxi[RAQ5MTDOGfZ1] = OmdYnO;
            }
        }
    }
    {
        RAQ5MTDOGfZ1 = 0;
        for (; RAQ5MTDOGfZ1 < Jx6Zyh -1;) {
            printf ("%d,", cyldYWKj3wxi[RAQ5MTDOGfZ1]);
            RAQ5MTDOGfZ1 = RAQ5MTDOGfZ1 +1;
        }
    }
    printf ("%d", cyldYWKj3wxi[Jx6Zyh -1]);
    return 0;
}

