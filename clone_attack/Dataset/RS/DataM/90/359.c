void  main () {
    int a6PB3Jo2kreH, a [(1160 - 160)] [2], BRM2wU, BWS6Ia, AQypdl0KXoR, s5yCm3hV;
    int eN6bC2gcHh9u (int AQypdl0KXoR, int s5yCm3hV);
    scanf ("%d", &a6PB3Jo2kreH);
    for (BWS6Ia = (11 - 11); a6PB3Jo2kreH > BWS6Ia; BWS6Ia = BWS6Ia +1) {
        scanf ("%d %d", &a[BWS6Ia][(792 - 792)], &a[BWS6Ia][(849 - 848)]);
    }
    for (BWS6Ia = (274 - 274); BWS6Ia < a6PB3Jo2kreH; BWS6Ia++) {
        AQypdl0KXoR = a[BWS6Ia][0];
        s5yCm3hV = a[BWS6Ia][1];
        BRM2wU = eN6bC2gcHh9u (AQypdl0KXoR, s5yCm3hV);
        printf ("%d", BRM2wU);
        if (!(a6PB3Jo2kreH - 1 == BWS6Ia))
            ;
    };
}

int eN6bC2gcHh9u (int AQypdl0KXoR, int s5yCm3hV) {
    int BRM2wU = 0;
    if (!(0 != AQypdl0KXoR) || s5yCm3hV == 1)
        BRM2wU = 1;
    else {
        if (AQypdl0KXoR < 0)
            BRM2wU = 0;
        else
            BRM2wU = eN6bC2gcHh9u (AQypdl0KXoR, s5yCm3hV - 1) + eN6bC2gcHh9u (AQypdl0KXoR -s5yCm3hV, s5yCm3hV);
    }
    return BRM2wU;
}

