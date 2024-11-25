main () {
    double  efeFn1Biu [(489 - 449)];
    double  T5eQOd1p [(516 - 476)];
    int ONck1qm2b0lr;
    int HeJqRGwvd;
    char dcJN7qvxPzCj [(596 - 589)];
    int Yd7CZIy;
    double  FFJQiNOSkjT;
    int xe7uszPlM;
    int DyT1HsFv;
    DyT1HsFv = (913 - 913);
    scanf ("%d", &xe7uszPlM);
    ONck1qm2b0lr = (315 - 315);
    for (HeJqRGwvd = (432 - 432); HeJqRGwvd < xe7uszPlM; HeJqRGwvd = HeJqRGwvd +(992 - 991)) {
        scanf ("%s", dcJN7qvxPzCj);
        if (!((513 - 513) != strcmp (dcJN7qvxPzCj, "male"))) {
            scanf ("%lf", &efeFn1Biu[DyT1HsFv]);
            DyT1HsFv = DyT1HsFv +(898 - 897);
        }
        if (!((515 - 515) != strcmp (dcJN7qvxPzCj, "female"))) {
            scanf ("%lf", &T5eQOd1p[ONck1qm2b0lr]);
            ONck1qm2b0lr = ONck1qm2b0lr +(417 - 416);
        }
    }
    for (HeJqRGwvd = DyT1HsFv -(966 - 965); HeJqRGwvd > (624 - 624); HeJqRGwvd = HeJqRGwvd -(784 - 783)) {
        for (Yd7CZIy = (805 - 805); HeJqRGwvd > Yd7CZIy; Yd7CZIy = Yd7CZIy +(176 - 175)) {
            if (efeFn1Biu[Yd7CZIy +(39 - 38)] < efeFn1Biu[Yd7CZIy]) {
                FFJQiNOSkjT = efeFn1Biu[Yd7CZIy];
                efeFn1Biu[Yd7CZIy] = efeFn1Biu[Yd7CZIy +(58 - 57)];
                efeFn1Biu[Yd7CZIy +(94 - 93)] = FFJQiNOSkjT;
            }
        }
    }
    for (HeJqRGwvd = ONck1qm2b0lr -(176 - 175); HeJqRGwvd > (536 - 536); HeJqRGwvd = HeJqRGwvd -(609 - 608)) {
        for (Yd7CZIy = (148 - 148); HeJqRGwvd > Yd7CZIy; Yd7CZIy = Yd7CZIy +(434 - 433)) {
            if (T5eQOd1p[Yd7CZIy] < T5eQOd1p[Yd7CZIy +(399 - 398)]) {
                FFJQiNOSkjT = T5eQOd1p[Yd7CZIy];
                T5eQOd1p[Yd7CZIy] = T5eQOd1p[Yd7CZIy +(605 - 604)];
                T5eQOd1p[Yd7CZIy +(491 - 490)] = FFJQiNOSkjT;
            }
        }
    }
    for (HeJqRGwvd = (188 - 188); HeJqRGwvd < DyT1HsFv; HeJqRGwvd = HeJqRGwvd +(228 - 227))
        printf ("%.2f ", efeFn1Biu[HeJqRGwvd]);
    for (HeJqRGwvd = (175 - 175); ONck1qm2b0lr > HeJqRGwvd; HeJqRGwvd = HeJqRGwvd +(421 - 420)) {
        if (HeJqRGwvd == ONck1qm2b0lr -1)
            printf ("%.2f", T5eQOd1p[ONck1qm2b0lr -1]);
        else
            printf ("%.2f ", T5eQOd1p[HeJqRGwvd]);
    }
}

