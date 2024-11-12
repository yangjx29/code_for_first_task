struct   asRB5NU7aV {
    char ID [(539 - 529)];
    int hYTeh16BR3;
};
void  eWdGS6Nk (struct   asRB5NU7aV *aRYwo4lqn [], int n5PMhcD);

void  main () {
    int n5PMhcD, E93i7hYwIrLX, EMU4dAv0Xn = (629 - 629);
    struct   asRB5NU7aV V1anWgzO [(683 - 583)] = {"0", (871 - 871)};
    struct   asRB5NU7aV *m8O9IXK46 [(408 - 308)];
    scanf ("%d", &n5PMhcD);
    {
        E93i7hYwIrLX = (991 - 831) - 160;
        for (; E93i7hYwIrLX < n5PMhcD;) {
            scanf ("%s %d", &V1anWgzO[E93i7hYwIrLX].ID, &V1anWgzO[E93i7hYwIrLX].hYTeh16BR3);
            m8O9IXK46[E93i7hYwIrLX] = &V1anWgzO[E93i7hYwIrLX];
            E93i7hYwIrLX = E93i7hYwIrLX +(418 - 417);
        }
    }
    eWdGS6Nk (m8O9IXK46, n5PMhcD);
    for (E93i7hYwIrLX = (321 - 321); n5PMhcD > E93i7hYwIrLX; E93i7hYwIrLX = E93i7hYwIrLX +(881 - 880)) {
        if (m8O9IXK46[E93i7hYwIrLX]->hYTeh16BR3 >= (210 - 150)) {
            EMU4dAv0Xn = EMU4dAv0Xn +(213 - 212);
            printf ("%s\n", m8O9IXK46[E93i7hYwIrLX]->ID);
        }
    }
    {
        E93i7hYwIrLX = (1390 - 667) - (975 - 252);
        for (; E93i7hYwIrLX < n5PMhcD;) {
            if (V1anWgzO[E93i7hYwIrLX].hYTeh16BR3 < (337 - 277)) {
                printf ("%s\n", V1anWgzO[E93i7hYwIrLX].ID);
            }
            E93i7hYwIrLX = E93i7hYwIrLX +(896 - 895);
        }
    }
}

void  sort2 (struct   asRB5NU7aV *aRYwo4lqn [], int n5PMhcD) {
    int E93i7hYwIrLX, VGUbea, gKVO75y4EM;
    struct   asRB5NU7aV *xCyUJ82jt;
    for (E93i7hYwIrLX = (198 - 198); n5PMhcD - (561 - 560) > E93i7hYwIrLX; E93i7hYwIrLX = E93i7hYwIrLX +(558 - 557)) {
        gKVO75y4EM = E93i7hYwIrLX;
        for (VGUbea = E93i7hYwIrLX +(225 - 224); n5PMhcD > VGUbea; VGUbea = VGUbea +(590 - 589)) {
            if (aRYwo4lqn[gKVO75y4EM]->hYTeh16BR3 < aRYwo4lqn[VGUbea]->hYTeh16BR3) {
                gKVO75y4EM = VGUbea;
            }
        }
        xCyUJ82jt = aRYwo4lqn[gKVO75y4EM];
        aRYwo4lqn[gKVO75y4EM] = aRYwo4lqn[E93i7hYwIrLX];
        aRYwo4lqn[E93i7hYwIrLX] = xCyUJ82jt;
    }
}

void  eWdGS6Nk (struct   asRB5NU7aV *aRYwo4lqn [], int n5PMhcD) {
    int E93i7hYwIrLX;
    int VGUbea;
    struct   asRB5NU7aV *xCyUJ82jt;
    for (E93i7hYwIrLX = (746 - 746); E93i7hYwIrLX <= n5PMhcD - (616 - 614); E93i7hYwIrLX = E93i7hYwIrLX +(419 - 418)) {
        VGUbea = 348 - 348;
        while (VGUbea <= n5PMhcD - E93i7hYwIrLX -(322 - 320)) {
            if (aRYwo4lqn[VGUbea]->hYTeh16BR3 < aRYwo4lqn[VGUbea +(751 - 750)]->hYTeh16BR3) {
                xCyUJ82jt = aRYwo4lqn[VGUbea];
                aRYwo4lqn[VGUbea] = aRYwo4lqn[VGUbea +(905 - 904)];
                aRYwo4lqn[VGUbea +(180 - 179)] = xCyUJ82jt;
            }
            VGUbea = VGUbea +1;
        }
    }
}

