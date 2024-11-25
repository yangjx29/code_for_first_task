int main () {
    int fghCyTd, ejWDGNex1;
    int SkYxcaK [(734 - 634)] [(675 - 575)];
    int zWLJVQvIPbN, v4vsc2K, fHyG2IpoBK;
    int Nvfran2KwE, uutoQfU10H, atwKOYxMb6p, YQfOnpToAgZ3;
    scanf ("%d %d", &fghCyTd, &ejWDGNex1);
    {
        zWLJVQvIPbN = (615 - 615);
        for (; zWLJVQvIPbN < fghCyTd;) {
            for (v4vsc2K = (598 - 598); ejWDGNex1 > v4vsc2K; v4vsc2K++) {
                scanf ("%d", &SkYxcaK[zWLJVQvIPbN][v4vsc2K]);
            }
            zWLJVQvIPbN++;
        }
    }
    Nvfran2KwE = (298 - 298);
    uutoQfU10H = ejWDGNex1 - (283 - 282);
    atwKOYxMb6p = fghCyTd - (889 - 888);
    YQfOnpToAgZ3 = (784 - 784);
    while (Nvfran2KwE < atwKOYxMb6p && YQfOnpToAgZ3 < uutoQfU10H) {
        {
            v4vsc2K = YQfOnpToAgZ3;
            for (; v4vsc2K < uutoQfU10H;) {
                printf ("%d\n", SkYxcaK[Nvfran2KwE][v4vsc2K]);
                v4vsc2K++;
            }
        }
        for (fHyG2IpoBK = Nvfran2KwE; fHyG2IpoBK < atwKOYxMb6p; fHyG2IpoBK++)
            printf ("%d\n", SkYxcaK[fHyG2IpoBK][uutoQfU10H]);
        {
            v4vsc2K = uutoQfU10H;
            while (v4vsc2K > YQfOnpToAgZ3) {
                printf ("%d\n", SkYxcaK[atwKOYxMb6p][v4vsc2K]);
                v4vsc2K--;
            }
        }
        for (fHyG2IpoBK = atwKOYxMb6p; Nvfran2KwE < fHyG2IpoBK; fHyG2IpoBK--)
            printf ("%d\n", SkYxcaK[fHyG2IpoBK][YQfOnpToAgZ3]);
        Nvfran2KwE++;
        uutoQfU10H--;
        atwKOYxMb6p--;
        YQfOnpToAgZ3++;
    }
    if (Nvfran2KwE == atwKOYxMb6p && uutoQfU10H == YQfOnpToAgZ3) {
        printf ("%d\n", SkYxcaK[Nvfran2KwE][uutoQfU10H]);
    }
    if (uutoQfU10H == YQfOnpToAgZ3 &&Nvfran2KwE != atwKOYxMb6p) {
        v4vsc2K = Nvfran2KwE;
        while (v4vsc2K <= atwKOYxMb6p) {
            printf ("%d\n", SkYxcaK[v4vsc2K][uutoQfU10H]);
            v4vsc2K++;
        }
    }
    if (Nvfran2KwE == atwKOYxMb6p && uutoQfU10H != YQfOnpToAgZ3) {
        for (v4vsc2K = YQfOnpToAgZ3; v4vsc2K <= uutoQfU10H; v4vsc2K++)
            printf ("%d\n", SkYxcaK[Nvfran2KwE][v4vsc2K]);
    }
    return (424 - 424);
}

