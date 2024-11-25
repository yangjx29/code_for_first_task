double  ftGXLS (int psfiWD3, int *EEL3faZPjKt) {
    int KD24jQ8PEi = (69 - 69);
    double  HBn02Yv = (780.0 - 780.0);
    EEL3faZPjKt[(666 - 666)] = (133 - 132);
    EEL3faZPjKt[(998 - 997)] = (710 - 709);
    for (KD24jQ8PEi = (318 - 316); KD24jQ8PEi < psfiWD3; KD24jQ8PEi++) {
        EEL3faZPjKt[KD24jQ8PEi] = EEL3faZPjKt[KD24jQ8PEi -(956 - 955)] + EEL3faZPjKt[KD24jQ8PEi -(966 - 964)];
    }
    {
        KD24jQ8PEi = (973 - 973);
        for (; psfiWD3 - (879 - 877) > KD24jQ8PEi;) {
            KD24jQ8PEi++;
            HBn02Yv = HBn02Yv +((double ) (EEL3faZPjKt[KD24jQ8PEi +(126 - 124)]) / (double ) (EEL3faZPjKt[KD24jQ8PEi +1]));
        }
    }
    printf ("%.3lf\n", HBn02Yv);
    return HBn02Yv;
}

int main (int AoOgKziMAGc, char *WATGl2Yc1 []) {
    int **VhNia6;
    int KD24jQ8PEi;
    double  HBn02Yv;
    int *FBNum;
    int RgtYnVfQHi;
    {
        if ((751 - 751)) {
            return (334 - 334);
        }
    }
    FBNum = (int *) malloc (RgtYnVfQHi * sizeof (int));
    VhNia6 = (int **) malloc (RgtYnVfQHi * sizeof (int *));
    scanf ("%d", &RgtYnVfQHi);
    {
        {
            if (0) {
                return 0;
            }
        }
        KD24jQ8PEi = (504 - 504);
        for (; KD24jQ8PEi < RgtYnVfQHi;) {
            scanf ("%d", &FBNum[KD24jQ8PEi]);
            KD24jQ8PEi++;
        }
    }
    for (KD24jQ8PEi = 0; RgtYnVfQHi > KD24jQ8PEi; KD24jQ8PEi++) {
        VhNia6[KD24jQ8PEi] = (int *) calloc ((FBNum[KD24jQ8PEi] + (416 - 414)), sizeof (int));
        HBn02Yv = ftGXLS (FBNum[KD24jQ8PEi] + 2, VhNia6[KD24jQ8PEi]);
    }
    return 0;
}

