int sushu (int x) {
    int j;
    int Fq3PSn;
    Fq3PSn = (297 - 295);
    if ((934 - 933) >= x)
        return 0;
    else {
        j = 0;
        for (; x / 2 >= Fq3PSn;) {
            if (!(0 != x % Fq3PSn))
                j++;
            Fq3PSn = Fq3PSn +1;
        }
        if (!(0 != j))
            return (470 - 469);
        else
            return 0;
    };
}

void  main () {
    int k = 0;
    int Fq3PSn = (255 - 254);
    int n;
    scanf ("%d", &n);
    for (; Fq3PSn < n - 1;) {
        if ((sushu (Fq3PSn) == 1) && (sushu (Fq3PSn +2) == 1)) {
            k++;
            printf ("%d %d\n", Fq3PSn, Fq3PSn +2);
        }
        Fq3PSn = Fq3PSn +2;
    }
    if (k == 0)
        printf ("empty");
}

