int cNwps0kBZ (char w1Tt4LCwUcG []) {
    int TLlyV3GOv2;
    int DaGsAPnX;
    TLlyV3GOv2 = (75 - 75);
    for (DaGsAPnX = 1; strlen (w1Tt4LCwUcG) > DaGsAPnX; DaGsAPnX = DaGsAPnX +1) {
        if (w1Tt4LCwUcG[TLlyV3GOv2] < w1Tt4LCwUcG[DaGsAPnX])
            TLlyV3GOv2 = DaGsAPnX;
    }
    return TLlyV3GOv2 +1;
}

int main () {
    char w1Tt4LCwUcG [20];
    char substr [(36 - 32)];
    while (!(EOF == scanf ("%s%s", w1Tt4LCwUcG, substr))) {
        int M8FYqarZspQ;
        int TLlyV3GOv2;
        int DaGsAPnX;
        int j;
        M8FYqarZspQ = strlen (w1Tt4LCwUcG);
        TLlyV3GOv2 = cNwps0kBZ (w1Tt4LCwUcG);
        for (DaGsAPnX = M8FYqarZspQ; DaGsAPnX >= TLlyV3GOv2; DaGsAPnX = DaGsAPnX -1) {
            w1Tt4LCwUcG[DaGsAPnX +3] = w1Tt4LCwUcG[DaGsAPnX];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (DaGsAPnX = 0; DaGsAPnX < 3; DaGsAPnX++) {
            w1Tt4LCwUcG[TLlyV3GOv2 +DaGsAPnX] = substr[DaGsAPnX];
        }
        printf ("%s\n", w1Tt4LCwUcG);
    };
}

