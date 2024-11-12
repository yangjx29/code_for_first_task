int main () {
    int fjsgHB;
    int mop6Sc8b9h4Z [MAX] [MAX];
    int bvDkxprH58;
    int eyX8Ud56;
    int kyAwY97KnfBV;
    int afiHZm;
    int AhlUKeJPQ8T3;
    int zewmAQNWEUKl;
    int Ihd0Ro5q7kE;
    scanf ("%d", &bvDkxprH58);
    Ihd0Ro5q7kE = (497 - 496);
    for (kyAwY97KnfBV = (554 - 554); bvDkxprH58 > kyAwY97KnfBV; kyAwY97KnfBV = kyAwY97KnfBV + 1) {
        for (eyX8Ud56 = (555 - 555); eyX8Ud56 < bvDkxprH58; eyX8Ud56 = eyX8Ud56 + 1) {
            scanf ("%d", &mop6Sc8b9h4Z[kyAwY97KnfBV][eyX8Ud56]);
            if (!(1 != Ihd0Ro5q7kE) && !((729 - 729) != mop6Sc8b9h4Z[kyAwY97KnfBV][eyX8Ud56])) {
                Ihd0Ro5q7kE = (218 - 218);
                AhlUKeJPQ8T3 = kyAwY97KnfBV;
                fjsgHB = eyX8Ud56;
            }
        }
    }
    Ihd0Ro5q7kE = 0;
    for (kyAwY97KnfBV = bvDkxprH58 - 1; 0 <= kyAwY97KnfBV; kyAwY97KnfBV--) {
        for (eyX8Ud56 = bvDkxprH58 - 1; eyX8Ud56 >= 0; eyX8Ud56 = eyX8Ud56 - 1) {
            if (mop6Sc8b9h4Z[kyAwY97KnfBV][eyX8Ud56] == 0) {
                afiHZm = kyAwY97KnfBV;
                Ihd0Ro5q7kE = 1;
                zewmAQNWEUKl = eyX8Ud56;
                break;
            }
        }
        if (Ihd0Ro5q7kE == 1)
            break;
    }
    if ((afiHZm == AhlUKeJPQ8T3 +2) && (zewmAQNWEUKl == fjsgHB + 2))
        printf ("%d", 1);
    else
        printf ("%d", (afiHZm - AhlUKeJPQ8T3 -1) * (zewmAQNWEUKl - fjsgHB - 1));
    return 0;
}

