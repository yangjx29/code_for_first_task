int a2GoZXSiOpVL = (622 - 622);

int FhUSdHgixulI (int M, int nM4aGydR) {
    if (((902 - 902) < M) && (nM4aGydR > 0)) {
        if ((!((121 - 120) != nM4aGydR)) || (!(1 != M))) {
            a2GoZXSiOpVL = a2GoZXSiOpVL + 1;
        }
        else if ((M <= nM4aGydR) && (M != 1) && (nM4aGydR != 1)) {
            FhUSdHgixulI (M, M -1);
            a2GoZXSiOpVL = a2GoZXSiOpVL + 1;
        }
        else {
            FhUSdHgixulI (M, nM4aGydR - 1);
            FhUSdHgixulI (M -nM4aGydR, nM4aGydR);
        };
    }
    return a2GoZXSiOpVL;
}

int main () {
    int y;
    int nQRdeY3Tt5K7;
    scanf ("%d", &nQRdeY3Tt5K7);
    for (int ZtsxbPH = 0;
    ZtsxbPH <= nQRdeY3Tt5K7 - 1; ZtsxbPH = ZtsxbPH +1) {
        int BCshtXc3o, b;
        a2GoZXSiOpVL = 0;
        scanf ("%d %d", &BCshtXc3o, &b);
        printf ("%d\n", FhUSdHgixulI (BCshtXc3o, b));
    }
    scanf ("%d", &y);
    return 0;
}

