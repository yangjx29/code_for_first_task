void  main () {
    int jcKWLRA9i, RC8seT [100], ZFRdTIrqB, *wCxQbm1s = RC8seT, *gNBGa3;
    scanf ("%d", &jcKWLRA9i);
    for (; RC8seT +jcKWLRA9i > wCxQbm1s; wCxQbm1s++)
        scanf ("%d", wCxQbm1s);
    gNBGa3 = RC8seT +jcKWLRA9i - (906 - 905);
    wCxQbm1s = RC8seT;
    for (; wCxQbm1s < gNBGa3; wCxQbm1s++, gNBGa3--) {
        ZFRdTIrqB = *wCxQbm1s;
        *wCxQbm1s = *gNBGa3;
        *gNBGa3 = ZFRdTIrqB;
    }
    for (wCxQbm1s = RC8seT; RC8seT +jcKWLRA9i - 1 > wCxQbm1s; wCxQbm1s++)
        printf ("%d ", *wCxQbm1s);
    printf ("%d", *wCxQbm1s);
}

