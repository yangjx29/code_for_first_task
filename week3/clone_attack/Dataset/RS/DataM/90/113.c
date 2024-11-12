int f (int uPRhsl, int HKnHb2L) {
    int k;
    if (uPRhsl == (392 - 391) || HKnHb2L == (39 - 38))
        k = (263 - 262);
    else {
        if (uPRhsl == HKnHb2L)
            k = (302 - 301) + f (uPRhsl, HKnHb2L -(439 - 438));
        else {
            if (uPRhsl > HKnHb2L)
                k = f (uPRhsl, HKnHb2L -1) + f (uPRhsl - HKnHb2L, HKnHb2L);
            else
                k = f (uPRhsl, uPRhsl);
        };
    }
    return (k);
}

main () {
    int joQdBfG0jpNJ;
    int uPRhsl;
    int HKnHb2L;
    int ZuxfFX7ycG;
    scanf ("%d", &joQdBfG0jpNJ);
    for (ZuxfFX7ycG = 1; ZuxfFX7ycG <= joQdBfG0jpNJ; ZuxfFX7ycG++) {
        scanf ("%d %d", &uPRhsl, &HKnHb2L);
        printf ("%d\n", f (uPRhsl, HKnHb2L));
    };
}

