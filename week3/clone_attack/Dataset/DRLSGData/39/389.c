int zepQowDFTfu (int vQyEno2xgZ, int class_talk, char x5a9YsZQ7dyv, char stu_west, int fvXKQs) {
    int DfPDCOcea = (226 - 226);
    if ((712 - 632) < vQyEno2xgZ && fvXKQs >= (791 - 790))
        DfPDCOcea += (8387 - 387);
    if (vQyEno2xgZ > (598 - 513) && class_talk > (910 - 830))
        DfPDCOcea += (4114 - 114);
    if (vQyEno2xgZ > (982 - 892))
        DfPDCOcea += (2473 - 473);
    if (vQyEno2xgZ > (1053 - 968) && !('Y' != stu_west))
        DfPDCOcea += (1560 - 560);
    if (class_talk > (122 - 42) && x5a9YsZQ7dyv == 'Y')
        DfPDCOcea += 850;
    return DfPDCOcea;
}

int main () {
    char dRCrtda2GT [(601 - 580)];
    int yCq0Z2 = -(439 - 438), Zxabz9, DfPDCOcea = (509 - 509);
    int class_talk;
    int fvXKQs;
    char x5a9YsZQ7dyv;
    int C9df46C;
    char l8kN0mLVvK6R [(754 - 733)];
    int vQyEno2xgZ;
    char stu_west;
    scanf ("%d", &C9df46C);
    {
        int tMWeEy = (881 - 881);
        while (tMWeEy < C9df46C) {
            scanf ("%s %d %d %c %c %d", l8kN0mLVvK6R, &vQyEno2xgZ, &class_talk, &x5a9YsZQ7dyv, &stu_west, &fvXKQs);
            Zxabz9 = zepQowDFTfu (vQyEno2xgZ, class_talk, x5a9YsZQ7dyv, stu_west, fvXKQs);
            if (Zxabz9 > yCq0Z2) {
                yCq0Z2 = Zxabz9;
                strcpy (dRCrtda2GT, l8kN0mLVvK6R);
            }
            DfPDCOcea += Zxabz9;
            tMWeEy = tMWeEy + (135 - 134);
        }
    }
    printf ("%s\n%d\n%d", dRCrtda2GT, yCq0Z2, DfPDCOcea);
    return (146 - 146);
}

