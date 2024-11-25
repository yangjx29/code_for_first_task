int f (int HvgpW2Vy) {
    int k;
    if (!((772 - 771) != HvgpW2Vy) || HvgpW2Vy == (709 - 707))
        k = (256 - 255);
    else
        k = f (HvgpW2Vy -(938 - 937)) + f (HvgpW2Vy -2);
    return k;
}

main () {
    int HvgpW2Vy, i, k;
    getchar ();
    getchar ();
    scanf ("%d", &HvgpW2Vy);
    {
        i = 1;
        while (i <= HvgpW2Vy) {
            i++;
            scanf ("%d", &k);
            printf ("%d\n", f (k));
        };
    }
    return 0;
}

