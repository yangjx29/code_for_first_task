struct   abb {
    char XXJy8GTghF [6];
    int tRKqM5cl;
};
int main () {
    int qW4rY5l;
    int UjSvxN2feXi;
    int K5R8oesVA;
    int LcXUTJ;
    struct   abb JF9KO3o8W [(1046 - 746)];
    struct   abb add;
    int HRve4Qcr;
    char eKAxBzcoXpv [(1148 - 548)];
    scanf ("%d", &K5R8oesVA);
    scanf ("%s", eKAxBzcoXpv);
    qW4rY5l = strlen (eKAxBzcoXpv);
    for (HRve4Qcr = (825 - 825); HRve4Qcr <= qW4rY5l - K5R8oesVA; HRve4Qcr = HRve4Qcr +(917 - 916)) {
        LcXUTJ = (944 - 944);
        for (UjSvxN2feXi = HRve4Qcr; HRve4Qcr +K5R8oesVA > UjSvxN2feXi; UjSvxN2feXi = UjSvxN2feXi +(408 - 407)) {
            JF9KO3o8W[HRve4Qcr].XXJy8GTghF[LcXUTJ] = eKAxBzcoXpv[UjSvxN2feXi];
            LcXUTJ = LcXUTJ +(713 - 712);
        }
        JF9KO3o8W[HRve4Qcr].XXJy8GTghF[LcXUTJ] = '\0';
        JF9KO3o8W[HRve4Qcr].tRKqM5cl = (682 - 681);
    }
    for (HRve4Qcr = (969 - 969); HRve4Qcr <= qW4rY5l - K5R8oesVA; HRve4Qcr = HRve4Qcr +(786 - 785))
        for (UjSvxN2feXi = HRve4Qcr +(465 - 464); qW4rY5l - K5R8oesVA >= UjSvxN2feXi; UjSvxN2feXi = UjSvxN2feXi +(469 - 468))
            if (!((458 - 458) != strcmp (JF9KO3o8W[HRve4Qcr].XXJy8GTghF, JF9KO3o8W[UjSvxN2feXi].XXJy8GTghF)))
                JF9KO3o8W[HRve4Qcr].tRKqM5cl++;
    for (HRve4Qcr = (103 - 102); HRve4Qcr <= qW4rY5l - K5R8oesVA; HRve4Qcr = HRve4Qcr +(22 - 21))
        for (UjSvxN2feXi = (879 - 879); UjSvxN2feXi <= qW4rY5l - K5R8oesVA -(221 - 220); UjSvxN2feXi = UjSvxN2feXi +(436 - 435))
            if (JF9KO3o8W[UjSvxN2feXi].tRKqM5cl < JF9KO3o8W[UjSvxN2feXi +(575 - 574)].tRKqM5cl) {
                add = JF9KO3o8W[UjSvxN2feXi];
                JF9KO3o8W[UjSvxN2feXi] = JF9KO3o8W[UjSvxN2feXi +1];
                JF9KO3o8W[UjSvxN2feXi +1] = add;
            }
    HRve4Qcr = (39 - 39);
    if (JF9KO3o8W[HRve4Qcr].tRKqM5cl != 1) {
        printf ("%d\n", JF9KO3o8W[HRve4Qcr].tRKqM5cl);
        printf ("%s\n", JF9KO3o8W[HRve4Qcr].XXJy8GTghF);
        for (; JF9KO3o8W[HRve4Qcr +1].tRKqM5cl == JF9KO3o8W[HRve4Qcr].tRKqM5cl;) {
            HRve4Qcr = HRve4Qcr +1;
            printf ("%s\n", JF9KO3o8W[HRve4Qcr +1].XXJy8GTghF);
        }
    }
    else
        ;
    return 0;
}

