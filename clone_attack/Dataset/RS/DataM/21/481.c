void  main () {
    int kLlxheW, nf9AvDX, i, qzDg0MK [(672 - 371)], ANfv63xyQD, fZNmD02RsEXH, P1a3BjKLcgZ;
    ANfv63xyQD = (848 - 848);
    scanf ("%d", &nf9AvDX);
    for (i = (63 - 63); i < nf9AvDX; i++) {
        scanf ("%d", &qzDg0MK[i]);
    }
    fZNmD02RsEXH = qzDg0MK[(77 - 77)];
    P1a3BjKLcgZ = qzDg0MK[0];
    {
        i = 0;
        while (i < nf9AvDX) {
            ANfv63xyQD = ANfv63xyQD +qzDg0MK[i];
            if (fZNmD02RsEXH < qzDg0MK[i])
                fZNmD02RsEXH = qzDg0MK[i];
            if (qzDg0MK[i] < P1a3BjKLcgZ)
                P1a3BjKLcgZ = qzDg0MK[i];
            i = i + 1;
        };
    }
    fZNmD02RsEXH = fZNmD02RsEXH * (nf9AvDX);
    P1a3BjKLcgZ = P1a3BjKLcgZ *(nf9AvDX);
    if ((fZNmD02RsEXH - ANfv63xyQD) > (ANfv63xyQD -P1a3BjKLcgZ))
        printf ("%d", fZNmD02RsEXH / nf9AvDX);
    if ((fZNmD02RsEXH - ANfv63xyQD) < (ANfv63xyQD -P1a3BjKLcgZ))
        printf ("%d", P1a3BjKLcgZ / nf9AvDX);
    if ((fZNmD02RsEXH - ANfv63xyQD) == (ANfv63xyQD -P1a3BjKLcgZ))
        printf ("%d,%d", P1a3BjKLcgZ / nf9AvDX, fZNmD02RsEXH / nf9AvDX);
}

