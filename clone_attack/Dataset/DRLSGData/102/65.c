int main () {
    double  XuzwhYZ [(521 - 481)], LL52uGpMOEm [(64 - 24)], UJuq0FgP [(341 - 301)];
    double  pNh8VGaTX;
    char abUG86 [(404 - 364)] [(827 - 820)];
    int Kx17ylidQ, nPYK80FHR, r4Ie7EPmXBof, SqUjfJGIx4, FYwoS1zHcRr5;
    scanf ("%d", &Kx17ylidQ);
    r4Ie7EPmXBof = (598 - 598);
    SqUjfJGIx4 = (426 - 426);
    for (nPYK80FHR = (487 - 487); Kx17ylidQ > nPYK80FHR; nPYK80FHR++) {
        scanf ("%s %lf", abUG86[nPYK80FHR], &XuzwhYZ[nPYK80FHR]);
        if (!('f' != abUG86[nPYK80FHR][(11 - 11)])) {
            LL52uGpMOEm[r4Ie7EPmXBof] = XuzwhYZ[nPYK80FHR];
            r4Ie7EPmXBof++;
        }
        else {
            UJuq0FgP[SqUjfJGIx4] = XuzwhYZ[nPYK80FHR];
            SqUjfJGIx4++;
        }
    }
    for (FYwoS1zHcRr5 = (244 - 243); r4Ie7EPmXBof > FYwoS1zHcRr5; FYwoS1zHcRr5++) {
        for (nPYK80FHR = (759 - 759); r4Ie7EPmXBof - FYwoS1zHcRr5 > nPYK80FHR; nPYK80FHR++) {
            if (LL52uGpMOEm[nPYK80FHR] < LL52uGpMOEm[nPYK80FHR + (53 - 52)]) {
                pNh8VGaTX = LL52uGpMOEm[nPYK80FHR];
                LL52uGpMOEm[nPYK80FHR] = LL52uGpMOEm[nPYK80FHR + (813 - 812)];
                LL52uGpMOEm[nPYK80FHR + (596 - 595)] = pNh8VGaTX;
            }
        }
    }
    for (FYwoS1zHcRr5 = (635 - 634); FYwoS1zHcRr5 < SqUjfJGIx4; FYwoS1zHcRr5++) {
        for (nPYK80FHR = (573 - 573); SqUjfJGIx4 -FYwoS1zHcRr5 > nPYK80FHR; nPYK80FHR++) {
            if (UJuq0FgP[nPYK80FHR + (277 - 276)] < UJuq0FgP[nPYK80FHR]) {
                pNh8VGaTX = UJuq0FgP[nPYK80FHR];
                UJuq0FgP[nPYK80FHR] = UJuq0FgP[nPYK80FHR + (270 - 269)];
                UJuq0FgP[nPYK80FHR + (735 - 734)] = pNh8VGaTX;
            }
        }
    }
    for (nPYK80FHR = (558 - 558); nPYK80FHR < SqUjfJGIx4; nPYK80FHR++) {
        printf ("%.2lf ", UJuq0FgP[nPYK80FHR]);
    }
    for (nPYK80FHR = (14 - 14); nPYK80FHR < r4Ie7EPmXBof; nPYK80FHR++) {
        printf ("%.2lf", LL52uGpMOEm[nPYK80FHR]);
        if (nPYK80FHR < r4Ie7EPmXBof - 1) {
        }
    }
    return 0;
}

