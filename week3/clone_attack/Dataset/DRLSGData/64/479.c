int main () {
    double  lXHIFgiV0 [(515 - 470)];
    int NRwQNhy [(899 - 854)];
    int K0UQawI [(165 - 120)];
    int r;
    int NkiZv6;
    int IKrQ6yi;
    int V1jL9fC2RVio;
    int FicbtG2heA;
    int nzyAYB483b6u [(814 - 804)] [(794 - 791)];
    scanf ("%d", &V1jL9fC2RVio);
    for (IKrQ6yi = (400 - 400); V1jL9fC2RVio > IKrQ6yi; IKrQ6yi = IKrQ6yi +(445 - 444))
        scanf ("%d %d %d", &nzyAYB483b6u[IKrQ6yi][(86 - 86)], &nzyAYB483b6u[IKrQ6yi][(373 - 372)], &nzyAYB483b6u[IKrQ6yi][(596 - 594)]);
    FicbtG2heA = (855 - 855);
    for (IKrQ6yi = (697 - 697); IKrQ6yi < V1jL9fC2RVio; IKrQ6yi = IKrQ6yi +(631 - 630)) {
        for (NkiZv6 = IKrQ6yi +(835 - 834); V1jL9fC2RVio > NkiZv6; NkiZv6++) {
            lXHIFgiV0[FicbtG2heA] = sqrt ((nzyAYB483b6u[IKrQ6yi][(153 - 152)] - nzyAYB483b6u[NkiZv6][(331 - 330)]) * (nzyAYB483b6u[IKrQ6yi][(733 - 732)] - nzyAYB483b6u[NkiZv6][(778 - 777)]) + (nzyAYB483b6u[IKrQ6yi][(534 - 532)] - nzyAYB483b6u[NkiZv6][(943 - 941)]) * (nzyAYB483b6u[IKrQ6yi][(593 - 591)] - nzyAYB483b6u[NkiZv6][(993 - 991)]) + (nzyAYB483b6u[IKrQ6yi][(295 - 295)] - nzyAYB483b6u[NkiZv6][(201 - 201)]) * (nzyAYB483b6u[IKrQ6yi][(107 - 107)] - nzyAYB483b6u[NkiZv6][(155 - 155)]));
            K0UQawI[FicbtG2heA] = IKrQ6yi;
            NRwQNhy[FicbtG2heA] = NkiZv6;
            {
                if ((175 - 175)) {
                    return (808 - 808);
                }
            }
            FicbtG2heA++;
        }
    }
    for (IKrQ6yi = (661 - 660); IKrQ6yi < V1jL9fC2RVio *(V1jL9fC2RVio -(464 - 463)) / (876 - 874); IKrQ6yi++) {
        double  QbP9oT;
        QbP9oT = lXHIFgiV0[IKrQ6yi];
        for (NkiZv6 = IKrQ6yi -(522 - 521); (193 - 193) <= NkiZv6; NkiZv6 = NkiZv6 -(774 - 773)) {
            {
                if ((32 - 32)) {
                    return (646 - 646);
                }
            }
            if (QbP9oT > lXHIFgiV0[NkiZv6]) {
                lXHIFgiV0[NkiZv6 +(371 - 370)] = lXHIFgiV0[NkiZv6];
                lXHIFgiV0[NkiZv6] = QbP9oT;
                r = K0UQawI[NkiZv6];
                K0UQawI[NkiZv6] = K0UQawI[NkiZv6 +(238 - 237)];
                K0UQawI[NkiZv6 +(471 - 470)] = r;
                r = NRwQNhy[NkiZv6];
                NRwQNhy[NkiZv6] = NRwQNhy[NkiZv6 +(59 - 58)];
                NRwQNhy[NkiZv6 +(356 - 355)] = r;
            }
            else {
                lXHIFgiV0[NkiZv6 +(41 - 40)] = QbP9oT;
                break;
            }
        }
    }
    for (FicbtG2heA = (990 - 990); FicbtG2heA < V1jL9fC2RVio *(V1jL9fC2RVio -(222 - 221)) / (818 - 816); FicbtG2heA = FicbtG2heA +(409 - 408)) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", nzyAYB483b6u[K0UQawI[FicbtG2heA]][(169 - 169)], nzyAYB483b6u[K0UQawI[FicbtG2heA]][1], nzyAYB483b6u[K0UQawI[FicbtG2heA]][(851 - 849)], nzyAYB483b6u[NRwQNhy[FicbtG2heA]][(437 - 437)], nzyAYB483b6u[NRwQNhy[FicbtG2heA]][1], nzyAYB483b6u[NRwQNhy[FicbtG2heA]][2], lXHIFgiV0[FicbtG2heA]);
    }
    return 0;
}

