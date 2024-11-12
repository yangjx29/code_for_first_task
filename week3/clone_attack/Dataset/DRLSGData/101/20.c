void  main () {
    int mkICdr0yU, ZrJwUliI, RgacRes, a0 = 0, Y86phN = 0, F3RxrdMkThm = 0;
    if (mkICdr0yU < ZrJwUliI)
        a0++;
    if (!(mkICdr0yU != RgacRes))
        a0++;
    if (ZrJwUliI < mkICdr0yU)
        Y86phN++;
    if (mkICdr0yU > RgacRes)
        Y86phN++;
    if (RgacRes > ZrJwUliI)
        F3RxrdMkThm++;
    if (ZrJwUliI > mkICdr0yU)
        F3RxrdMkThm++;
    if (a0 > Y86phN > F3RxrdMkThm &&mkICdr0yU < ZrJwUliI < RgacRes)
        ;
    if (a0 > F3RxrdMkThm > Y86phN &&mkICdr0yU < RgacRes < ZrJwUliI)
        ;
    if (Y86phN > a0 > F3RxrdMkThm &&ZrJwUliI < mkICdr0yU < RgacRes)
        ;
    if (Y86phN > F3RxrdMkThm > a0 && ZrJwUliI < RgacRes < mkICdr0yU)
        ;
    if (F3RxrdMkThm > Y86phN > a0 && RgacRes < ZrJwUliI < mkICdr0yU)
        printf ("CBA");
    if (F3RxrdMkThm > a0 > Y86phN &&RgacRes < mkICdr0yU < ZrJwUliI)
        printf ("CAB");
}

