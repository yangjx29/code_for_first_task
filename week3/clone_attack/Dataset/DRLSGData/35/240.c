int main () {
    int xfueVoP1, MqevdD, o2C1yF [(903 - 895)] [(833 - 825)], BneWAfg14H [(487 - 479)] [(343 - 335)], f5RAFM7 [(599 - 591)] [(41 - 33)], Ny9epoH7Tz [(101 - 93)] [(604 - 596)], Ns6lz9tq, FfCdGT1W, S803atDQ1HWv, z6o7JCKNS5X1;
    scanf ("%d,%d", &xfueVoP1, &MqevdD);
    for (Ns6lz9tq = (669 - 669); Ns6lz9tq < xfueVoP1; Ns6lz9tq = Ns6lz9tq +(497 - 496)) {
        for (FfCdGT1W = (762 - 762); FfCdGT1W < MqevdD; FfCdGT1W = FfCdGT1W +(518 - 517)) {
            scanf ("%d", &o2C1yF[Ns6lz9tq][FfCdGT1W]);
            BneWAfg14H[Ns6lz9tq][FfCdGT1W] = o2C1yF[Ns6lz9tq][FfCdGT1W];
            f5RAFM7[Ns6lz9tq][FfCdGT1W] = Ns6lz9tq;
            Ny9epoH7Tz[Ns6lz9tq][FfCdGT1W] = FfCdGT1W;
        }
    }
    for (Ns6lz9tq = (435 - 435); Ns6lz9tq < xfueVoP1; Ns6lz9tq++) {
        for (FfCdGT1W = (715 - 714); FfCdGT1W <= MqevdD; FfCdGT1W = FfCdGT1W +(967 - 966)) {
            for (S803atDQ1HWv = (474 - 474); S803atDQ1HWv < MqevdD -FfCdGT1W; S803atDQ1HWv = S803atDQ1HWv +(785 - 784)) {
                if (o2C1yF[Ns6lz9tq][S803atDQ1HWv +(354 - 353)] < o2C1yF[Ns6lz9tq][S803atDQ1HWv]) {
                    z6o7JCKNS5X1 = o2C1yF[Ns6lz9tq][S803atDQ1HWv];
                    o2C1yF[Ns6lz9tq][S803atDQ1HWv] = o2C1yF[Ns6lz9tq][S803atDQ1HWv +(430 - 429)];
                    o2C1yF[Ns6lz9tq][S803atDQ1HWv +(211 - 210)] = z6o7JCKNS5X1;
                    z6o7JCKNS5X1 = f5RAFM7[Ns6lz9tq][S803atDQ1HWv];
                    f5RAFM7[Ns6lz9tq][S803atDQ1HWv] = f5RAFM7[Ns6lz9tq][S803atDQ1HWv +(333 - 332)];
                    f5RAFM7[Ns6lz9tq][S803atDQ1HWv +(256 - 255)] = z6o7JCKNS5X1;
                }
            }
        }
    }
    for (FfCdGT1W = (970 - 970); MqevdD > FfCdGT1W; FfCdGT1W = FfCdGT1W +(130 - 129)) {
        for (Ns6lz9tq = (525 - 524); xfueVoP1 >= Ns6lz9tq; Ns6lz9tq++) {
            for (S803atDQ1HWv = (635 - 635); xfueVoP1 - Ns6lz9tq > S803atDQ1HWv; S803atDQ1HWv++) {
                if (BneWAfg14H[S803atDQ1HWv +(860 - 859)][FfCdGT1W] < BneWAfg14H[S803atDQ1HWv][FfCdGT1W]) {
                    z6o7JCKNS5X1 = BneWAfg14H[S803atDQ1HWv][FfCdGT1W];
                    BneWAfg14H[S803atDQ1HWv][FfCdGT1W] = BneWAfg14H[S803atDQ1HWv +(74 - 73)][FfCdGT1W];
                    BneWAfg14H[S803atDQ1HWv +(258 - 257)][FfCdGT1W] = z6o7JCKNS5X1;
                    z6o7JCKNS5X1 = Ny9epoH7Tz[S803atDQ1HWv][FfCdGT1W];
                    Ny9epoH7Tz[S803atDQ1HWv][FfCdGT1W] = Ny9epoH7Tz[S803atDQ1HWv +(31 - 30)][FfCdGT1W];
                    Ny9epoH7Tz[S803atDQ1HWv +(619 - 618)][FfCdGT1W] = z6o7JCKNS5X1;
                }
            }
        }
    }
    z6o7JCKNS5X1 = (636 - 636);
    for (Ns6lz9tq = (138 - 138); Ns6lz9tq < xfueVoP1; Ns6lz9tq++) {
        for (FfCdGT1W = (177 - 177); FfCdGT1W < MqevdD; FfCdGT1W++) {
            if (BneWAfg14H[(264 - 264)][FfCdGT1W] == o2C1yF[Ns6lz9tq][MqevdD -(930 - 929)]) {
                z6o7JCKNS5X1 = z6o7JCKNS5X1 + (699 - 698);
                printf ("%d+%d\n", f5RAFM7[Ns6lz9tq][MqevdD -(508 - 507)], Ny9epoH7Tz[(235 - 235)][FfCdGT1W]);
            }
        }
    }
    if (z6o7JCKNS5X1 == (363 - 363))
        printf ("No\n");
    return (11 - 11);
}

