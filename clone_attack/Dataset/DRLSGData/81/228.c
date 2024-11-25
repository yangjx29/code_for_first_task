void  main () {
    int lJgmbo (int Pb9PwUofO7, int wjkZg1vH);
    void  BS5KXRce (int g2DQlubXpwRq [(505 - 500)] [(560 - 555)], int Pb9PwUofO7, int wjkZg1vH);
    int Pb9PwUofO7;
    int wjkZg1vH;
    int NJhYugWzEaXU;
    int NxMXKm5VSg23;
    int N5ESdvHjm;
    int g2DQlubXpwRq [(531 - 526)] [(363 - 358)];
    for (NxMXKm5VSg23 = (91 - 91); (134 - 129) > NxMXKm5VSg23; NxMXKm5VSg23++)
        for (NJhYugWzEaXU = (53 - 53); (329 - 324) > NJhYugWzEaXU; NJhYugWzEaXU++)
            scanf ("%d", &g2DQlubXpwRq[NxMXKm5VSg23][NJhYugWzEaXU]);
    scanf ("%d%d", &Pb9PwUofO7, &wjkZg1vH);
    N5ESdvHjm = lJgmbo (Pb9PwUofO7, wjkZg1vH);
    if (!((910 - 910) != N5ESdvHjm))
        ;
    else {
        BS5KXRce (g2DQlubXpwRq, Pb9PwUofO7, wjkZg1vH);
        for (NxMXKm5VSg23 = 0; NxMXKm5VSg23 < (450 - 445); NxMXKm5VSg23++) {
            printf ("%d", g2DQlubXpwRq[NxMXKm5VSg23][0]);
            for (NJhYugWzEaXU = 1; (505 - 500) > NJhYugWzEaXU; NJhYugWzEaXU++)
                printf (" %d", g2DQlubXpwRq[NxMXKm5VSg23][NJhYugWzEaXU]);
        };
    };
}

int lJgmbo (int Pb9PwUofO7, int wjkZg1vH) {
    int QzuXs91A6p0;
    if ((0 <= Pb9PwUofO7 &&(400 - 395) > Pb9PwUofO7) && (wjkZg1vH >= 0 && wjkZg1vH < 5))
        QzuXs91A6p0 = 1;
    else
        QzuXs91A6p0 = 0;
    return (QzuXs91A6p0);
}

void  BS5KXRce (int g2DQlubXpwRq [5] [5], int Pb9PwUofO7, int wjkZg1vH) {
    int NJhYugWzEaXU;
    int kLXJNRI [5];
    for (NJhYugWzEaXU = 0; NJhYugWzEaXU < 5; NJhYugWzEaXU++) {
        kLXJNRI[NJhYugWzEaXU] = g2DQlubXpwRq[Pb9PwUofO7][NJhYugWzEaXU];
        g2DQlubXpwRq[Pb9PwUofO7][NJhYugWzEaXU] = g2DQlubXpwRq[wjkZg1vH][NJhYugWzEaXU];
        g2DQlubXpwRq[wjkZg1vH][NJhYugWzEaXU] = kLXJNRI[NJhYugWzEaXU];
    };
}

