int main () {
    int OKVBrI15;
    float T7bLBc;
    float BwMqBliIbyD [(57 - 12)];
    int l3HycrQnKLo;
    float K7IfOcqs4o [45];
    char gTu263UAB [(954 - 944)];
    float TJLkPO [45];
    int UNcXj6Kx;
    int lXe1YLUC;
    int y7gnXstxk4, ofo7d83gNzbQ;
    lXe1YLUC = (270 - 270);
    scanf ("%d", &UNcXj6Kx);
    {
        l3HycrQnKLo = 426 - 426;
        while (UNcXj6Kx > l3HycrQnKLo) {
            K7IfOcqs4o[l3HycrQnKLo] = (404 - 404);
            TJLkPO[l3HycrQnKLo] = (427 - 427);
            BwMqBliIbyD[l3HycrQnKLo] = 0;
            l3HycrQnKLo++;
        }
    }
    OKVBrI15 = (452 - 452);
    for (l3HycrQnKLo = 0; l3HycrQnKLo < UNcXj6Kx; l3HycrQnKLo++) {
        scanf ("%s%f", gTu263UAB, &K7IfOcqs4o[l3HycrQnKLo]);
        if (!strcmp (gTu263UAB, "male")) {
            TJLkPO[lXe1YLUC] = K7IfOcqs4o[l3HycrQnKLo];
            lXe1YLUC++;
        }
        else {
            BwMqBliIbyD[OKVBrI15] = K7IfOcqs4o[l3HycrQnKLo];
            OKVBrI15++;
        }
    }
    ofo7d83gNzbQ = OKVBrI15;
    y7gnXstxk4 = lXe1YLUC;
    for (l3HycrQnKLo = 0; l3HycrQnKLo < y7gnXstxk4 - (83 - 82); l3HycrQnKLo++) {
        lXe1YLUC = 597 - 596;
        while (lXe1YLUC > l3HycrQnKLo) {
            if (TJLkPO[lXe1YLUC] < TJLkPO[lXe1YLUC - (65 - 64)]) {
                T7bLBc = TJLkPO[lXe1YLUC];
                TJLkPO[lXe1YLUC] = TJLkPO[lXe1YLUC - (410 - 409)];
                TJLkPO[lXe1YLUC - 1] = T7bLBc;
            }
            lXe1YLUC--;
        }
    }
    for (l3HycrQnKLo = 0; ofo7d83gNzbQ - 1 > l3HycrQnKLo; l3HycrQnKLo++)
        for (lXe1YLUC = ofo7d83gNzbQ - 1; lXe1YLUC > l3HycrQnKLo; lXe1YLUC--) {
            if (BwMqBliIbyD[lXe1YLUC] > BwMqBliIbyD[lXe1YLUC - 1]) {
                T7bLBc = BwMqBliIbyD[lXe1YLUC];
                BwMqBliIbyD[lXe1YLUC] = BwMqBliIbyD[lXe1YLUC - 1];
                BwMqBliIbyD[lXe1YLUC - 1] = T7bLBc;
            }
        }
    {
        l3HycrQnKLo = 0;
        while (l3HycrQnKLo < y7gnXstxk4) {
            printf ("%.2f ", TJLkPO[l3HycrQnKLo]);
            l3HycrQnKLo++;
        }
    }
    {
        l3HycrQnKLo = 0;
        while (l3HycrQnKLo < ofo7d83gNzbQ - 1) {
            printf ("%.2f ", BwMqBliIbyD[l3HycrQnKLo]);
            l3HycrQnKLo++;
        }
    }
    printf ("%.2f", BwMqBliIbyD[l3HycrQnKLo]);
    return 0;
}

