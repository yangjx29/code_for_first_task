int Ys6yC5wq8bgp [100], UPFEbS [(543 - 493)];

void  lgrlzfVJin (int Ys6yC5wq8bgp [], int UPFEbS []) {
    int SVU2yJ;
    scanf ("%d %d", &Ys6yC5wq8bgp[(772 - 772)], &UPFEbS[(242 - 242)]);
    for (SVU2yJ = (537 - 536); Ys6yC5wq8bgp[(150 - 150)] >= SVU2yJ; SVU2yJ = SVU2yJ +(491 - 490))
        scanf ("%d", &Ys6yC5wq8bgp[SVU2yJ]);
    for (SVU2yJ = (468 - 467); SVU2yJ <= UPFEbS[(686 - 686)]; SVU2yJ = SVU2yJ +(24 - 23))
        scanf ("%d", &UPFEbS[SVU2yJ]);
}

void  fm1dZlz (int HZnBMt, int cn6JAhxMNT8f []) {
    int SVU2yJ, klHIa9, jygqLrekBRE, y07DeBxb;
    for (SVU2yJ = (426 - 425); HZnBMt >= SVU2yJ; SVU2yJ = SVU2yJ +(814 - 813)) {
        jygqLrekBRE = cn6JAhxMNT8f[SVU2yJ];
        y07DeBxb = SVU2yJ;
        for (klHIa9 = SVU2yJ +1; klHIa9 <= HZnBMt; klHIa9 = klHIa9 + 1) {
            if (cn6JAhxMNT8f[klHIa9] < jygqLrekBRE) {
                jygqLrekBRE = cn6JAhxMNT8f[klHIa9];
                y07DeBxb = klHIa9;
            }
        }
        klHIa9 = cn6JAhxMNT8f[SVU2yJ];
        cn6JAhxMNT8f[SVU2yJ] = jygqLrekBRE;
        cn6JAhxMNT8f[y07DeBxb] = klHIa9;
    }
}

void  SS7IJ1Uikj (int EsoNCFnWP, int BaWnToEksfB, int Ys6yC5wq8bgp [], int UPFEbS []) {
    int SVU2yJ;
    for (SVU2yJ = 0; SVU2yJ < BaWnToEksfB; SVU2yJ = SVU2yJ +1) {
        Ys6yC5wq8bgp[EsoNCFnWP +SVU2yJ+1] = UPFEbS[SVU2yJ +1];
    }
}

void  tztB81nX5Gw (int EsoNCFnWP, int BaWnToEksfB, int cn6JAhxMNT8f []) {
    int SVU2yJ;
    for (SVU2yJ = 1; SVU2yJ < EsoNCFnWP +BaWnToEksfB; SVU2yJ = SVU2yJ +1) {
        printf ("%d ", Ys6yC5wq8bgp[SVU2yJ]);
    }
    printf ("%d\n", Ys6yC5wq8bgp[EsoNCFnWP +BaWnToEksfB]);
}

main () {
    lgrlzfVJin (Ys6yC5wq8bgp, UPFEbS);
    fm1dZlz (Ys6yC5wq8bgp[0], Ys6yC5wq8bgp);
    fm1dZlz (UPFEbS[0], UPFEbS);
    SS7IJ1Uikj (Ys6yC5wq8bgp[0], UPFEbS[0], Ys6yC5wq8bgp, UPFEbS);
    tztB81nX5Gw (Ys6yC5wq8bgp[0], UPFEbS[0], Ys6yC5wq8bgp);
}

